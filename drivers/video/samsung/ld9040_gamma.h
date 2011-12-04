/* linux/drivers/video/samsung/ld9040_brightness.h
 *
 * Gamma level definitions.
 *
 * Copyright (c) 2009 Samsung Electronics
 * InKi Dae <inki.dae@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef _ld9040_BRIGHTNESS_H
#define _ld9040_BRIGHTNESS_H

#define MAX_GAMMA_LEVEL		25
#define GAMMA_TABLE_COUNT		21

#if 1
/* [U1] OCTA 4.27 XVGA - gamma value: 2.2 */

static const unsigned int ld9040_22_300[] = {
  0x00, 0xCA, 0xC4, 0xB8, 0xC6, 0x00, 0xAB
, 0x00, 0xC3, 0xC1, 0xB4, 0xC0, 0x00, 0xD1
, 0x00, 0xC6, 0xC2, 0xB1, 0xBF, 0x00, 0xDF
};

static const unsigned int ld9040_22_290[] = {
  0x00, 0xCB, 0xC5, 0xB8, 0xC6, 0x00, 0xAA
, 0x00, 0xC3, 0xC2, 0xB5, 0xC1, 0x00, 0xCF
, 0x00, 0xC7, 0xC2, 0xB2, 0xBF, 0x00, 0xDE
};

static const unsigned int ld9040_22_280[] = {
  0x00, 0xCC, 0xC5, 0xBA, 0xC6, 0x00, 0xA7
, 0x00, 0xC3, 0xC1, 0xB6, 0xC2, 0x00, 0xCB
, 0x00, 0xC7, 0xC2 ,0xB4 ,0xBF ,0x00, 0xDA
};

static const unsigned int ld9040_22_270[] = {
  0x00, 0xCC, 0xC4, 0xBB, 0xC7, 0x00, 0xA3
, 0x00, 0xC3, 0xC2, 0xB6, 0xC2, 0x00, 0xC8
, 0x00, 0xC8, 0xC1, 0xB3, 0xC1, 0x00, 0xD6
};
static const unsigned int ld9040_22_260[] = {
  0x00, 0xCD, 0xC5, 0xB6, 0xC8, 0x00, 0xA3
, 0x00, 0xC3, 0xC3, 0xB6, 0xC3, 0x00, 0xC8
, 0x00, 0xC8, 0xC3, 0xB4, 0xC2, 0x00, 0xD5
};

static const unsigned int ld9040_22_250[] = {
  0x00, 0xCC, 0xC5, 0xBD, 0xCA, 0x00, 0xA0
, 0x00, 0xC3, 0xC3, 0xB8, 0xC4, 0x00, 0xC4
, 0x00, 0xC8, 0xC2, 0xB5, 0xC3, 0x00, 0xD2
};

static const unsigned int ld9040_22_240[] = {
  0x00, 0xCC, 0xC5, 0xBD, 0xCA, 0x00, 0x9E
, 0x00, 0xC4, 0xC4, 0xB8, 0xC4, 0x00, 0xC1
, 0x00, 0xC9, 0xC3, 0xB6, 0xC2, 0x00, 0xCF
};

static const unsigned int ld9040_22_230[] = {
  0x00, 0xCD, 0xC6, 0xBD, 0xCA, 0x00, 0x9B
, 0x00, 0xC3, 0xC4, 0xB9, 0xC4, 0x00, 0xBE
, 0x00, 0xCA, 0xC4, 0xB6, 0xC3, 0x00, 0xCB
};

static const unsigned int ld9040_22_220[] = {
  0x00, 0xCD, 0xC6, 0xBD, 0xCC, 0x00, 0x98
, 0x00, 0xC3, 0xC5, 0xB9, 0xC5, 0x00, 0xBA
, 0x00, 0xC9, 0xC4, 0xB7, 0xC4, 0x00, 0xC7
};

