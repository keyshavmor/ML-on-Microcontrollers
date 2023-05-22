# Copyright 2021 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see https://www.apache.org/licenses/LICENSE-2.0 for details.
# SPDX-License-Identifier: Apache-2.0
#
# Author: Viviane Potocnik <vivianep@iis.ee.ethz.ch> (ETH Zurich) 

from pickletools import uint8
import matplotlib.pyplot as plt
import numpy as np
import serial
import sys
import time
import tkinter as tk
import customtkinter as ctk
from matplotlib.figure import Figure
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from PIL import Image, ImageTk

import os
import random
import csv
import cv2

# Set the paths to the CIFAR-10 test set and labels files
test_set_path = 'x_test.npy'
labels_path = 'y_test.npy'

# Load the CIFAR-10 test set and labels
test_set = np.load(test_set_path)
labels = np.load(labels_path)

# Create the "test" directory if it doesn't exist
test_dir = 'test'
os.makedirs(test_dir, exist_ok=True)

# Initialize a dictionary to store the selected images and labels
selected_images = {}

# Randomly select 10 images for each class
for class_label in range(10):
    # Get the indices of images with the current class label
    class_indices = np.where(labels == class_label)[0]

    # Randomly select 10 indices
    selected_indices = random.sample(list(class_indices), 10)

    # Store the selected images and labels
    for index in selected_indices:
        image = test_set[index]
        selected_images[index] = {
            'image': image,
            'label': class_label
        }

        # Save the image to the "test" directory
        image_filename = f"{index}.png"
        image_path = os.path.join(test_dir, image_filename)
        cv2.imwrite(image_path, image)

# Create a mapping of image file names and labels in a CSV file
mapping_filename = 'mapping.csv'
mapping_path = os.path.join(test_dir, mapping_filename)
with open(mapping_path, 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Image File', 'Label'])
    for index, data in selected_images.items():
        image_filename = f"{index}.png"
        label = data['label']
        writer.writerow([image_filename, label])

# Specify the directory containing the images and mapping file
test_dir = 'test'
mapping_file = 'mapping.csv'

# Initialize empty lists for storing the images and labels
x = []
y = []

# Read the mapping file
mapping_path = os.path.join(test_dir, mapping_file)
with open(mapping_path, 'r') as file:
    csv_reader = csv.reader(file)
    next(csv_reader)  # Skip the header row
    for row in csv_reader:
        image_file, label = row
        image_path = os.path.join(test_dir, image_file)
        image = cv2.imread(image_path)
        print(image.shape)
        x.append(image)
        y.append(int(label))

# Convert the lists to NumPy arrays
x = np.array(x)
y = np.array(y)

# Print the shapes of x and y arrays
print("Shape of x:", x.shape)
print("Shape of y:", y.shape)

if __name__ == '__main__':

    dataset_name = sys.argv[1]
    classes = []

    if(dataset_name == 'mnist'):
        classes = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    elif(dataset_name == 'cifar10'):
        classes = ['airplane', 'automobile', 'bird', 'cat', 'deer', 'dog', 'frog', 'horse', 'ship', 'truck']
    elif(dataset_name == 'fmnist'):
        classes = ["T-shirt/top","Trouser","Pullover","Dress","Coat","Sandal","Shirt","Sneaker","Bag","Ankle boot"]

    ser = serial.Serial(port='/dev/tty.usbmodem14103', baudrate=115200, timeout=3)
    # flush the serial port
    ser.flush()
    ser.flushInput()
    ser.flushOutput()

    correct_count = 0
    # define how many images from the test set to send to the MCU
    #test_len = 20

    # Iterate over each image and label
    for image, label in zip(x, y):
        class_idx = label
        ser.write(image.tobytes())
        time.sleep(1)
        img = ser.read(32*32*3)
        img = np.frombuffer(img, dtype=np.uint8)
        print("Image sent to the MCUs: \n {}".format(img))
        time.sleep(1)
        pred = ser.read(10)
        pred = np.frombuffer(pred, dtype=np.uint8)
        print(f'Target: {classes[class_idx]}, Prediction (from MCU): {classes[np.argmax(pred)]}')
        if (np.argmax(pred) == class_idx):
            correct_count += 1

        #root = ctk.CTk()
        #root.title('Real-time inference')
        #imgplot = plt.imshow(x.astype(np.uint8))
        #f = Figure()
        #a = f.add_subplot(111)
        #a.imshow(x.astype(np.uint8))
        ## store figure to file
        #f.savefig('test.png')
        #image = Image.open('test.png')
        #photo = ImageTk.PhotoImage(image)
        #root.grid_rowconfigure((0, 1, 2, 3, 4), weight=1)
        #root.grid_columnconfigure((0, 1, 2, 3, 4), weight=1)
        #color = '#0B8457' if (np.argmax(pred) == class_idx) else '#F24C4C'
        #darkgrey = '#2D2D2D'
        #yellow = '#FFC107'
        #quit = '#DA0037'
        #next = '#3E497A'
        #next2 = '#3AB4F2'
        #ctk.CTkButton(master=root, image = photo, text=None).grid(row=0, column=0, padx=(10, 5), pady=10, columnspan=2)
        ## pre label should be on the left of the grid
        #text_var = tk.StringVar(value=f'Prediction: {classes[np.argmax(pred)]}')
        #pred_label = ctk.CTkButton(root, textvariable=text_var, font=('Helvetica', 18, 'bold'), fg_color=color, text_color='white', hover=False)
        #pred_label.grid(row=1, column=0, padx=(10, 5), pady=10, columnspan=1, sticky='nsew')
        #target_label = ctk.CTkButton(root, text=f'Target: {classes[class_idx]}' , font=('Helvetica', 18, 'bold'), fg_color=color, text_color='white', hover=False)
        #target_label.grid(row=1, column=1, padx=(5, 10), pady=10, columnspan=1, sticky='nsew')
        #accuracy = (correct_count/test_len) * 100
        #text_var = tk.StringVar(value=f'Accuracy: {accuracy:.2f}%')
        #accuracy_label = ctk.CTkButton(root, textvariable=text_var, font=('Helvetica', 18, 'bold'), fg_color=yellow, text_color=darkgrey, hover=False)
        #accuracy_label.grid(row=2, column=0, padx=(10, 10), pady=10, columnspan=2, sticky='nsew')
        # add button to go to the next image
        #ctk.CTkButton(master=root, text='Next', command=root.destroy, fg_color=next, font=('Helvetica', 18, 'bold'), hover_color=next2).grid(row=3, column=0, padx=(10, 5), pady=10, columnspan=2, 
#sticky='nsew')
        #ctk.CTkButton(master=root, text='Quit', command=sys.exit, fg_color=next, hover_color=quit, font=('Helvetica', 18, 'bold')).grid(row=4, column=0, padx=(10, 5), pady=10, columnspan=2, 
#sticky='nsew')

        #root.mainloop()

print("Correctly classified images count:", correct_count)
print("Accuracy:", correct_count)
