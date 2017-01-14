/******************************************************************************
* FILE PURPOSE: This file contains chEst filter coefficients
*******************************************************************************
*
* FILE NAME: phy_ofdmchEstFir.c
*
* DESCRIPTION: This file contains contains chEst filter coefficients
*
*  Copyright (c) 2012 Texas Instruments Inc.
*  All Rights Reserved This program is the confidential and proprietary
*  product of Texas Instruments Inc.  Any Unauthorized use, reproduction or
*  transfer of this program is strictly prohibited.
*
* HISTORY:
*
* 03/10/2013 JKunduru    Written
*
*
*
*******************************************************************************/
#include <phy_sunTables.h>

#pragma DATA_SECTION(PHY_ofdmLtfRxTable, "sunPhyTable");
#pragma DATA_SECTION(PHY_ofdmChEstFir,   "sunPhyTable");
#pragma DATA_ALIGN(PHY_ofdmLtfRxTable,   2)
#pragma DATA_ALIGN(PHY_ofdmChEstFir,   2)

const SINT16 PHY_ofdmLtfRxTable[52] =
  {
   LTF_NEG_VAL, 0, LTF_NEG_VAL, 0, LTF_VAL, 0, LTF_NEG_VAL,  0, LTF_VAL, 0, LTF_VAL,    0,
   LTF_NEG_VAL, 0, LTF_NEG_VAL, 0, LTF_VAL, 0, LTF_VAL, 0, LTF_NEG_VAL, 0, LTF_NEG_VAL, 0,
   LTF_VAL, 0, LTF_VAL, 0, LTF_NEG_VAL, 0, LTF_VAL, 0, LTF_NEG_VAL, 0, LTF_VAL, 0, LTF_VAL,  0,
   LTF_VAL, 0, LTF_VAL, 0, LTF_VAL, 0, LTF_VAL, 0, LTF_VAL, 0, LTF_VAL, 0, LTF_NEG_VAL,      0,
  };

const SINT16 PHY_ofdmChEstFir[3][3*3*2*PHY_OFDM_CHEST_FIR_SIZE] =
{
/* begin FIR */
0,	0,
0,	0,
0,	0,
0,	0,
17649,	0,
6568,	8856,
-1289,	4250,
735,	-263,
3107,	2076,

/* begin FIR */
0,	0,
0,	0,
0,	0,
6389,	-8615,
10161,	0,
4733,	6382,
-1335,	4400,
-830,	297,
1981,	1323,

/* begin FIR */
0,	0,
0,	0,
-1293,	-4263,
4531,	-6110,
8870,	0,
4771,	6433,
-1541,	5081,
-1409,	504,
2043,	1365,

/* begin FIR */
0,	0,
-52,	-19,
-1282,	-4226,
4521,	-6096,
8870,	0,
4776,	6440,
-1544,	5090,
-1413,	505,
2048,	1369,

/* begin FIR */
1806,	-1207,
-1450,	-519,
-1480,	-4877,
4555,	-6142,
8572,	0,
4555,	6142,
-1480,	4877,
-1450,	519,
1806,	1207,

/* begin FIR */
2048,	-1369,
-1413,	-505,
-1544,	-5090,
4776,	-6440,
8870,	0,
4521,	6096,
-1282,	4226,
-52,	19,
0,	0,

/* begin FIR */
2043,	-1365,
-1409,	-504,
-1541,	-5081,
4771,	-6433,
8870,	0,
4531,	6110,
-1293,	4263,
0,	0,
0,	0,

/* begin FIR */
1981,	-1323,
-830,	-297,
-1335,	-4400,
4733,	-6382,
10161,	0,
6389,	8615,
0,	0,
0,	0,
0,	0,

/* begin FIR */
3107,	-2076,
735,	263,
-1289,	-4250,
6568,	-8856,
17649,	0,
0,	0,
0,	0,
0,	0,
0,	0,

/* begin FIR */
0,	0,
0,	0,
0,	0,
0,	0,
21354,	0,
6851,	9237,
-1060,	3495,
1395,	-499,
2936,	1962,

/* begin FIR */
0,	0,
0,	0,
0,	0,
6729,	-9074,
10238,	0,
4764,	6423,
-1406,	4635,
-1079,	386,
2221,	1484,

/* begin FIR */
0,	0,
0,	0,
-1137,	-3747,
4414,	-5951,
8920,	0,
4982,	6717,
-1711,	5640,
-1774,	635,
2593,	1732,

/* begin FIR */
0,	0,
434,	155,
-1266,	-4175,
4517,	-6090,
8902,	0,
4913,	6625,
-1676,	5526,
-1735,	621,
2513,	1679,

/* begin FIR */
2069,	-1382,
-1732,	-620,
-1552,	-5116,
4543,	-6125,
8416,	0,
4543,	6125,
-1552,	5116,
-1732,	620,
2069,	1382,

/* begin FIR */
2513,	-1679,
-1735,	-621,
-1676,	-5526,
4913,	-6625,
8902,	0,
4517,	6090,
-1266,	4175,
434,	-155,
0,	0,

/* begin FIR */
2593,	-1732,
-1774,	-635,
-1711,	-5640,
4982,	-6717,
8920,	0,
4414,	5951,
-1137,	3747,
0,	0,
0,	0,

/* begin FIR */
2221,	-1484,
-1079,	-386,
-1406,	-4635,
4764,	-6423,
10238,	0,
6729,	9074,
0,	0,
0,	0,
0,	0,

/* begin FIR */
2936,	-1962,
1395,	499,
-1060,	-3495,
6851,	-9237,
21354,	0,
0,	0,
0,	0,
0,	0,
0,	0,

/* begin FIR */
0,	0,
0,	0,
0,	0,
0,	0,
24563,	0,
6248,	8425,
-364,	1199,
2540,	-909,
1044,	697,

/* begin FIR */
0,	0,
0,	0,
0,	0,
6544,	-8823,
10247,	0,
4899,	6606,
-1491,	4915,
-1195,	428,
2531,	1691,

/* begin FIR */
0,	0,
0,	0,
-844,	-2784,
4369,	-5891,
9333,	0,
5329,	7185,
-1848,	6093,
-1818,	650,
3255,	2175,

/* begin FIR */
0,	0,
1126,	403,
-1248,	-4114,
4643,	-6261,
9193,	0,
5082,	6852,
-1735,	5721,
-1717,	614,
2947,	1969,

/* begin FIR */
2350,	-1570,
-1756,	-628,
-1582,	-5215,
4586,	-6183,
8463,	0,
4586,	6183,
-1582,	5215,
-1756,	628,
2350,	1570,

/* begin FIR */
2947,	-1969,
-1717,	-614,
-1735,	-5721,
5082,	-6852,
9193,	0,
4643,	6261,
-1248,	4114,
1126,	-403,
0,	0,

/* begin FIR */
3255,	-2175,
-1818,	-650,
-1848,	-6093,
5329,	-7185,
9333,	0,
4369,	5891,
-844,	2784,
0,	0,
0,	0,

/* begin FIR */
2531,	-1691,
-1195,	-428,
-1491,	-4915,
4899,	-6606,
10247,	0,
6544,	8823,
0,	0,
0,	0,
0,	0,

/* begin FIR */
1044,	-697,
2540,	909,
-364,	-1199,
6248,	-8425,
24563,	0,
0,	0,
0,	0,
0,	0,
0,	0,

};