static const unsigned int ld9040_22_210[] = {
  0x00, 0xCE, 0xC7, 0xBD, 0xCC, 0x00, 0x95
, 0x00, 0xC3, 0xC4, 0xBA, 0xC6, 0x00, 0xB7
, 0x00, 0xCA, 0xC5, 0xB8, 0xC4, 0x00, 0xC3
};

static const unsigned int ld9040_22_200[] = {
  0x00, 0xCF, 0xC7, 0xBE, 0xCD, 0x00, 0x92
, 0x00, 0xC3, 0xC5, 0xBA, 0xC7, 0x00, 0xB3
, 0x00, 0xCB, 0xC5, 0xB9, 0xC4, 0x00, 0xC0
};

static const unsigned int ld9040_22_190[] = {
  0x00, 0xCE, 0xC8, 0xBF, 0xCD, 0x00, 0x8F
, 0x00, 0xC3, 0xC5, 0xBA, 0xC8, 0x00, 0xAF
, 0x00, 0xCA, 0xC5, 0xBA, 0xC5, 0x00, 0xBC
};

static const unsigned int ld9040_22_180[] = {
  0x00, 0xCE, 0xC7, 0xC1, 0xCD, 0x00, 0x8C
, 0x00, 0xC4, 0xC5, 0xBB, 0xC8, 0x00, 0xAC
, 0x00, 0xCA, 0xC4, 0xBB, 0xC6, 0x00, 0xB8
};

static const unsigned int ld9040_22_170[] = {
  0x00, 0xCE, 0xC7, 0xC1, 0xCF, 0x00, 0x88
, 0x00, 0xC3, 0xC5, 0xBC, 0xCA, 0x00, 0xA7
, 0x00, 0xCB, 0xC5, 0xBB, 0xC7, 0x00, 0xB3
};

static const unsigned int ld9040_22_160[] = {
  0x00, 0xCE, 0xC9, 0xC1, 0xCF, 0x00, 0x85
, 0x00, 0xC2, 0xC6, 0xBD, 0xCA, 0x00, 0xA3
, 0x00, 0xCB, 0xC6, 0xBB, 0xC8, 0x00, 0xAF
};

static const unsigned int ld9040_22_150[] = {
  0x00, 0xCF, 0xC9, 0xC1, 0xD1, 0x00, 0x82
, 0x00, 0xC3, 0xC6, 0xBE, 0xCB, 0x00, 0x9F
, 0x00, 0xCC, 0xC6, 0xBB, 0xC9, 0x00, 0xAB
};

static const unsigned int ld9040_22_140[] = {
  0x00, 0xCF, 0xCA, 0xC1, 0xD0, 0x00, 0x7F
, 0x00, 0xC3, 0xC6, 0xBF, 0xCB, 0x00, 0x9B
, 0x00, 0xCC, 0xC8, 0xBD, 0xC9, 0x00, 0xA6
};

static const unsigned int ld9040_22_130[] = {
  0x00, 0xCF, 0xCB, 0xC2, 0xD1, 0x00, 0x7B
, 0x00, 0xC2, 0xC7, 0xBF, 0xCC, 0x00, 0x97
, 0x00, 0xCC, 0xC8, 0xBE, 0xCB, 0x00, 0xA1
};

static const unsigned int ld9040_22_120[] = {
  0x00, 0xD0, 0xCB, 0xC2, 0xD3, 0x00, 0x77
, 0x00, 0xC2, 0xC8, 0xC0, 0xCD, 0x00, 0x92
, 0x00, 0xCD, 0xC8, 0xBE, 0xCC, 0x00, 0x9C
};

static const unsigned int ld9040_22_110[] = {
  0x00, 0xD0, 0xCB, 0xC3, 0xD3, 0x00, 0x74
, 0x00, 0xC2, 0xC8, 0xC1, 0xCE, 0x00, 0x8D
, 0x00, 0xCD, 0xC8, 0xBF, 0xCC, 0x00, 0x98
};

