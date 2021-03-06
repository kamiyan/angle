// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {419,  3324, 3055, 682,  2516, 3573, 1077, 352,  459,  1367,
                              1709, 3713, 2124, 3400, 1049, 3112, 4345, 1841, 3838, 250,
                              346,  1175, 4166, 3226, 3223, 3757, 2882, 3808, 3538, 3929,
                              2879, 645,  327,  587,  2354, 2152, 2604};
constexpr int mangledkT2[] = {173,  3828, 3704, 3319, 3921, 1345, 3443, 3932, 2674, 3556,
                              3712, 2915, 3558, 3985, 956,  921,  2744, 3923, 3636, 3636,
                              691,  3023, 1304, 3929, 1473, 4212, 867,  1982, 3185, 2400,
                              2895, 3809, 381,  3781, 1058, 4317, 2036};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    2630, 3675, 882,  0,    3822, 0,    0,    0,    0,    0,    1494,
    1899, 0,    0,    2963, 0,    0,    0,    1859, 0,    0,    0,    0,    0,    0,    0,    0,
    4374, 0,    0,    1232, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    3537, 0,    0,    0,    0,    0,    0,    0,    0,    3291, 3382, 0,    0,    0,
    4267, 0,    0,    0,    0,    0,    0,    0,    4011, 0,    0,    0,    0,    0,    2849, 2820,
    0,    0,    4136, 0,    0,    4107, 0,    0,    0,    0,    1640, 955,  0,    0,    3367, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1033, 0,
    3769, 0,    0,    0,    4347, 0,    0,    0,    0,    0,    0,    0,    3664, 0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    48,   0,    0,    864,
    4374, 0,    0,    0,    0,    0,    0,    2269, 0,    0,    0,    0,    0,    0,    438,  0,
    0,    0,    0,    0,    0,    0,    4295, 4046, 0,    0,    517,  2304, 3284, 0,    0,    0,
    0,    0,    0,    0,    0,    3597, 0,    0,    0,    0,    0,    0,    0,    0,    1239, 0,
    1142, 4180, 0,    0,    0,    751,  0,    1221, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1364, 1250, 4066, 0,    3333, 0,    0,    0,    0,    0,    0,    0,    2206, 2883,
    0,    0,    0,    0,    3226, 0,    0,    0,    0,    3858, 0,    0,    1113, 0,    0,    0,
    0,    0,    3999, 0,    4391, 0,    4102, 0,    0,    0,    0,    3875, 0,    0,    0,    0,
    1243, 0,    613,  2744, 559,  0,    0,    0,    0,    1145, 194,  0,    0,    0,    0,    2883,
    4271, 1209, 0,    3568, 0,    1870, 0,    0,    0,    0,    1281, 2427, 2360, 0,    4183, 3437,
    0,    904,  0,    0,    0,    0,    0,    0,    0,    0,    0,    2306, 0,    0,    1157, 4242,
    2811, 0,    0,    0,    0,    2198, 0,    0,    2406, 2596, 3,    0,    0,    0,    0,    0,
    0,    0,    4311, 2906, 463,  0,    894,  0,    4245, 0,    1024, 2083, 0,    0,    1553, 2733,
    0,    0,    1201, 0,    0,    0,    1477, 0,    3057, 452,  0,    0,    0,    0,    1223, 0,
    0,    1324, 0,    2477, 0,    0,    0,    0,    669,  3599, 0,    0,    0,    1006, 3579, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    3250, 0,    0,    0,    3221, 3883, 1203,
    0,    0,    4408, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1011, 0,    0,    434,  0,    0,    0,    0,    0,    0,    0,    0,    164,  0,    0,    3054,
    446,  0,    0,    0,    634,  4156, 0,    0,    0,    1903, 0,    4037, 3641, 0,    0,    0,
    0,    0,    961,  4328, 3145, 3282, 0,    2003, 1632, 0,    0,    0,    1628, 1632, 0,    4073,
    0,    0,    648,  3234, 0,    922,  0,    1625, 0,    0,    0,    0,    0,    0,    0,    2729,
    0,    589,  0,    0,    0,    0,    4244, 958,  0,    0,    0,    0,    0,    0,    0,    0,
    0,    758,  0,    0,    0,    0,    0,    2159, 0,    185,  0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    776,  0,    0,    0,    212,  1099, 0,    11,   0,    1789,
    0,    0,    0,    0,    0,    0,    398,  0,    0,    0,    0,    0,    0,    900,  4153, 0,
    0,    1095, 0,    0,    0,    0,    0,    0,    0,    655,  3766, 634,  1640, 0,    0,    0,
    846,  0,    1155, 0,    0,    0,    0,    191,  3422, 0,    0,    0,    1242, 855,  4108, 2813,
    2941, 0,    337,  592,  0,    1502, 3892, 0,    0,    0,    4198, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1794, 0,    0,    0,    0,    4224, 0,    0,    1144, 0,    0,
    199,  0,    1702, 0,    84,   0,    0,    0,    665,  0,    0,    0,    0,    0,    0,    1731,
    851,  311,  0,    3240, 0,    0,    0,    365,  0,    0,    4302, 0,    0,    0,    0,    2975,
    0,    0,    0,    0,    1808, 904,  3894, 796,  0,    0,    0,    0,    0,    0,    0,    1424,
    0,    0,    0,    3503, 0,    117,  0,    4034, 0,    0,    2155, 0,    1588, 0,    0,    0,
    399,  0,    0,    0,    3811, 568,  1220, 443,  0,    1640, 0,    1657, 0,    0,    0,    0,
    3427, 0,    0,    4376, 1148, 0,    0,    582,  0,    0,    895,  0,    0,    0,    0,    1907,
    3439, 0,    1265, 0,    0,    0,    0,    0,    3103, 0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    505,  0,    0,    0,    0,    563,  1942, 565,  0,    0,    0,    0,    0,
    1667, 0,    0,    0,    0,    1897, 0,    643,  0,    0,    241,  0,    586,  1821, 0,    1918,
    0,    0,    0,    4292, 0,    1416, 0,    0,    1289, 0,    0,    3144, 0,    0,    2147, 194,
    0,    572,  0,    0,    0,    0,    0,    0,    862,  0,    2245, 0,    0,    1625, 1025, 0,
    0,    500,  0,    0,    0,    0,    0,    2699, 0,    2101, 0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    326,  0,    0,    0,    0,    0,    1944, 0,    0,    0,    0,    0,
    0,    0,    0,    1964, 1234, 0,    541,  0,    1214, 467,  0,    0,    4033, 0,    0,    0,
    0,    0,    0,    0,    0,    1392, 0,    0,    0,    0,    783,  0,    0,    0,    0,    0,
    4421, 386,  1242, 0,    2144, 0,    0,    775,  891,  0,    0,    0,    0,    0,    0,    414,
    2413, 1636, 0,    482,  0,    1731, 1041, 3244, 0,    0,    3311, 0,    1450, 0,    0,    1551,
    0,    283,  0,    0,    0,    704,  0,    1619, 0,    1060, 0,    243,  1948, 0,    477,  0,
    225,  1547, 4432, 0,    0,    0,    0,    0,    0,    1198, 543,  985,  2987, 77,   710,  0,
    0,    0,    0,    0,    0,    0,    1532, 0,    0,    0,    1868, 0,    735,  0,    0,    0,
    742,  4107, 2126, 1284, 0,    2674, 3313, 0,    0,    0,    0,    0,    0,    0,    1708, 0,
    3977, 28,   2591, 0,    3589, 698,  0,    0,    0,    0,    0,    0,    608,  0,    0,    0,
    2437, 0,    525,  0,    0,    0,    0,    0,    0,    0,    0,    0,    1302, 97,   0,    1347,
    0,    0,    0,    0,    0,    0,    1580, 0,    556,  2831, 777,  0,    0,    0,    0,    0,
    0,    0,    0,    892,  1682, 0,    0,    0,    0,    3598, 455,  752,  1230, 0,    1435, 4347,
    667,  4212, 0,    0,    0,    0,    0,    0,    0,    0,    4366, 1164, 4016, 0,    2234, 0,
    0,    0,    412,  3764, 0,    3815, 0,    623,  1845, 0,    0,    0,    0,    0,    318,  0,
    0,    0,    4339, 0,    0,    0,    0,    0,    0,    3300, 0,    0,    90,   0,    0,    0,
    429,  0,    273,  0,    0,    83,   0,    48,   3941, 0,    124,  0,    0,    2110, 0,    0,
    1803, 0,    0,    0,    0,    1224, 1973, 3802, 0,    0,    0,    1784, 0,    0,    0,    599,
    1452, 0,    343,  1729, 481,  0,    0,    0,    0,    1035, 1875, 777,  934,  0,    909,  0,
    1133, 256,  3598, 0,    0,    0,    0,    4199, 0,    2278, 0,    1919, 1041, 4075, 0,    0,
    0,    0,    0,    3325, 3227, 0,    782,  0,    2175, 0,    0,    0,    0,    0,    3535, 0,
    86,   0,    531,  0,    0,    112,  0,    516,  0,    1803, 0,    3381, 0,    1576, 1711, 1921,
    4439, 0,    3528, 227,  4405, 3857, 0,    2445, 0,    416,  4380, 0,    0,    2008, 360,  0,
    3821, 0,    0,    0,    3354, 0,    0,    0,    1116, 79,   0,    0,    2646, 0,    923,  0,
    1322, 0,    0,    0,    0,    2012, 1481, 0,    0,    748,  1238, 1581, 0,    4344, 0,    484,
    529,  0,    0,    0,    0,    3569, 1728, 0,    0,    2280, 0,    1023, 0,    0,    2158, 4024,
    0,    1110, 47,   0,    685,  1314, 0,    0,    0,    0,    0,    0,    0,    380,  0,    1671,
    0,    4151, 0,    2491, 1544, 562,  0,    0,    4205, 382,  0,    0,    1378, 0,    1359, 0,
    647,  0,    0,    0,    2439, 3870, 4165, 0,    0,    1722, 1029, 0,    0,    0,    0,    0,
    1081, 473,  2172, 880,  0,    0,    3863, 36,   4309, 0,    0,    219,  870,  0,    0,    0,
    0,    1432, 4012, 0,    465,  4141, 0,    291,  0,    4221, 0,    0,    0,    0,    0,    0,
    0,    1003, 1667, 0,    0,    3856, 1231, 0,    122,  0,    0,    2664, 503,  0,    4210, 0,
    0,    0,    0,    0,    0,    0,    0,    75,   0,    0,    2103, 0,    0,    0,    165,  0,
    0,    1262, 0,    1187, 3016, 0,    0,    0,    2053, 0,    0,    0,    450,  0,    1335, 0,
    3609, 0,    0,    0,    0,    0,    0,    2235, 0,    0,    3550, 3839, 0,    0,    938,  0,
    926,  1605, 2972, 0,    3235, 777,  1269, 206,  0,    320,  1331, 0,    108,  929,  0,    1573,
    0,    1497, 1520, 2609, 1673, 808,  0,    0,    0,    618,  4302, 0,    0,    1489, 1944, 0,
    0,    0,    2055, 0,    0,    0,    3953, 0,    0,    0,    0,    2172, 0,    1269, 857,  0,
    0,    0,    0,    0,    0,    0,    1119, 0,    0,    0,    0,    149,  0,    892,  1178, 2991,
    0,    1413, 3786, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3882, 4234, 1833,
    0,    704,  0,    2437, 1426, 0,    0,    2945, 4389, 749,  0,    1671, 0,    292,  0,    0,
    0,    4118, 0,    0,    0,    4345, 0,    2341, 3107, 1191, 1865, 0,    4227, 266,  506,  0,
    0,    0,    0,    2060, 0,    1489, 1272, 0,    1815, 0,    1142, 1527, 598,  3556, 1860, 0,
    0,    2996, 1766, 0,    1058, 974,  0,    0,    0,    2555, 2298, 0,    1122, 0,    0,    1979,
    0,    0,    0,    0,    1547, 2276, 1040, 762,  558,  1307, 0,    538,  0,    0,    1324, 4139,
    2788, 0,    0,    1235, 2945, 2804, 0,    0,    144,  0,    3013, 0,    0,    0,    2226, 0,
    1148, 0,    0,    2985, 0,    0,    0,    86,   894,  0,    0,    0,    1495, 0,    1355, 0,
    0,    0,    0,    0,    1934, 0,    3815, 236,  169,  1294, 3739, 0,    641,  0,    500,  0,
    1338, 0,    0,    1200, 4365, 0,    0,    0,    4107, 0,    0,    4287, 0,    2348, 0,    2492,
    3134, 0,    305,  2012, 1617, 0,    0,    819,  1372, 0,    0,    271,  0,    559,  0,    0,
    3791, 0,    0,    0,    1380, 0,    1257, 0,    0,    1515, 1730, 0,    0,    2453, 3079, 0,
    0,    0,    3938, 1672, 0,    1220, 282,  0,    4013, 0,    0,    1488, 692,  0,    0,    2138,
    0,    562,  0,    1460, 0,    0,    2085, 0,    0,    733,  0,    948,  0,    1903, 0,    0,
    404,  0,    1696, 1965, 406,  0,    1389, 0,    1836, 0,    0,    1507, 0,    0,    754,  4406,
    1768, 644,  0,    0,    3761, 1154, 580,  1143, 0,    0,    2861, 3473, 2257, 0,    0,    0,
    3613, 0,    0,    1028, 0,    2011, 308,  0,    0,    0,    1916, 0,    1865, 0,    743,  0,
    232,  0,    1648, 0,    0,    0,    0,    470,  0,    1703, 0,    788,  4401, 0,    0,    1819,
    1551, 876,  1236, 0,    0,    0,    0,    3257, 0,    1592, 0,    0,    1958, 4062, 0,    0,
    0,    1695, 755,  2544, 1806, 0,    1745, 2154, 0,    4408, 1493, 497,  0,    1795, 0,    2147,
    624,  643,  2635, 0,    235,  0,    520,  1665, 0,    1975, 0,    0,    0,    353,  3148, 0,
    0,    1436, 0,    0,    0,    1223, 445,  1589, 580,  0,    1818, 0,    0,    1698, 0,    1256,
    3650, 0,    4240, 0,    0,    0,    3395, 0,    0,    0,    0,    1363, 4172, 2731, 1868, 1336,
    0,    0,    2360, 0,    945,  0,    0,    0,    2038, 1620, 0,    0,    0,    4158, 0,    0,
    889,  0,    1858, 0,    3318, 0,    269,  0,    0,    0,    195,  0,    804,  1148, 539,  382,
    1095, 0,    1686, 0,    0,    0,    2461, 1525, 0,    42,   2474, 21,   4394, 0,    0,    1630,
    1420, 3080, 4185, 0,    4176, 1692, 0,    2365, 0,    0,    894,  1093, 1685, 0,    0,    0,
    3139, 4269, 657,  535,  4182, 2710, 0,    0,    426,  0,    0,    0,    0,    374,  1692, 257,
    3660, 521,  0,    0,    3169, 3396, 256,  394,  4056, 204,  203,  2539, 4408, 1209, 1097, 0,
    4188, 0,    792,  0,    166,  0,    1334, 0,    240,  0,    0,    0,    2908, 0,    0,    0,
    2383, 1989, 0,    1254, 0,    0,    0,    0,    1126, 980,  0,    0,    0,    4181, 707,  0,
    0,    0,    0,    0,    0,    0,    3560, 0,    0,    681,  1931, 191,  461,  0,    2756, 0,
    0,    0,    0,    2844, 554,  3968, 0,    1577, 0,    4120, 0,    2824, 0,    0,    0,    0,
    30,   0,    0,    4141, 1681, 0,    0,    0,    194,  4009, 2735, 0,    0,    138,  0,    0,
    612,  0,    0,    0,    0,    1238, 0,    854,  98,   0,    0,    0,    0,    0,    0,    0,
    0,    3802, 4048, 0,    0,    0,    994,  4088, 0,    1322, 171,  2789, 3513, 4055, 0,    1485,
    3286, 0,    0,    0,    0,    0,    0,    340,  0,    2473, 1844, 3928, 0,    3358, 62,   752,
    393,  0,    598,  0,    0,    2088, 0,    1821, 1512, 0,    0,    3929, 277,  0,    0,    0,
    3870, 0,    0,    0,    3573, 66,   1021, 193,  1804, 715,  0,    1120, 35,   0,    0,    984,
    0,    0,    4441, 3617, 0,    96,   0,    0,    0,    0,    0,    2697, 0,    0,    326,  0,
    0,    323,  0,    0,    4263, 2675, 0,    336,  0,    0,    4294, 0,    0,    3624, 3734, 0,
    0,    0,    2075, 444,  604,  0,    0,    0,    0,    3347, 2244, 1622, 0,    0,    0,    1748,
    0,    4431, 3702, 1284, 4080, 3182, 0,    0,    428,  0,    4354, 0,    0,    4451, 1183, 0,
    4282, 0,    3906, 3098, 15,   428,  0,    0,    0,    324,  0,    0,    0,    308,  1659, 487,
    0,    199,  1554, 1106, 0,    1832, 2266, 0,    2359, 0,    1983, 622,  834,  0,    0,    501,
    1531, 600,  0,    0,    494,  0,    537,  811,  1126, 1829, 0,    0,    1797, 0,    0,    3549,
    3891, 1000, 0,    0,    676,  0,    340,  0,    2608, 0,    0,    0,    0,    0,    0,    1295,
    170,  1434, 0,    0,    0,    551,  1610, 4219, 0,    0,    702,  0,    1901, 0,    0,    800,
    1153, 746,  3822, 2121, 1672, 1930, 0,    0,    0,    0,    1382, 0,    52,   4332, 0,    1103,
    0,    1739, 3848, 698,  0,    0,    1265, 0,    231,  4343, 0,    242,  491,  0,    1684, 0,
    2942, 0,    0,    0,    1699, 534,  0,    0,    959,  536,  1168, 1507, 3947, 0,    3631, 0,
    981,  1992, 0,    218,  2093, 49,   627,  1840, 0,    660,  16,   0,    164,  0,    4064, 0,
    0,    1688, 0,    302,  1362, 0,    0,    538,  656,  0,    559,  1798, 501,  0,    1066, 3361,
    0,    0,    0,    2411, 0,    2414, 1444, 0,    1980, 0,    279,  208,  4253, 0,    614,  1773,
    3632, 449,  0,    3160, 4191, 1276, 2767, 0,    0,    0,    0,    3896, 0,    0,    0,    0,
    0,    1381, 736,  1666, 1982, 1653, 0,    975,  0,    0,    0,    0,    0,    0,    4157, 0,
    0,    3068, 1850, 3817, 1782, 1703, 2105, 0,    1199, 3398, 0,    1903, 1785, 3213, 0,    1035,
    0,    0,    3130, 0,    1926, 498,  0,    0,    927,  2016, 986,  669,  1152, 0,    0,    353,
    4274, 3920, 0,    0,    3689, 0,    0,    0,    0,    0,    0,    0,    0,    2818, 806,  0,
    0,    602,  2726, 0,    0,    273,  0,    0,    89,   2193, 0,    0,    807,  1989, 697,  2113,
    2041, 0,    0,    366,  0,    281,  1375, 0,    4308, 0,    604,  0,    0,    1648, 0,    4,
    385,  618,  0,    0,    0,    3697, 3707, 0,    1374, 0,    0,    3829, 4227, 628,  0,    1755,
    3152, 794,  2658, 0,    0,    0,    0,    0,    1354, 1841, 990,  3234, 0,    1774, 3163, 0,
    0,    3634, 0,    0,    159,  0,    0,    0,    4225, 0,    3370, 1223, 0,    836,  2140, 0,
    0,    253,  1118, 973,  1623, 1289, 0,    252,  3997, 0,    0,    0,    280,  2064, 1747, 4053,
    74,   1042, 0,    0,    0,    0,    0,    0,    348,  0,    3056, 0,    821,  0,    0,    0,
    0,    2880, 0,    3427, 2134, 0,    0,    1084, 0,    837,  1438, 1760, 952,  0,    0,    908,
    4096, 3631, 1237, 4048, 801,  2627, 0,    0,    1028, 3840, 439,  0,    1928, 0,    393,  0,
    0,    483,  4193, 0,    0,    851,  707,  1120, 760,  0,    705,  130,  0,    1430, 0,    660,
    0,    269,  113,  190,  1931, 0,    1331, 2201, 120,  0,    0,    4299, 0,    4098, 0,    108,
    1715, 378,  2060, 437,  835,  0,    0,    0,    341,  0,    0,    1669, 32,   376,  1874, 3066,
    0,    0,    455,  0,    364,  1536, 3511, 0,    3191, 933,  0,    1925, 1479, 0,    736,  1812,
    4130, 0,    3852, 2613, 1182, 0,    768,  0,    0,    0,    0,    0,    0,    3034, 1629, 3104,
    0,    2050, 0,    2004, 1660, 1722, 0,    1063, 0,    1001, 1839, 2974, 0,    0,    0,    0,
    0,    0,    3846, 589,  701,  0,    0,    880,  0,    0,    0,    0,    0,    988,  3432, 417,
    1058, 0,    0,    4185, 0,    0,    1545, 82,   0,    0,    3123, 0,    992,  0,    0,    1640,
    3222, 3364, 0,    0,    1655, 0,    604,  0,    0,    3813, 0,    1586, 403,  0,    0,    0,
    0,    301,  0,    235,  1752, 0,    2395, 0,    0,    487,  510,  3883, 88,   0,    3768, 0,
    0,    2116, 4352, 0,    1953, 1308, 3602, 0,    239,  691,  0,    507,  0,    0,    0,    3375,
    0,    0,    0,    457,  0,    0,    820,  4014, 954,  0,    0,    0,    0,    0,    0,    3975,
    0,    0,    0,    0,    0,    335,  0,    1751, 0,    4086, 0,    207,  0,    1263, 519,  0,
    0,    3831, 0,    0,    0,    0,    0,    0,    493,  0,    0,    504,  3954, 0,    0,    2127,
    0,    0,    4387, 0,    0,    0,    0,    0,    0,    658,  278,  0,    0,    268,  2614, 547,
    0,    332,  0,    4122, 0,    0,    845,  2465, 267,  1593, 0,    1419, 0,    0,    3762, 3258,
    0,    0,    0,    3877, 0,    1268, 1325, 496,  0,    747,  0,    1622, 0,    0,    0,    0,
    1749, 3079, 3598, 769,  0,    0,    772,  0,    193,  0,    0,    1673, 0,    778,  0,    0,
    0,    1403, 0,    0,    0,    252,  0,    966,  3777, 807,  326,  0,    0,    3716, 1843, 0,
    1264, 0,    2090, 2625, 2082, 0,    15,   0,    1430, 1807, 0,    1028, 310,  3244, 0,    0,
    2719, 4367, 0,    0,    2031, 672,  664,  1207, 2246, 1334, 3695, 0,    0,    0,    1393, 0,
    3564, 2272, 1652, 364,  0,    2276, 3103, 3758, 569,  0,    836,  4251, 657,  811,  0,    0,
    1296, 0,    0,    1319, 1218, 3650, 0,    1758, 0,    0,    2044, 0,    0,    610,  755,  0,
    1737, 300,  185,  3799, 675,  937,  3578, 2116, 0,    0,    771,  753,  0,    0,    3882, 0,
    4045, 4009, 0,    120,  0,    0,    1899, 1090, 744,  0,    0,    1116, 4309, 0,    0,    0,
    0,    4023, 2727, 587,  749,  1125, 0,    4140, 0,    2419, 0,    1563, 1733, 4049, 1307, 3227,
    0,    833,  447,  2055, 734,  0,    1340, 2015, 0,    1732, 803,  670,  3492, 0,    368,  0,
    490,  656,  861,  0,    4056, 2135, 0,    0,    0,    0,    0,    108,  1248, 1973, 0,    0,
    0,    1757, 0,    1258, 3314, 4409, 0,    1999, 0,    1083, 0,    0,    3571, 2036, 1124, 0,
    1492, 491,  0,    1225, 0,    0,    689,  2671, 0,    312,  0,    0,    0,    1563, 1599, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    710,  2238, 0,    0,    0,    0,    0,    0,
    0,    0,    0,    1179, 1815, 0,    0,    3385, 727,  0,    1464, 0,    1449, 4291, 0,    725,
    0,    284,  0,    0,    1720, 2927, 2488, 0,    0,    0,    794,  1304, 741,  0,    1883, 1234,
    101,  4087, 0,    0,    4342, 4404, 371,  1159, 17,   914,  0,    45,   27,   1031, 4033, 456,
    866,  0,    4173, 81,   146,  4085, 963,  0,    1951, 0,    0,    0,    0,    154,  1508, 0,
    657,  2555, 0,    0,    0,    1894, 0,    0,    2444, 1831, 0,    1008, 3034, 0,    0,    1967,
    577,  0,    0,    0,    430,  0,    1958, 2232, 1350, 0,    4037, 0,    0,    3070, 0,    0,
    0,    1118, 570,  3212, 1456, 1203, 284,  1918, 3700, 524,  2221, 0,    0,    0,    0,    0,
    4036, 1911, 0,    753,  0,    0,    0,    1511, 591,  0,    0,    2209, 443,  0,    0,    3931,
    0,    840,  201,  240,  0,    1110, 2031, 453,  0,    0,    1997, 3449, 2354, 1778, 1814, 803,
    2811, 0,    0,    169,  1690, 0,    0,    4364, 0,    1136, 43,   539,  0,    1422, 0,    568,
    3883, 0,    0,    2051, 186,  1001, 0,    194,  2469, 0,    0,    283,  3617, 0,    0,    0,
    4384, 0,    247,  0,    1772, 4302, 177,  2753, 4113, 2776, 119,  3156, 0,    0,    0,    4055,
    2686, 135,  4023, 1985, 0,    1039, 1018, 0,    839,  0,    0,    3800, 1411, 275,  268,  0,
    3909, 401,  3648, 3769, 1263, 0,    0,    0,    2320, 1678, 3621, 2718, 0,    0,    3999, 893,
    0,    1770, 0,    2940, 83,   2544, 225,  513,  0,    0,    1590, 867,  0,    0,    531,  0,
    979,  3698, 595,  0,    0,    0,    2527, 1482, 707,  220,  3168, 0,    1402, 0,    3047, 0,
    1410, 1824, 0,    4017, 1229, 3629, 174,  1641, 1396, 2765, 1704, 664,  0,    2031, 0,    0,
    29,   0,    0,    0,    0,    0,    0,    0,    314,  816,  0,    2053, 3408, 0,    0,    0,
    483,  2170, 0,    155,  795,  442,  0,    1100, 1207, 0,    2315, 0,    3420, 2207, 3056, 1848,
    0,    0,    0,    3834, 923,  0,    3118, 0,    0,    0,    0,    1545, 576,  1649, 0,    2027,
    723,  0,    3283, 0,    3670, 0,    1249, 2174, 2420, 1138, 0,    2243, 1149, 615,  653,  0,
    0,    352,  0,    0,    0,    0,    0,    3877, 4436, 0,    0,    2315, 0,    1200, 0,    2081,
    4415, 0,    43,   1053, 0,    0,    4122, 317,  0,    0,    0,    63,   0,    3246, 0,    0,
    0,    133,  881,  0,    590,  833,  389,  737,  0,    571,  0,    895,  0,    0,    723,  1975,
    595,  364,  1648, 0,    200,  172,  1440, 2062, 150,  1009, 0,    1736, 1766, 0,    0,    1405,
    0,    167,  0,    0,    847,  0,    0,    0,    0,    0,    0,    0,    1548, 0,    0,    874,
    0,    1123, 0,    1397, 3525, 577,  0,    0,    4364, 0,    0,    0,    0,    2923, 0,    228,
    3563, 0,    182,  983,  0,    4140, 735,  394,  1431, 3564, 421,  700,  0,    0,    0,    2841,
    605,  0,    1469, 1428, 0,    1084, 3405, 0,    2035, 4298, 2118, 1081, 464,  3424, 1323, 3786,
    0,    570,  3382, 3883, 234,  0,    4200, 4232, 0,    0,    0,    3468, 1044, 0,    182,  4395,
    0,    2321, 1469, 135,  2201, 0,    0,    953,  2912, 2371, 1387, 0,    0,    1854, 4276, 687,
    706,  4077, 1980, 2007, 0,    0,    0,    301,  605,  0,    0,    1595, 0,    1143, 4133, 286,
    0,    1927, 0,    2637, 0,    2071, 0,    1731, 0,    215,  0,    2582, 0,    385,  1834, 812,
    1194, 0,    0,    1932, 1228, 3368, 605,  1225, 213,  1237, 0,    1763, 2210, 0,    0,    62,
    0,    1247, 1478, 0,    1629, 581,  0,    2713, 814,  1614, 0,    0,    1372, 359,  1569, 0,
    304,  2667, 1222, 1818, 2125, 0,    106,  3838, 3579, 48,   2734, 2051, 0,    0,    124,  1820,
    0,    3695, 3683, 0,    0,    3834, 464,  972,  2678, 3716, 1071, 1021, 0,    1870, 2130, 4252,
    4320, 2981, 3280, 0,    1036, 594,  661,  908,  1920, 0,    1610, 1991, 3,    1375, 0,    1192,
    0,    2312, 0,    1128, 0,    2322, 2894, 2222, 537,  4424, 0,    0,    1407, 954,  781,  0,
    3676, 378,  133,  3228, 0,    0,    17,   0,    248,  0,    0,    2459, 746,  67,   731,  788,
    306,  923,  0,    1352, 0,    166,  2502, 0,    0,    0,    854,  0,    0,    917,  0,    1253,
    0,    0,    1561, 0,    603,  841,  265,  305,  2753, 2906, 362,  0,    1022, 180,  1982, 1940,
    486,  262,  0,    0,    1454, 1006, 0,    0,    1194, 0,    2039, 526,  2749, 3542, 650,  0,
    1845, 0,    0,    0,    860,  3057, 960,  2101, 0,    4286, 0,    0,    524,  1966, 0,    1956,
    3835, 3337, 0,    0,    4054, 0,    806,  3300, 0,    1321, 0,    448,  1906, 0,    0,    0,
    0,    3888, 2784, 2114, 0,    0,    534,  2255, 852,  0,    0,    3332, 2315, 392,  0,    0,
    2722, 0,    0,    67,   0,    1925, 0,    2898, 3801, 2341, 0,    0,    4247, 3574, 111,  0,
    1861, 219,  0,    0,    0,    431,  0,    0,    4397, 4279, 2108, 2546, 4067, 4259, 0,    257,
    584,  0,    674,  218,  1210, 0,    331,  2803, 2380, 544,  861,  0,    1935, 0,    3854, 0,
    1388, 0,    0,    0,    3538, 917,  1996, 1686, 0,    0,    1125, 4160, 1370, 0,    0,    0,
    2573, 4296, 0,    825,  0,    0,    727,  694,  802,  1067, 0,    0,    0,    92,   0,    0,
    320,  0,    0,    215,  45,   1656, 0,    0,    0,    0,    0,    3164, 1801, 224,  115,  3793,
    0,    0,    1475, 2486, 3661, 2080, 0,    1456, 1250, 557,  336,  0,    0,    824,  1,    196,
    0,    0,    0,    0,    1705, 0,    0,    0,    2273, 919,  0,    0,    1168, 2571, 0,    4042,
    774,  0,    0,    0,    997,  1754, 3223, 0,    1736, 1313, 0,    0,    542,  498,  2297, 0,
    28,   62,   2996, 443,  3445, 0,    3402, 0,    1444, 0,    0,    3924, 3772, 107,  790,  0,
    0,    0,    0,    3727, 0,    3381, 0,    0,    0,    0,    1643, 0,    0,    335,  0,    0,
    4408, 0,    2915, 0,    2095, 558,  0,    1172, 1310, 586,  0,    326,  4312, 277,  314,  1068,
    1099, 386,  3578, 58,   0,    0,    0,    1394, 719,  0,    1819, 0,    0,    1891, 0,    1270,
    0,    159,  2474, 630,  44,   195,  0,    639,  3387, 0,    1750, 1679, 0,    0,    476,  2000,
    4187, 0,    0,    1045, 3059, 0,    0,    4011, 757,  879,  1309, 0,    0,    1285, 0,    493,
    0,    0,    403,  3090, 0,    1420, 0,    0,    0,    93,   3097, 0,    2678, 0,    4382, 519,
    0,    0,    0,    1483, 3662, 677,  0,    0,    210,  2969, 1381, 0,    0,    697,  621,  1034,
    2438, 0,    548,  454,  2031, 998,  0,    0,    1344, 3719, 762,  1854, 322,  1565, 2898, 0,
    0,    1880, 488,  4066, 1208, 4331, 0,    1946, 2947, 1001, 957,  0,    605,  0,    0,    2653,
    0,    2576, 1071, 2691, 1453, 839,  1699, 1498, 0,    0,    1453, 2837, 644,  390,  0,    1417,
    0,    0,    2002, 403,  0,    0,    1058, 151,  3634, 2514, 685,  0,    1552, 1957, 0,    0,
    4008, 0,    0,    907,  1180, 1970, 5,    1554, 1716, 1406, 0,    1281, 1608, 1386, 0,    46,
    990,  1196, 0,    2749, 2074, 458,  0,    1147, 0,    303,  4093, 2353, 3243, 2029, 3905, 0,
    1344, 0,    889,  3759, 0,    0,    0,    0,    697,  1292, 0,    0,    940,  4381, 0,    1097,
    1279, 0,    0,    0,    921,  0,    3951, 0,    0,    1774, 0,    0,    3666, 0,    0,    0,
    2132, 49,   0,    1998, 0,    0,    3063, 2263, 0,    0,    0,    0,    4133, 0,    4168, 0,
    2291, 0,    30,   2020, 1578, 0,    0,    1340, 3835, 1601, 0,    1154, 623,  3975, 1990, 431,
    1879, 0,    0,    0,    1250, 1437, 0,    205,  0,    484,  1031, 107,  1358, 173,  1159, 4001,
    294,  4263, 528,  92,   0,    2683, 0,    42,   0,    205,  0,    2971, 0,    0,    0,    122,
    299,  3205, 0,    850,  906,  625,  2413, 2904, 410,  0,    3395, 2076, 68,   0,    0,    1587,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    1551, 989,  0,    4344, 1523, 0,    967,
    0,    673,  795,  0,    0,    746,  0,    3633, 412,  781,  0,    762,  0,    0,    1435, 0,
    87,   0,    603,  2598, 982,  0,    936,  302,  1113, 0,    0,    0,    0,    178,  0,    3223,
    0,    147,  2023, 361,  1492, 290,  3936, 1176, 0,    366,  4185, 3937, 6,    1188, 247,  1755,
    556,  0,    1633, 0,    0,    2129, 0,    3726, 716,  0,    1102, 0,    0,    0,    0,    0,
    241,  1792, 0,    758,  0,    0,    3855, 480,  0,    0,    902,  3812, 0,    823,  0,    3631,
    1447, 0,    3684, 1302, 520,  685,  1701, 0,    4131, 1127, 40,   0,    0,    0,    0,    641,
    4256, 1076, 1442, 0,    1018, 0,    970,  377,  0,    919,  0,    645,  1391, 564,  443,  1843,
    465,  1697, 916,  797,  0,    0,    1433, 0,    1727, 3260, 0,    0,    0,    0,    0,    3978,
    4255, 0,    0,    185,  798,  0,    3635, 4265, 1466, 0,    4057, 430,  1811, 0,    1753, 605,
    0,    469,  839,  325,  1451, 1317, 1902, 4251, 0,    2,    0,    0,    86,   439,  0,    1255,
    1536, 2001, 2390, 0,    0,    0,    0,    878,  966,  986,  0,    0,    1343, 0,    2039, 0,
    0,    61,   1939, 1875, 202,  0,    0,    2049, 0,    3918, 1470, 897,  1501, 0,    0,    3211,
    403,  0,    504,  459};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 4452;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 37)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 4452;
}

