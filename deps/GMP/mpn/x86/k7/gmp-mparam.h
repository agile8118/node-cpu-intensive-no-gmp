/* AMD K7 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 2083 MHz K7 Barton */
/* FFT tuning limit = 49,770,069 */
/* Generated by tuneup.c, 2019-11-09, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               3
#define MOD_1N_TO_MOD_1_1_THRESHOLD          8
#define MOD_1U_TO_MOD_1_1_THRESHOLD          4
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        24
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     13
#define USE_PREINV_DIVREM_1                  1  /* native */
/* From mati.gmplib.org, 2023-07-21 */
#define DIV_QR_1N_PI1_METHOD                 3  /* 9.52% faster than 1 */
#define DIV_QR_1_NORM_THRESHOLD              4
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           26

#define DIV_1_VS_MUL_1_PERCENT             182

#define MUL_TOOM22_THRESHOLD                28
#define MUL_TOOM33_THRESHOLD                85
#define MUL_TOOM44_THRESHOLD               154
#define MUL_TOOM6H_THRESHOLD               208
#define MUL_TOOM8H_THRESHOLD               309

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      97
#define MUL_TOOM32_TO_TOOM53_THRESHOLD      99
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      97
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     102
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     121

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 50
#define SQR_TOOM3_THRESHOLD                 86
#define SQR_TOOM4_THRESHOLD                220
#define SQR_TOOM6_THRESHOLD                270
#define SQR_TOOM8_THRESHOLD                446

#define MULMID_TOOM42_THRESHOLD             50

#define MULMOD_BNM1_THRESHOLD               18
#define SQRMOD_BNM1_THRESHOLD               19