static const unsigned int ld9040_22_100[] = {
  0x00, 0xD1, 0xCB, 0xC5, 0xD4, 0x00, 0x6F
, 0x00, 0xC2, 0xC8, 0xC2, 0xCF, 0x00, 0x88
, 0x00, 0xCE, 0xC9, 0xC0, 0xCE, 0x00, 0x92
};

static const unsigned int ld9040_22_90[] = {
  0x00, 0xD2, 0xCA, 0xC5, 0xD4, 0x00, 0x6A
, 0x00, 0xC0, 0xC8, 0xC2, 0xD0, 0x00, 0x82
, 0x00, 0xCE, 0xC9, 0xC0, 0xCF, 0x00, 0x8B
};

static const unsigned int ld9040_22_80[] = {
  0x00, 0xD2, 0xCB, 0xC6, 0xD7, 0x00, 0x65
, 0x00, 0xC0, 0xC9, 0xC3, 0xD2, 0x00, 0x7C
, 0x00, 0xCE, 0xCA, 0xC2, 0xD1, 0x00, 0x85
};

static const unsigned int ld9040_22_70[] = {
  0x00, 0xD4, 0xCD, 0xC7, 0xD7, 0x00, 0x60
, 0x00, 0xBC, 0xCB, 0xC4, 0xD3, 0x00, 0x76
, 0x00, 0xCF, 0xCC, 0xC3, 0xD2, 0x00, 0x7F
};

static const unsigned int ld9040_22_60[] = {
  0x00, 0xD5, 0xCD, 0xC8, 0xD7, 0x00, 0x5B
, 0x00, 0xBA, 0xCA, 0xC5, 0xD4, 0x00, 0x71
, 0x00, 0xD0, 0xCC, 0xC5, 0xD3, 0x00, 0x78
};

static const unsigned int ld9040_22_50[] = {
  0x00, 0xD6, 0xCE, 0xCA, 0xD8, 0x00, 0x55
, 0x00, 0xB9, 0xCA, 0xC6, 0xD6, 0x00, 0x69
, 0x00, 0xD1, 0xCC, 0xC6, 0xD5, 0x00, 0x71
};

static const unsigned int ld9040_22_40[] = {
  0x00, 0xD9, 0xCE, 0xCA, 0xD9, 0x00, 0x4F
, 0x00, 0xB5, 0xCA, 0xC7, 0xD8, 0x00, 0x61
, 0x00, 0xD2, 0xCE, 0xC6, 0xD6, 0x00, 0x69
};

static const unsigned int ld9040_22_30_dimming[] = {
  0x00, 0xD9, 0xD3, 0xCC, 0xDA, 0x00, 0x46
, 0x00, 0xB1, 0xC9, 0xC9, 0xD9, 0x00, 0x58
, 0x00, 0xD2, 0xD0, 0xC9, 0xD8, 0x00, 0x5E
};

#else

/* OCTA 4.52 XVGA - gamma value: 2.2 */
static const unsigned int ld9040_22_300[] = {
	0x00, 0xa7, 0xb4, 0xae, 0xbf, 0x00, 0x91,
	0x00, 0xb2, 0xb4, 0xaa, 0xbb, 0x00, 0xac,
	0x00, 0xb3, 0xb1, 0xaa, 0xbc, 0x00, 0xb3
};

static const unsigned int ld9040_22_290[] = {
	0x00, 0xa9, 0xb7, 0xae, 0xbd, 0x00, 0x89,
	0x00, 0xb7, 0xb6, 0xa8, 0xba, 0x00, 0xa4,
	0x00, 0xb1, 0xb4, 0xaa, 0xbb, 0x00, 0xaa
};

static const unsigned int ld9040_22_280[] = {
	0x00, 0xa9, 0xb6, 0xad, 0xbf, 0x00, 0x86,
	0x00, 0xb8, 0xb5, 0xa8, 0xbc, 0x00, 0xa0,
	0x00, 0xb3, 0xb3, 0xa9, 0xbc, 0x00, 0xa7
};

