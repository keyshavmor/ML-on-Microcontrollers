#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/add/add5_model_data.h"

const unsigned int g_add5_model_data_size = 1048;
alignas(16) const unsigned char g_add5_model_data[] = {0x1c,0x0,0x0,0x0,0x54,0x46,0x4c,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x0,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0xd4,0x3,0x0,0x0,0x3,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xf8,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x4,0x0,0x4,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0xe4,0xfd,0xff,0xff,0x10,0x0,0x0,0x0,0x5c,0x0,0x0,0x0,0x60,0x0,0x0,0x0,0x68,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x0,0x0,0x10,0x0,0xc,0x0,0xb,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0xb,0x18,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x8,0x0,0x8,0x0,0x0,0x0,0x7,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,0x8c,0x1,0x0,0x0,0xb8,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x5e,0xff,0xff,0xff,0x14,0x0,0x0,0x0,0x48,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x78,0x0,0x0,0x0,0x84,0xfe,0xff,0xff,0x10,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1a,0x8,0x5e,0x3b,0x1,0x0,0x0,0x0,0x5e,0x6,0xde,0x42,0x1,0x0,0x0,0x0,0xe3,0x5c,0xc0,0xc2,0x34,0x0,0x0,0x0,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x33,0x2f,0x73,0x68,0x6f,0x72,0x74,0x63,0x75,0x74,0x2f,0x61,0x64,0x64,0x2f,0x61,0x64,0x64,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x18,0x0,0x14,0x0,0x13,0x0,0xc,0x0,0x8,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x48,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x98,0x0,0x0,0x0,0x34,0xff,0xff,0xff,0x10,0x0,0x0,0x0,0x18,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x84,0x93,0x19,0x3b,0x1,0x0,0x0,0x0,0x2d,0x84,0x31,0x42,0x1,0x0,0x0,0x0,0x51,0x92,0x99,0xc2,0x55,0x0,0x0,0x0,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x33,0x2f,0x73,0x68,0x6f,0x72,0x74,0x63,0x75,0x74,0x2f,0x75,0x70,0x73,0x61,0x6d,0x70,0x6c,0x65,0x32,0x64,0x2f,0x2f,0x72,0x65,0x73,0x69,0x7a,0x65,0x2f,0x52,0x65,0x73,0x69,0x7a,0x65,0x4e,0x65,0x61,0x72,0x65,0x73,0x74,0x4e,0x65,0x69,0x67,0x68,0x62,0x6f,0x72,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0xe,0x0,0x14,0x0,0x10,0x0,0xf,0x0,0x0,0x0,0x8,0x0,0x4,0x0,0xe,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x78,0x1,0x0,0x0,0xc,0x0,0x14,0x0,0x10,0x0,0xc,0x0,0x8,0x0,0x4,0x0,0xc,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x24,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0xd9,0x42,0x97,0x3b,0x1,0x0,0x0,0x0,0xaa,0x41,0x17,0x43,0x1,0x0,0x0,0x0,0xb0,0xb0,0xe0,0xc2,0x25,0x1,0x0,0x0,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x35,0x32,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x3b,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x35,0x33,0x2f,0x43,0x6f,0x6e,0x76,0x32,0x44,0x3b,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x35,0x32,0x2f,0x43,0x6f,0x6e,0x76,0x32,0x44,0x3b,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x35,0x32,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x31,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x14,0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0xa,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0xa,0x0,0x0,0x0,0x2,0x0,0x0,0x0};