#define MUL_FFT_MODF_THRESHOLD             606  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    606, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     15, 5}, {     31, 6}, {     28, 7}, {     15, 6}, \
    {     32, 7}, {     17, 6}, {     35, 7}, {     19, 6}, \
    {     39, 7}, {     23, 6}, {     47, 7}, {     29, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     49, 8}, {     31, 7}, {     63, 8}, \
    {     39, 9}, {     23, 8}, {     55, 9}, {     31, 8}, \
    {     63, 7}, {    127, 8}, {     71, 9}, {     39, 6}, \
    {    319, 9}, {     47, 8}, {     99, 6}, {    399, 9}, \
    {     55,10}, {     31, 9}, {     63, 8}, {    127, 9}, \
    {     79,10}, {     47, 9}, {     95, 8}, {    191, 4}, \
    {   3135, 5}, {   1599, 4}, {   3455, 6}, {    959, 8}, \
    {    247,10}, {     79, 9}, {    167,10}, {     95, 9}, \
    {    199,10}, {    111,11}, {     63,10}, {    127, 9}, \
    {    255,10}, {    143, 9}, {    287, 8}, {    575,10}, \
    {    159, 9}, {    319, 8}, {    639, 7}, {   1279,11}, \
    {     95,10}, {    191, 9}, {    383, 8}, {    799,10}, \
    {    207,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511, 8}, {   1023,10}, {    271, 9}, {    543, 8}, \
    {   1087, 9}, {    575,11}, {    159, 9}, {    639,10}, \
    {    335, 9}, {    671, 8}, {   1343,10}, {    351, 9}, \
    {    703,11}, {    191,10}, {    383, 9}, {    799, 8}, \
    {   1599,11}, {    223,10}, {    447,12}, {    127,11}, \
    {    255,10}, {    511, 9}, {   1023,10}, {    543, 9}, \
    {   1087,10}, {    575, 9}, {   1151,10}, {    607, 9}, \
    {   1215,11}, {    319,10}, {    639, 9}, {   1343,10}, \
    {    703, 9}, {   1407,12}, {    191,11}, {    383,10}, \
    {    767, 9}, {   1535,10}, {    799, 9}, {   1599,10}, \
    {    831, 9}, {   1727, 8}, {   3455,11}, {    447,13}, \
    {    127,12}, {    255,11}, {    511,10}, {   1023, 9}, \
    {   2047,11}, {    543,10}, {   1087,11}, {    575,10}, \
    {   1151, 9}, {   2303,11}, {    607,10}, {   1215,12}, \
    {    319,11}, {    639,10}, {   1279,11}, {    671,10}, \
    {   1343,11}, {    703,10}, {   1407,11}, {    735,10}, \
    {   1471, 9}, {   2943,12}, {    383,11}, {    767,10}, \
    {   1535,11}, {    799,10}, {   1599,11}, {    831,10}, \
    {   1663,11}, {    863,10}, {   1727,12}, {    447,11}, \
    {    895,10}, {   1791,11}, {    959,10}, {   1919,13}, \
    {    255,12}, {    511,11}, {   1023,10}, {   2111,11}, \
    {   1087,10}, {   2175,12}, {    575,11}, {   1151,10}, \
    {   2303,11}, {   1215,10}, {   2431,12}, {    639,11}, \
    {   1343,12}, {    703,11}, {   1407,10}, {   2815,11}, \
    {   1471,10}, {   2943,13}, {    383,12}, {    767,11}, \
    {   1599,12}, {    831,11}, {   1663,10}, {   3327,11}, \
    {   1727,10}, {   3455,12}, {    895,11}, {   1855,12}, \
    {    959,11}, {   1919,10}, {   3839,14}, {    255,13}, \
    {    511,12}, {   1023,11}, {   2111,12}, {   1087,11}, \
    {   2239,12}, {   1151,11}, {   2303,12}, {   1215,11}, \
    {   2431,13}, {    639,12}, {   1343,11}, {   2687,12}, \
    {   1407,11}, {   2815,12}, {   1471,11}, {   2943,13}, \
    {    767,12}, {   1663,11}, {   3327,12}, {   1727,11}, \
    {   3455,13}, {    895,12}, {   1919,11}, {   3839,12}, \
    {   1983,14}, {    511,13}, {   1023,12}, {   2239,13}, \
    {   1151,12}, {   2495,13}, {   1279,12}, {   2687,13}, \
    {   1407,12}, {   2943,14}, {    767,13}, {   1535,12}, \
    {   3135,13}, {   1663,12}, {   3455,13}, {   1791,12}, \
    {   3583,13}, {   1919,12}, {   3967,15}, {    511,14}, \
    {   1023,13}, {   2047,12}, {   4095,13}, {   2175,12}, \
    {   4479,13}, {   2431,12}, {   4863,14}, {   1279,13}, \
    {   2559,12}, {   5119,13}, {   2943,12}, {   5887,14}, \
    {   1535,13}, {   3455,14}, {   1791,13}, {   3967,15}, \
    {   1023,14}, {   2047,13}, {   4479,14}, {   2303,13}, \
    {   4991,14}, {   2559,13}, {   5119,14}, {   2815,13}, \
    {   5887,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 254
#define MUL_FFT_THRESHOLD                 7552

#define SQR_FFT_MODF_THRESHOLD             492  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    492, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     28, 7}, {     15, 6}, {     32, 7}, {     17, 6}, \
    {     35, 7}, {     19, 6}, {     39, 7}, {     27, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     47, 8}, {     27, 9}, {     15, 8}, \
    {     31, 7}, {     63, 8}, {     39, 9}, {     23, 8}, \
    {     51, 9}, {     31, 8}, {     67, 9}, {     39, 8}, \
    {     79, 9}, {     47, 8}, {     95, 9}, {     55,10}, \
    {     31, 9}, {     79,10}, {     47, 9}, {    103,11}, \
    {     31,10}, {     63, 9}, {    135, 8}, {    271, 9}, \
    {    143,10}, {     79, 9}, {    167,10}, {     95, 9}, \
    {    191, 8}, {    383,10}, {    111,11}, {     63,10}, \
    {    127, 9}, {    255, 8}, {    511,10}, {    143, 9}, \
    {    303,10}, {    159, 9}, {    319, 8}, {    639,11}, \
    {     95,10}, {    191, 9}, {    383, 8}, {    767, 9}, \
    {    399,10}, {    207,12}, {     63,11}, {    127,10}, \
    {    255, 9}, {    511,10}, {    271, 9}, {    543, 8}, \
    {   1087,10}, {    287, 9}, {    575,10}, {    303,11}, \
    {    159,10}, {    319, 9}, {    639,10}, {    335, 9}, \
    {    671, 8}, {   1343, 9}, {    703,11}, {    191,10}, \
    {    383, 9}, {    767, 8}, {   1535,10}, {    399, 9}, \
    {    799, 8}, {   1599, 9}, {    863,11}, {    223,10}, \
    {    447,12}, {    127,11}, {    255,10}, {    511, 9}, \
    {   1087,10}, {    575, 9}, {   1215,10}, {    639, 9}, \
    {   1279,10}, {    671, 9}, {   1343,11}, {    351,10}, \
    {    703, 9}, {   1407,10}, {    735, 9}, {   1471,12}, \
    {    191,11}, {    383,10}, {    767, 9}, {   1535,10}, \
    {    799, 9}, {   1599,11}, {    415,10}, {    831, 9}, \
    {   1663,10}, {    863, 9}, {   1727, 8}, {   3455,11}, \
    {    447,10}, {    895,13}, {    127,12}, {    255,11}, \
    {    511,10}, {   1023, 9}, {   2047,11}, {    543,10}, \
    {   1087, 9}, {   2175,11}, {    575,10}, {   1151, 9}, \
    {   2303,11}, {    607,10}, {   1215, 9}, {   2431,12}, \
    {    319,11}, {    639,10}, {   1279,11}, {    671,10}, \
    {   1343,11}, {    703,10}, {   1407, 9}, {   2815,11}, \
    {    735,10}, {   1471, 9}, {   2943,12}, {    383,11}, \
    {    767,10}, {   1599,11}, {    831,10}, {   1663, 9}, \
    {   3327,10}, {   1727,12}, {    447,11}, {    895,10}, \
    {   1791,11}, {    959,10}, {   1919,13}, {    255,12}, \
    {    511,11}, {   1023,10}, {   2111,11}, {   1087,10}, \
    {   2175,12}, {    575,11}, {   1151,10}, {   2303,11}, \
    {   1215,10}, {   2431,12}, {    639,11}, {   1343,12}, \
    {    703,11}, {   1407,10}, {   2815,11}, {   1471,10}, \
    {   2943,13}, {    383,12}, {    767,11}, {   1599,12}, \
    {    831,11}, {   1663,10}, {   3327,11}, {   1727,10}, \
    {   3455,12}, {    895,11}, {   1791,12}, {    959,11}, \
    {   1919,10}, {   3839,14}, {    255,13}, {    511,12}, \
    {   1023,11}, {   2111,12}, {   1087,11}, {   2239,12}, \
    {   1151,11}, {   2303,12}, {   1215,11}, {   2431,13}, \
    {    639,12}, {   1343,11}, {   2687,12}, {   1407,11}, \
    {   2815,12}, {   1471,11}, {   2943,13}, {    767,12}, \
    {   1599,11}, {   3199,12}, {   1663,11}, {   3327,12}, \
    {   1727,11}, {   3455,13}, {    895,12}, {   1791,11}, \
    {   3583,12}, {   1919,11}, {   3839,12}, {   1983,14}, \
    {    511,13}, {   1023,12}, {   2239,13}, {   1151,12}, \
    {   2431,13}, {   1279,12}, {   2687,13}, {   1407,12}, \
    {   2943,14}, {    767,13}, {   1535,12}, {   3199,13}, \
    {   1663,12}, {   3455,13}, {   1791,12}, {   3583,13}, \
    {   1919,12}, {   3967,15}, {    511,14}, {   1023,13}, \
    {   2047,12}, {   4095,13}, {   2175,12}, {   4351,13}, \
    {   2431,14}, {   1279,13}, {   2943,12}, {   5887,14}, \
    {   1535,13}, {   3455,14}, {   1791,13}, {   3967,15}, \
    {   1023,14}, {   2047,13}, {   4351,14}, {   2303,13}, \
    {   4991,14}, {   2559,13}, {   5119,14}, {   2815,13}, \
    {   5887,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 258
#define SQR_FFT_THRESHOLD                 5504

#define MULLO_BASECASE_THRESHOLD             3
#define MULLO_DC_THRESHOLD                  34
#define MULLO_MUL_N_THRESHOLD            14281
#define SQRLO_BASECASE_THRESHOLD             6
#define SQRLO_DC_THRESHOLD                 137
#define SQRLO_SQR_THRESHOLD              10821

#define DC_DIV_QR_THRESHOLD                 45
#define DC_DIVAPPR_Q_THRESHOLD             206
#define DC_BDIV_QR_THRESHOLD                39
#define DC_BDIV_Q_THRESHOLD                144

#define INV_MULMOD_BNM1_THRESHOLD           54
#define INV_NEWTON_THRESHOLD               202
#define INV_APPR_THRESHOLD                 206

#define BINV_NEWTON_THRESHOLD              224
#define REDC_1_TO_REDC_N_THRESHOLD          63

#define MU_DIV_QR_THRESHOLD               1442
#define MU_DIVAPPR_Q_THRESHOLD            1387
#define MUPI_DIV_QR_THRESHOLD               82
#define MU_BDIV_QR_THRESHOLD              1308
#define MU_BDIV_Q_THRESHOLD               1387

#define POWM_SEC_TABLE  1,16,102,428,1221

#define GET_STR_DC_THRESHOLD                14
#define GET_STR_PRECOMPUTE_THRESHOLD        28
#define SET_STR_DC_THRESHOLD               254
#define SET_STR_PRECOMPUTE_THRESHOLD       890

#define FAC_DSC_THRESHOLD                  206
#define FAC_ODD_THRESHOLD                   29

#define MATRIX22_STRASSEN_THRESHOLD         17
#define HGCD2_DIV1_METHOD                    3  /* 3.84% faster than 4 */
#define HGCD_THRESHOLD                     123
#define HGCD_APPR_THRESHOLD                151
#define HGCD_REDUCE_THRESHOLD             3389
#define GCD_DC_THRESHOLD                   435
#define GCDEXT_DC_THRESHOLD                318
#define JACOBI_BASE_METHOD                   4  /* 8.04% faster than 3 */

/* Tuneup completed successfully, took 175382 seconds */