static const unsigned int ld9040_22_270[] = {
	0x00, 0xa8, 0xb8, 0xae, 0xbe, 0x00, 0x84,
	0x00, 0xb9, 0xb7, 0xa8, 0xbc, 0x00, 0x9d,
	0x00, 0xb2, 0xb5, 0xaa, 0xbc, 0x00, 0xa4

};
static const unsigned int ld9040_22_260[] = {
	0x00, 0xa4, 0xb8, 0xb0, 0xbf, 0x00, 0x80,
	0x00, 0xb8, 0xb6, 0xaa, 0xbc, 0x00, 0x9a,
	0x00, 0xb0, 0xb5, 0xab, 0xbd, 0x00, 0xa0
};

static const unsigned int ld9040_22_250[] = {
	0x00, 0xa4, 0xb9, 0xaf, 0xc1, 0x00, 0x7d,
	0x00, 0xb9, 0xb6, 0xaa, 0xbb, 0x00, 0x97,
	0x00, 0xb1, 0xb5, 0xaa, 0xbf, 0x00, 0x9d
};

static const unsigned int ld9040_22_240[] = {
	0x00, 0xa2, 0xb9, 0xaf, 0xc2, 0x00, 0x7a,
	0x00, 0xb9, 0xb7, 0xaa, 0xbd, 0x00, 0x94,
	0x00, 0xb0, 0xb5, 0xab, 0xbf, 0x00, 0x9a
};

static const unsigned int ld9040_22_230[] = {
	0x00, 0xa0, 0xb9, 0xaf, 0xc3, 0x00, 0x77,
	0x00, 0xb9, 0xb7, 0xab, 0xbe, 0x00, 0x90,
	0x00, 0xb0, 0xb6, 0xab, 0xbf, 0x00, 0x97
};

static const unsigned int ld9040_22_220[] = {
	0x00, 0x9e, 0xba, 0xb0, 0xc2, 0x00, 0x75,
	0x00, 0xb9, 0xb8, 0xab, 0xbe, 0x00, 0x8e,
	0x00, 0xb0, 0xb6, 0xac, 0xbf, 0x00, 0x94
};

static const unsigned int ld9040_22_210[] = {
	0x00, 0x9c, 0xb9, 0xb0, 0xc4, 0x00, 0x72,
	0x00, 0xb8, 0xb8, 0xac, 0xbf, 0x00, 0x8a,
	0x00, 0xb0, 0xb6, 0xac, 0xc0, 0x00, 0x91
};

static const unsigned int ld9040_22_200[] = {
	0x00, 0x9a, 0xba, 0xb1, 0xc4, 0x00, 0x6f,
	0x00, 0xb8, 0xb8, 0xad, 0xc0, 0x00, 0x86,
	0x00, 0xb0, 0xb7, 0xad, 0xc0, 0x00, 0x8d
};

static const unsigned int ld9040_22_190[] = {
	0x00, 0x97, 0xba, 0xb2, 0xc5, 0x00, 0x6c,
	0x00, 0xb8, 0xb8, 0xae, 0xc1, 0x00, 0x82,
	0x00, 0xb0, 0xb6, 0xae, 0xc2, 0x00, 0x89
};

static const unsigned int ld9040_22_180[] = {
	0x00, 0x93, 0xba, 0xb3, 0xc5, 0x00, 0x69,
	0x00, 0xb8, 0xb9, 0xae, 0xc1, 0x00, 0x7f,
	0x00, 0xb0, 0xb6, 0xae, 0xc3, 0x00, 0x85
};

static const unsigned int ld9040_22_170[] = {
	0x00, 0x8b, 0xb9, 0xb3, 0xc7, 0x00, 0x65,
	0x00, 0xb7, 0xb8, 0xaf, 0xc3, 0x00, 0x7a,
	0x00, 0x80, 0xb6, 0xae, 0xc4, 0x00, 0x81
};