constexpr int unmangledkT1[] = {162, 98,  200, 17, 263, 137, 354, 364, 24,  149, 40,  40,  170,
                                267, 387, 255, 7,  55,  108, 152, 27,  154, 105, 349, 229, 229};
constexpr int unmangledkT2[] = {290, 338, 301, 284, 117, 303, 83,  150, 389, 350, 323, 330, 58,
                                316, 310, 107, 30,  65,  14,  310, 8,   298, 365, 40,  174, 83};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   15,  0,   0,   0,   0,   0,   0,   0,   0,   199, 165, 0,   0,   0,
    0,   0,   230, 245, 164, 0,   0,   71,  382, 38,  0,   0,   137, 9,   34,  0,   6,   0,   0,
    162, 101, 0,   0,   151, 0,   70,  0,   0,   201, 0,   181, 0,   0,   207, 0,   0,   0,   0,
    0,   0,   0,   38,  0,   0,   120, 0,   0,   121, 0,   115, 0,   67,  0,   92,  115, 0,   356,
    99,  0,   0,   0,   70,  0,   0,   0,   79,  366, 0,   28,  383, 0,   0,   273, 0,   392, 0,
    0,   0,   369, 324, 0,   74,  0,   0,   261, 0,   0,   0,   304, 306, 0,   68,  0,   123, 61,
    0,   142, 190, 0,   0,   0,   164, 88,  73,  0,   378, 17,  81,  82,  361, 0,   169, 27,  119,
    0,   0,   0,   0,   313, 58,  56,  0,   393, 50,  0,   0,   392, 47,  305, 0,   0,   384, 24,
    0,   380, 0,   0,   0,   73,  0,   0,   227, 0,   0,   158, 174, 0,   0,   0,   0,   0,   0,
    0,   0,   193, 0,   59,  0,   0,   0,   225, 327, 0,   76,  142, 367, 0,   0,   106, 0,   0,
    48,  0,   0,   66,  45,  0,   0,   0,   227, 340, 57,  0,   195, 39,  130, 25,  40,  179, 135,
    3,   0,   114, 373, 0,   0,   312, 31,  0,   0,   0,   348, 113, 61,  88,  0,   21,  0,   21,
    25,  76,  376, 0,   391, 0,   141, 122, 0,   0,   0,   0,   2,   322, 150, 381, 112, 0,   19,
    272, 136, 0,   0,   69,  22,  0,   0,   159, 0,   39,  26,  268, 364, 0,   186, 0,   108, 62,
    82,  0,   56,  35,  0,   154, 65,  400, 145, 191, 0,   0,   282, 0,   0,   163, 391, 152, 192,
    127, 0,   97,  0,   71,  0,   0,   127, 24,  396, 0,   41,  70,  0,   0,   90,  132, 0,   382,
    180, 311, 114, 123, 165, 7,   0,   0,   0,   0,   81,  296, 369, 0,   229, 133, 85,  0,   120,
    0,   0,   206, 0,   0,   188, 84,  230, 196, 117, 0,   0,   10,  394, 59,  97,  0,   371, 53,
    0,   370, 0,   364, 0,   208, 0,   178, 195, 229, 0,   0,   0,   0,   0,   0,   0,   166, 41,
    89,  0,   77,  0,   171, 0,   0,   177, 0,   47,  0,   198, 0,   266, 56,  156, 0,   283, 0,
    101, 218, 0,   0,   0,   38,  145, 0,   111, 0,   41,  0,   0,   0,   201, 0,   19,  43,  0,
    82,  396, 57};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 402;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 402;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh
