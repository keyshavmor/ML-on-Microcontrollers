#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/pad/pad1_golden_int16_test_data.h"

const unsigned int g_pad1_golden_int16_test_data_size = 2592;
alignas(16) const int16_t g_pad1_golden_int16_test_data[] = {0,0,0,0,0,0,0,0,-17783,24726,18646,-5028,-25635,-13258,22439,-32249,27305,-19438,-17173,8499,1941,-13860,-28788,-9771,7953,-32286,6840,11060,26173,27540,10603,29246,-20498,7307,-8692,-18059,23853,5314,-31926,-5262,5732,-13877,-27667,-10959,5480,10491,-24876,27535,3840,-20416,5150,22583,-24911,-14697,231,-2433,-32532,19286,-4873,322,24657,13461,-27816,-21049,30799,16953,-10298,-18350,412,-9388,29914,-5187,14130,14821,-4779,23285,-23692,-6986,16647,-875,-23998,-9248,-24712,6042,-29390,-7338,13280,19511,12872,-192,-458,29454,-23162,19475,14964,-12809,-12689,31135,-26141,-18807,12718,7792,7347,-19734,31530,28047,8105,6919,-26021,-8024,-13613,-13618,11194,3779,-3845,-17705,10820,-3099,-3066,20516,13749,-5163,14400,-32602,6114,-19201,-19884,14459,-28344,-26837,15612,-2249,18885,-11130,-14669,-16364,-14626,-5851,8590,15059,11457,-19297,17951,6788,26388,-23675,-23305,-5628,-27441,32027,-273,-23625,218,-137,17992,166,-24250,17423,-21579,29164,10265,21089,-26289,-16367,-6658,32427,-612,26574,25865,18358,-28207,6827,-22837,18510,-5275,20012,-2958,537,-16651,3164,-2500,10890,24077,27619,11726,-4922,-14320,-2195,12270,-12653,10148,23406,-4788,18585,-936,30150,-8793,-15680,4114,7255,-24207,-30957,24210,-13976,-23734,5868,25113,-3040,13403,-30190,32534,-407,22359,-9498,22675,31760,-12659,29556,-22643,17698,31146,-25354,30436,-13253,-10873,5624,-2803,28534,15982,9371,-17105,-7495,-9341,-15075,26979,-1335,-11174,-16946,-29960,-28733,23808,2552,5897,16378,-20123,26772,-20514,17081,1792,9686,-7734,8805,-23252,17124,-16059,-13206,-3971,18355,-12377,-4230,13987,-29210,-21136,690,-14219,24917,-21699,14530,-5860,-8956,-470,-1870,-24316,6238,-12476,-29017,19233,-8342,5726,-684,29166,-29118,-19548,15084,15237,-24274,25745,-31237,21133,19836,21249,6652,31709,30246,21595,-20081,18617,15015,-4624,23542,8972,-14261,-30254,12895,-15041,26777,30096,14478,2213,-3980,22006,-9869,30403,-3215,-4757,-27473,14899,-16442,-1243,13994,-14808,4929,8482,29921,-16154,30217,-4765,32466,-17434,23146,-14163,-14962,-30122,28875,5001,-9741,13979,7787,17232,-6610,-31972,-19638,-29137,15487,19715,-10797,-31482,-24468,-10361,4733,-20153,-24440,32669,-695,-27562,-11466,-22084,-9034,11290,-10014,3060,-30999,-3611,4274,2035,-15303,-819,-30268,-6226,27700,-21134,-23973,14361,13648,22121,-27936,-9094,-29840,-8166,12739,28999,22195,-9943,11253,4266,9867,-23549,-24135,-1646,32658,-17584,27876,13313,1946,-12473,30719,-11669,3125,-1464,31435,18622,-29762,30555,-2152,-2856,10536,18392,-9579,13070,-29627,-7645,-23049,-5084,28173,22764,12576,-10395,-22500,-3825,9461,8571,26145,19153,28198,-25334,2021,-13794,-20933,23556,29659,-19385,20108,-21264,4240,-16439,-4711,-20491,-27756,20875,-32630,-23809,-3620,-20994,-16565,18606,-28136,23490,-31275,-22227,25957,2423,-7425,28882,-26690,10818,-1177,20562,-13725,30895,5344,16879,-27987,-13687,7671,25098,30930,15064,-15935,18424,2956,257,-5634,-13849,-18803,23153,6203,18807,-12636,-32637,25948,-25241,-26922,29228,22400,-29879,-16816,1291,-6523,32220,-13110,-29657,11092,-11412,32323,10923,-27781,-32323,-12481,4920,29802,-31901,-4362,-13236,-9822,-2520,-24988,4926,4602,-2066,-11284,9254,-3546,21380,13392,6672,-16843,15114,6679,7519,28169,-3717,-28618,-29502,7133,29463,26589,31035,9633,-8744,-4150,31059,11105,-17165,-26343,-12589,-11423,-9978,17376,-13799,-18205,25560,27621,19676,-852,2523,-32262,21601,-18147,16603,32353,-10505,2441,6713,-11466,-207,-23898,-13252,-4776,-7603,26268,22427,-4062,24698,1029,18067,-15357,-11810,-12917,-6420,-23387,11684,-19153,7948,-25875,30052,-29880,18046,21320,18052,-1493,-7030,22524,5748,17939,-16158,-18299,8645,6172,-27823,-32371,-21912,4319,12942,22836,-2030,-26355,-28339,-14296,28051,-18023,20158,27873,-15986,22411,-16392,-4881,-9085,23570,-11640,-10509,22684,10293,-19998,-24811,-12317,-14425,-16211,-29033,-25217,26108,-31384,6660,26571,14909,26630,28048,-12393,-5719,31641,-20661,-14552,13033,4658,-423,-12665,10171,-14045,-2967,6178,-32380,3446,28206,-5352,-19526,8498,-14579,-12940,-31230,-959,-13380,-17301,20460,-4270,30200,-31785,-11928,3509,1215,-15414,13117,13170,-16989,-26897,-79,14003,-26241,10406,11362,28509,29816,5692,14635,20903,-10948,-3774,-2100,-7966,20219,-17672,-1973,-5768,-12455,-26338,31784,-209,7593,-746,-20537,13530,28987,16528,18560,-28215,-6611,10605,-21425,-3398,-10024,26012,-14293,23434,22059,27428,2494,-20485,8284,6856,27275,5963,-23062,16607,-32426,-28219,23236,-31125,17650,-20784,-13771,14494,-19297,24900,6519,17040,-19608,15019,-6854,-24281,25328,21502,-17862,-31260,-17016,-23814,-18755,-1388,-12566,-6338,-28287,-6525,32344,24770,22154,3039,-1617,-30796,-19918,-16930,26349,-14289,-20269,26,4991,18084,22449,8882,25609,-12865,-17264,12796,-1770,2555,-27009,11552,19240,5489,-10738,-11002,5715,15844,-29032,24669,-7042,-16003,480,19735,-24955,-3657,26,31022,-876,13208,31270,4825,6113,2512,-16979,-20247,-31804,27189,-9970,21371,-18852,22805,-24567,10327,7940,-11235,-10671,-5400,-10608,-11855,5886,9801,21147,-621,-9300,4653,29401,3552,-14575,-26573,-7698,2444,-9212,-30095,-5666,7746,-18885,-23101,-11820,-21394,4511,23946,10045,1409,-28446,-19102,-17151,18517,19855,7811,9687,24092,12264,18196,8,24907,21068,-1299,-22576,-16035,13698,19646,25369,-7597,29621,-3352,-9779,5285,14580,19362,13078,-31823,9463,-6635,19016,27131,15781,-19884,19440,16320,-23894,-29084,-2082,24331,17108,20702,26804,-6347,7573,-2890,-31400,14842,30934,-29545,-5100,-25844,10764,22643,501,25501,6553,25967,-31209,1005,-8930,341,5808,-2680,21597,-5386,12230,32592,-20621,15072,-5896,15439,23103,6861,-20829,-8972,23656,30437,30676,11042,22217,-19119,29834,12418,-32404,1674,-11048,-17745,-15654,27696,24786,-21102,11645,-7403,2382,-22141,21686,12196,13901,12593,24171,-24348,12382,25417,-7354,-3291,-17189,-12989,3766,-32543,-11754,23372,16810,-4709,-15501,-24083,8501,30328,21318,4017,-20171,31692,-29492,8697,-790,-11002,21475,-23640,21008,-19324,-12582,11033,-2917,22168,-24246,-17496,20329,-30738,12777,1244,-26956,31235,20336,-7862,-13247,7089,20128,-2804,-7831,-17518,-16831,24835,-19107,-6098,12740,-13441,-14889,-30980,-21593,-7893,13847,-18649,-22754,-26616,-12489,-31780,24623,-28216,-5934,-7302,9378,-1587,27712,-20098,9504,-17287,-26750,-9077,-4287,11513,1850,-31110,6852,18394,-23343,-9348,19296,-22960,16598,29924,-22429,-8416,-24126,-22737,14170,27686,-18822,-4678,-27777,7503,30697,29414,22738,9495,-29229,-15270,19999,19785,-25411,5902,17927,31797,12122,-3720,20681,28046,-17158,31327,-5685,20503,32764,2112,443,-22774,23195,21607,30331,28977,-15284,-29471,31426,5385,17966,-26658,5078,6656,7138,-12450,13003,-28608,6902,-4872,1755,-16490,19706,-4936,-13501,11281,30731,-22795,-21639,28670,17215,4023,17816,11997,20466,-16896,-27535,1791,24083,13037,-3019,-19750,-23062,10543,19309,14673,4279,-25461,-22639,-22916,32189,20262,29403,-24502,-27819,-15139,-24149,22391,2762,-9625,-1686,-29994,-6080,-27862,-16949,20852,24196,4034,-21824,-21279,31202,22312,-5513,-25275,-1924,-8432,19973,-2840,31464,-15124,-2708,22123,3033,23529,7971,-16993,-2889,-1407,-24257,-26078,8849,6204,-13770,19262,-23442,17540,-10756,31741,-29581,-29985,5940,840,5999,-29067,-30386,-6500,-8923,28848,-12609,-27438,-30599,24961,-30205,-16530,-27348,-27187,-6949,14160,19990,17397,13129,21533,31092,26993,-30790,27630,-2368,8397,-3449,27689,20826,-24602,-2091,-26463,23461,-31442,-14736,30098,15073,26633,17345,-26481,2610,24920,1914,-23626,-30201,31305,-20470,20142,-21418,22716,-9890,-5797,-4486,-10039,-25806,5547,-15845,9797,31729,19622,-16889,5527,-1926,9801,-30163,-30438,-10480,8439,-19797,-126,3112,-11689,11478,-31031,25841,-20792,-9218,5318,11034,28108,6566,7210,-17947,3347,17320,13945,12345,25982,-723,31672,3576,28,-31655,29361,25844,-7483,-20649,-31921,31049,-32728,23316,-5411,-28877,2801,-25874,2999,-30053,-2104,-22726,-3376,9985,-17408,16931,6928,30345,15038,26006,2322,6074,23356,-4582,-12984,28903,16124,32228,-6093,26971,-31691,-9428,-19240,-32740,15461,-5953,-1466,-18978,-22473,3854,24441,24951,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-3544,-1864,-15740,-2594,-24228,25437,13496,-24303,31584,15969,-9658,-13074,20978,8020,12084,963,16869,-23484,-13702,-18411,-30607,14254,23734,27956,10400,5280,4288,-3784,28354,7215,4448,-8245,19408,1659,-3158,-5544,-15547,-28169,1670,24146,-32748,15654,13761,-30511,-29087,15719,-16432,-2376,25817,28709,20220,4984,27055,13166,26011,-3070,-20563,-31219,-14992,3248,20887,-7115,11484,3271,28319,14365,1522,-26441,22568,7201,-5561,16714,7512,28210,12687,-30716,-15435,-28132,11645,-31982,14654,-23237,28864,14477,28045,18873,-12425,12612,31769,-8451,24305,-17245,17672,-5722,15893,27964,21337,4444,-27589,-25665,9875,27014,9837,19168,10527,-29015,-20850,8077,-4485,-8883,22862,1762,-12370,9632,31120,11747,-21696,17252,30500,14370,21493,-32120,20719,-20786,21412,-9628,2464,-24668,-20387,10231,12564,-18393,26089,26373,-20844,-1033,-17093,22635,-5333,-18741,-18913,25018,-3717,-17564,-1772,-14179,-10658,-8477,-26669,15077,-13449,5782,-14101,31613,294,-3193,5355,-10755,10777,29694,29021,24715,7183,-11635,-29829,-24042,-6169,-15546,1472,-12428,4450,-27512,-19354,2713,-16841,-23840,-174,-19632,-5774,-27022,5514,20777,5632,16533,30188,25808,-5767,-12905,11493,-9213,-24060,-9396,9340,-5827,-23180,-12759,3334,31100,30292,-1994,28729,-9163,-15253,-12923,-9672,-6644,-9075,-31687,28421,-22496,-10908,316,7889,10307,17115,24574,27797,-13246,22231,-7581,-3850,17700,16537,-31477,-12444,-474,3981,25711,-6401,21059,-1675,8965,-17638,-3924,-3855,-17519,8421,15876,-28043,17984,7644,-16441,-23194,-25114,29605,19499,12104,22528,30961,18029,27134,15037,2627,-15397,25963,9997,-21095,16266,18752,-3608,29894,-30417,20258,-18441,-17673,29917,-1889,26995,31574,31442,29089,-30838,-23912,-8400,-28743,21627,-16636,-22673,-5333,-32248,-54,16598,-27718,20322,-18038,-2188,-15595,-4154,-28482,1313,-18547,10899,-28505,-28785,-8120,28756,-10342,-25219,11713,14710,-2661,-17901,-22156,-768,-26540,4488,29846,-1573,7329,8867,23497,-8423,-28273,26691,-239,-8435,-2174,14549,9596,-32710,5100,-22178,23592,-3224,-28736,12121,20361,-26157,29530,-11953,5328,12175,-8088,7354,-29676,22328,-11446,-27263,-22149,5697,-6894,-10672,5306,-27614,13729,-7406,-16675,14521,-22718,-20974,30944,17381,-6781,8346,21868,-18063,-10491,-23045,-6784,-10370,-2609,15182,28827,31652,8823,12462,8963,12325,9645,-4578,-11609,22116,-25633,-27145,-5138,-20796,-24571,-21418,9993,-26388,-23459,-12097,-19925,-3265,-8886,-16114,1382,17399,12616,1049,-21889,3209,-27462,17591,-4261,253,5193,6712,-6708,18659,29962,2186,-2101,23180,-20980,-9915,17575,-26759,-9170,15643,4905,25274,-25999,12961,24305,26597,-8675,-4068,-31286,26761,5430,-30128,-21776,23972,-4394,-2196,24265,-15082,2409,32657,-18039,-23103,-815,-12472,2134,-16369,27496,6889,-994,-16146,8587,20741,24054,-19010,23433,-23028,-23339,-7034,-15990,-6904,-15804,-8673,18797,-14870,27653,-10517,-27168,-10743,19710,26446,-3050,26308,-14057,28920,13599,2604,1028,7079,-22405,7556,-12152,-9739,32307,22282,-3544,-18447,-23782,-29891,24682,-21658,22408,22614,29607,18780,13514,28640,-18908,2777,-26375,-18905,-29221,-16701,23121,20287,14048,-27090,-18385,-27096,-10965,5672,-16855,8627,24854,20819,25406,25370,6710,-27221,-10195,-269,-10092,-19711,24111,19416,-4559,-31906,24226,-28437,-31861,23885,27898,6214,-6506,23292,-31571,-24899,7564,-23860,-1363,-32174,22754,-1235,5214,16115,30145,-10338,19920,12276,10697,3906,-20860,23630,5208,-2982,-21845,-2710,-26509,-30676,17016,531,15756,-8050,10739,16703,-29041,23900,-19357,-20431,-24496,-14696,687,9169,-30125,4685,-14755,-121,-10205,-27429,-27941,29933,-11575,15144,3661,14004,-20859,-3749,-27780,-16985,13530,24910,20007,534,-27710,27983,-16174,-24122,-22369,29000,-17097,-23174,-8312,14539,-3420,-22015,8079,-8566,-24778,-3628,-22834,-20721,32005,8004,28233,-13201,-11356,6192,-749,-10304,-26126,19152,-8088,-11633,-30444,-32524,-31376,31498,-7640,28952,-16747,19134,9478,22980,-2497,-31406,12740,-22676,-7920,14533,-32196,261,30317,-21671,-13796,-3158,8434,9046,-19584,32064,5542,-7296,-3081,-122,-27280,20444,-1057,25545,-12428,-16329,337,24314,19484,31415,20791,611,28588,-4232,-28040,-17982,-1025,-6092,-6619,16140,2804,-11201,4602,12689,-31051,-28265,14086,-29795,-4134,-20814,3351,13519,25241,-24287,-12363,-7224,21037,-27599,28123,13217,-4152,21591,-27587,-18925,23396,-4464,-6305,30246,-4897,-31419,-9077,-30234,-14572,17498,330,32602,25704,-9762,20526,28629,-11034,-31387,-6121,-12078,-29849,-9090,24362,-26716,8967,-23710,-1954,-19726,17924,-11245,-20973,2149,24610,25409,-9957,12981,-3977,-3946,-5735,-27569,5724,26497,-26839,-31042,-11016,20374,8497,-30451,-23682,-24473,537,5087,-21079,11481,27959,-26610,27653,-13893,30486,3562,10222,-30368,27867,20198,-30555,-32373,8447,-31581,-14217,-25964,6760,-8500,18644,-5967,-30334,20311,-22463,756,-27378,-21965,-27173,12415,15942,-12315,23592,-1213,-12710,24459,26695,-3763,2198,29951,6483,-7164,24234,-23053,-16555,-31195,28511,-15662,-17133,-995,5922,-24050,-1708,12340,-32402,28216,-4298,-31374,30413,27342,3948,25948,16591,22529,2610,4271,2213,3552,29562,-13463,-16535,28044,-28833,16556,6328,-10060,-4209,6223,28797,-9876,3309,-31213,-31770,-11599,-7657,-13140,19697,-8961,15234,-15327,-27585,23104,27878,-32157,-32143,-6899,-6397,-17960,32076,14526,23187,9886,1293,15531,-18586,-15663,-7468,5845,-2737,123,-28014,-3369,-9213,22024,-21399,-1590,-29557,15119,-27857,23539,15872,-627,21336,20133,-10346,-5122,6070,-27871,15645,-13692,18675,-21356,3009,14200,10640,8398,27355,26712,11232,-14259,-6167,19660,-20476,-12979,4781,27635,-22910,-19704,3320,15866,31769,12083,26035,6745,-6642,-7068,-3779,-18764,31207,19795,-20495,-15188,14819,24874,-20805,-240,-31177,18734,6177,-16803,-26753,3839,-7052,6656,-12703,17520,-10807,28643,32517,-32256,-31846,-19746,12880,21755,18166,373,-6178,-16366,12719,-29975,-22467,7831,17483,-25898,4445,20633,-19962,17095,28897,7163,-20477,-13615,191,23965,20,-5425,-29980,16382,17361,11920,5273,27201,15370,12385,15375,8504,23470,12849,-16620,31251,-13177,-5398,-9376,-12985,-5266,-24943,4253,-15212,26942,-18076,20393,10066,21164,26905,-25674,24932,-2399,-9556,-5142,3071,-28577,-16892,4317,-2713,-12251,2364,928,-12928,-5205,28386,-29951,-27100,32516,17230,-2628,13448,19460,20396,15452,-13831,-10289,30107,24438,-3744,-23329,-3464,2554,4655,1396,8540,13401,5367,15563,9712,-30907,-4243,-23117,8577,-2486,10110,27924,-29065,15334,14359,28158,-14940,16257,21142,-15802,-5396,12799,4192,-21531,-16959,29338,-10689,-1613,-11481,3702,25114,14460,-29414,23708,-15489,-3685,21272,21114,-20285,17353,-4655,18417,10684,-12647,-21321,-32271,-21751,-28050,972,-3461,-13434,-24780,8552,-26450,-17795,21697,-31309,-11782,10687,-28829,32421,7748,32617,-16619,-25273,20739,-9947,-4685,6662,19660,-16138,-24805,7553,-19527,-4250,-24931,-19161,13510,9624,-6078,-11316,-15828,-3731,-9124,25712,25266,18793,-24042,3624,15075,-32554,-18582,28759,1039,26634,-16245,-13999,-882,-24068,19660,32399,21542,16156,23609,13933,-23630,-29415,19970,30217,32434,5889,5259,-2788,4648,-22252,28173,-19685,-18858,-6934,30487,18511,-13510,-27468,29811,-7350,25039,4678,-12584,-21132,28972,-18207,-3135,24660,29934,-13348,32008,-29908,13086,15027,-3334,-14555,-19574,-28370,11720,27931,-10728,27308,-25246,-18507,-18676,-3048,4920,-13887,-27743,-31124,3645,10631,-12828,6300,-20005,-8049,25647,19116,-19825,-23372,26160,-27466,11533,28503,-12354,13984,-20474,25334,-15949,13014,24916,-13055,22303,26926,-4899,22994,24566,-23071,-451,-17254,26632,-1614,-31293,31415,-537,-21349,4524,-15823,-1766,-19314,-27874,29651,-26325,32175,3233,15616,1720,-7541,31080,2137,-8160,-14270,24444,-17530,-27776,7925,3616,24472,-30296,-5136,6250,994,12294,-6655,25947,-27171,-29888,28338,-11260,21915,-31064,-9696,-29245,28303,-23454,-11194,-24233,-2971,-2285,-29826,20884,23358,-28696,21929,21698,-19552,-29303,-15509,-24837,-1534,-4681,25547,-26692,23613,-17572,-6200,31430,-28893,13672,23948,11892,6454,-1187,-17796,-21039,-32512,-3069,-13687,26665,9006,28827,-5932,-6707,-12885,12048,26517,-26331,6449,0,0,0,0,0,0,0,0
};