static const unsigned int ld9040_22_160[] = {
	0x00, 0x89, 0xba, 0xb3, 0xc8, 0x00, 0x62,
	0x00, 0xb6, 0xba, 0xaf, 0xc3, 0x00, 0x76,
	0x00, 0xaf, 0xb7, 0xae, 0xc4, 0x00, 0x7e
};

static const unsigned int ld9040_22_150[] = {
	0x00, 0x82, 0xba, 0xb4, 0xc7, 0x00, 0x5f,
	0x00, 0xb5, 0xba, 0xb0, 0xc3, 0x00, 0x72,
	0x00, 0xae, 0xb8, 0xb0, 0xc3, 0x00, 0x7a
};

static const unsigned int ld9040_22_140[] = {
	0x00, 0x7b, 0xbb, 0xb4, 0xc8, 0x00, 0x5b,
	0x00, 0xb5, 0xba, 0xb1, 0xc4, 0x00, 0x6e,
	0x00, 0xae, 0xb9, 0xb0, 0xc5, 0x00, 0x75
};

static const unsigned int ld9040_22_130[] = {
	0x00, 0x71, 0xbb, 0xb5, 0xc8, 0x00, 0x57,
	0x00, 0xb5, 0xbb, 0xb0, 0xc5, 0x00, 0x6a,
	0x00, 0xae, 0xb9, 0xb1, 0xc6, 0x00, 0x70
};

static const unsigned int ld9040_22_120[] = {
	0x00, 0x47, 0xba, 0xb6, 0xca, 0x00, 0x53,
	0x00, 0xb5, 0xbb, 0xb3, 0xc6, 0x00, 0x65,
	0x00, 0xae, 0xb8, 0xb3, 0xc7, 0x00, 0x6c
};

static const unsigned int ld9040_22_110[] = {
	0x00, 0x13, 0xbb, 0xb7, 0xca, 0x00, 0x4f,
	0x00, 0xb4, 0xbb, 0xb3, 0xc7, 0x00, 0x60,
	0x00, 0xad, 0xb8, 0xb4, 0xc7, 0x00, 0x67
};

static const unsigned int ld9040_22_100[] = {
	0x00, 0x13, 0xba, 0xb8, 0xcb, 0x00, 0x4b,
	0x00, 0xb3, 0xbc, 0xb4, 0xc7, 0x00, 0x5c,
	0x00, 0xac, 0xb8, 0xb4, 0xc8, 0x00, 0x62
};

static const unsigned int ld9040_22_90[] = {
	0x00, 0x13, 0xb9, 0xb8, 0xcd, 0x00, 0x46,
	0x00, 0xb1, 0xbc, 0xb5, 0xc8, 0x00, 0x56,
	0x00, 0xaa, 0xb8, 0xb4, 0xc9, 0x00, 0x5d
};

static const unsigned int ld9040_22_80[] = {
	0x00, 0x13, 0xba, 0xb9, 0xcd, 0x00, 0x41,
	0x00, 0xb0, 0xbe, 0xb5, 0xc9, 0x00, 0x51,
	0x00, 0xa9, 0xb9, 0xb5, 0xca, 0x00, 0x57
};

static const unsigned int ld9040_22_70[] = {
	0x00, 0x13, 0xb9, 0xb9, 0xd0, 0x00, 0x3c,
	0x00, 0xaf, 0xbf, 0xb6, 0xcb, 0x00, 0x4b,
	0x00, 0xa8, 0xb9, 0xb5, 0xcc, 0x00, 0x52
};

static const unsigned int ld9040_22_50[] = {
	0x00, 0x13, 0xb2, 0xba, 0xd2, 0x00, 0x30,
	0x00, 0xaf, 0xc0, 0xb8, 0xcd, 0x00, 0x3d,
	0x00, 0xa8, 0xb8, 0xb7, 0xcd, 0x00, 0x44
};


static const unsigned int ld9040_22_40[] = {
	0x00, 0xa7, 0xa9, 0xbb, 0xd2, 0x00, 0x28,
	0x00, 0xb2, 0xc0, 0xbc, 0xce, 0x00, 0x30,
	0x00, 0xb3, 0xb6, 0xb7, 0xce, 0x00, 0x3b
};


static const unsigned int ld9040_22_30_dimming[] = {
	0x00, 0xa7, 0x9c, 0xba, 0xd3, 0x00, 0x20,
	0x00, 0xb2, 0xc0, 0xbd, 0xd0, 0x00, 0x26,
	0x00, 0xb3, 0xb7, 0xb7, 0xcf, 0x00, 0x31
};
#endif

#if 0
/*  OCTA 4.52 XVGA - gamma value: 1.9 */
static const unsigned int ld9040_19_300[] = {
	0x18, 0x08, 0x24, 0x61, 0x5F, 0x39, 0xBA,
	0xBD, 0xAD, 0xB1, 0xB6, 0xA5, 0xC4, 0xC5,
	0xBC, 0x00, 0xA0, 0x00, 0xA4, 0x00, 0xDB
};

static const unsigned int ld9040_19_280[] = {
	0x18, 0x08, 0x24, 0x61, 0x60, 0x39, 0xBB,
	0xBE, 0xAD, 0xB2, 0xB6, 0xA6, 0xC5, 0xC7,
	0xBD, 0x00, 0x9B, 0x00, 0x9E, 0x00, 0xD5
};

static const unsigned int ld9040_19_260[] = {
	0x18, 0x08, 0x24, 0x63, 0x61, 0x3B, 0xBA,
	0xBE, 0xAC, 0xB3, 0xB8, 0xA7, 0xC6, 0xC8,
	0xBD, 0x00, 0x96, 0x00, 0x98, 0x00, 0xCF
};

static const unsigned int ld9040_19_240[] = {
	0x18, 0x08, 0x24, 0x67, 0x64, 0x3F, 0xBB,
	0xBE, 0xAD, 0xB3, 0xB9, 0xA7, 0xC8, 0xC9,
	0xBE, 0x00, 0x90, 0x00, 0x92, 0x00, 0xC8
};

static const unsigned int ld9040_19_220[] = {
	0x18, 0x08, 0x24, 0x68, 0x64, 0x40, 0xBC,
	0xBF, 0xAF, 0xB4, 0xBA, 0xA9, 0xC8, 0xCA,
	0xBE, 0x00, 0x8B, 0x00, 0x8C, 0x00, 0xC0
};

static const unsigned int ld9040_19_200[] = {
	0x18, 0x08, 0x24, 0x68, 0x64, 0x3F, 0xBE,
	0xC0, 0xB0, 0xB6, 0xBB, 0xAB, 0xC8, 0xCB,
	0xBF, 0x00, 0x85, 0x00, 0x86, 0x00, 0xB8
};

static const unsigned int ld9040_19_170[] = {
	0x18, 0x08, 0x24, 0x69, 0x64, 0x40, 0xBF,
	0xC1, 0xB0, 0xB9, 0xBE, 0xAD, 0xCB, 0xCD,
	0xC2, 0x00, 0x7A, 0x00, 0x7B, 0x00, 0xAA
};

static const unsigned int ld9040_19_140[] = {
	0x18, 0x08, 0x24, 0x6E, 0x65, 0x45, 0xC0,
	0xC3, 0xB2, 0xBA, 0xBE, 0xAE, 0xCD, 0xD0,
	0xC4, 0x00, 0x70, 0x00, 0x70, 0x00, 0x9C
};

static const unsigned int ld9040_19_110[] = {
	0x18, 0x08, 0x24, 0x6F, 0x65, 0x46, 0xC2,
	0xC4, 0xB3, 0xBF, 0xC2, 0xB2, 0xCF, 0xD1,
	0xC6, 0x00, 0x64, 0x00, 0x64, 0x00, 0x8D
};

static const unsigned int ld9040_19_90[] = {
	0x18, 0x08, 0x24, 0x74, 0x60, 0x4A, 0xC3,
	0xC6, 0xB5, 0xBF, 0xC3, 0xB2, 0xD2, 0xD3,
	0xC8, 0x00, 0x5B, 0x00, 0x5B, 0x00, 0x81
};

static const unsigned int ld9040_19_30[] = {
	0x18, 0x08, 0x24, 0x84, 0x45, 0x4F, 0xCA,
	0xCB, 0xBC, 0xC9, 0xCB, 0xBC, 0xDA, 0xDA,
	0xD0, 0x00, 0x35, 0x00, 0x34, 0x00, 0x4E
};
#endif

struct ld9040_gamma {
	unsigned int *gamma_22_table[MAX_GAMMA_LEVEL];
	unsigned int *gamma_19_table[MAX_GAMMA_LEVEL];
};

static struct ld9040_gamma gamma_table = {
	.gamma_22_table[0] = (unsigned int *)&ld9040_22_30_dimming,
	.gamma_22_table[1] = (unsigned int *)&ld9040_22_40,
	.gamma_22_table[2] = (unsigned int *)&ld9040_22_70,
	.gamma_22_table[3] = (unsigned int *)&ld9040_22_90,
	.gamma_22_table[4] = (unsigned int *)&ld9040_22_100,
	.gamma_22_table[5] = (unsigned int *)&ld9040_22_110,
	.gamma_22_table[6] = (unsigned int *)&ld9040_22_120,
	.gamma_22_table[7] = (unsigned int *)&ld9040_22_130,
	.gamma_22_table[8] = (unsigned int *)&ld9040_22_140,
	.gamma_22_table[9] = (unsigned int *)&ld9040_22_150,
	.gamma_22_table[10] = (unsigned int *)&ld9040_22_160,
	.gamma_22_table[11] = (unsigned int *)&ld9040_22_170,
	.gamma_22_table[12] = (unsigned int *)&ld9040_22_180,
	.gamma_22_table[13] = (unsigned int *)&ld9040_22_190,
	.gamma_22_table[14] = (unsigned int *)&ld9040_22_200,
	.gamma_22_table[15] = (unsigned int *)&ld9040_22_210,
	.gamma_22_table[16] = (unsigned int *)&ld9040_22_220,
	.gamma_22_table[17] = (unsigned int *)&ld9040_22_230,
	.gamma_22_table[18] = (unsigned int *)&ld9040_22_240,
	.gamma_22_table[19] = (unsigned int *)&ld9040_22_250,
	.gamma_22_table[20] = (unsigned int *)&ld9040_22_260,
	.gamma_22_table[21] = (unsigned int *)&ld9040_22_270,
	.gamma_22_table[22] = (unsigned int *)&ld9040_22_280,
	.gamma_22_table[23] = (unsigned int *)&ld9040_22_290,
	.gamma_22_table[24] = (unsigned int *)&ld9040_22_300,


#if 0
	.gamma_19_table[0] = (unsigned int *)&ld9040_19_30,
	.gamma_19_table[1] = (unsigned int *)&ld9040_19_90,
	.gamma_19_table[2] = (unsigned int *)&ld9040_19_110,
	.gamma_19_table[3] = (unsigned int *)&ld9040_19_140,
	.gamma_19_table[4] = (unsigned int *)&ld9040_19_170,
	.gamma_19_table[5] = (unsigned int *)&ld9040_19_200,
	.gamma_19_table[6] = (unsigned int *)&ld9040_19_220,
	.gamma_19_table[7] = (unsigned int *)&ld9040_19_240,
	.gamma_19_table[8] = (unsigned int *)&ld9040_19_260,
	.gamma_19_table[9] = (unsigned int *)&ld9040_19_280,
	.gamma_19_table[10] = (unsigned int *)&ld9040_19_300,
#endif
};

#endif
