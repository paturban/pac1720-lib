/*
 * Register definitions for the
 * Microchip PAC1710/20 Single and Dual High-Side Current-Sense Monitor with
 * Power Calculation
 *
 * Based on the Microchip DS20005386B datasheet
 *
 * Copyright (C) 2018 Patrick Urban <patrick.urban@web.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _PAC1720_REGMAP_H
#define _PAC1720_REGMAP_H

/*
 * 6-1: Configuration Register
 */
#define PAC1720_R_CFG			0x00

#define PAC1720_M_CDEN			0x40 /* mask bit 6 */
	#define PAC1720_SET_CDEN(R,V)	(R = (R & (PAC1720_M_CDEN ^ 0xFF)) | ((V & 0x01) << 6))
	#define PAC1720_GET_CDEN(R)	((R & PAC1720_M_CDEN) >> 6)

#define PAC1720_M_MSKAL			0x20 /* mask bit 5 */
	#define PAC1720_SET_MSKAL(R,V)	(R = (R & (PAC1720_M_MSKAL ^ 0xFF)) | ((V & 0x01) << 5))
	#define PAC1720_GET_MSKAL(R)	((R & PAC1720_M_MSKAL) >> 5)

#define PAC1720_M_C2IDS			0x10 /* mask bit 4 */
	#define PAC1720_SET_C2IDS(R,V)	(R = (R & (PAC1720_M_C2IDS ^ 0xFF)) | ((V & 0x01) << 4))
	#define PAC1720_GET_C2IDS(R)	((R & PAC1720_M_C2IDS) >> 4)

#define PAC1720_M_C2VDS			0x08 /* mask bit 3 */
	#define PAC1720_SET_C2VDS(R,V)	(R = (R & (PAC1720_M_C2VDS ^ 0xFF)) | ((V & 0x01) << 3))
	#define PAC1720_GET_C2VDS(R)	((R & PAC1720_M_C2VDS) >> 3)

#define PAC1720_M_TOUT			0x04 /* mask bit 2 */
	#define PAC1720_SET_TOUT(R,V)	(R = (R & (PAC1720_M_TOUT ^ 0xFF)) | ((V & 0x01) << 2))
	#define PAC1720_GET_TOUT(R)	((R & PAC1720_M_TOUT) >> 2)

#define PAC1720_M_C1IDS			0x02 /* mask bit 1 */
	#define PAC1720_SET_C1IDS(R,V)	(R = (R & (PAC1720_M_C1IDS ^ 0xFF)) | ((V & 0x01) << 1))
	#define PAC1720_GET_C1IDS(R)	((R & PAC1720_M_C1IDS) >> 1)

#define PAC1720_M_C1VDS			0x01 /* mask bit 0 */
	#define PAC1720_SET_C1VDS(R,V)	(R = (R & (PAC1720_M_C1VDS ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C1VDS(R)	(R & PAC1720_M_C1VDS)

/*
 * 6-2: Conversion Rate Register
 */
#define PAC1720_R_CONV			0x01

#define PAC1720_M_CONV			0x03 /* mask bits 1..0 */
	#define PAC1720_SET_CONV(R,V)	(R = (R & (PAC1720_M_CONV ^ 0xFF)) | (V & 0x03))
	#define PAC1720_GET_CONV(R)	(R & PAC1720_M_CONV)

/*
 * 6-3: One-Shot Register
 */
#define PAC1720_R_OS			0x02

#define PAC1720_M_OS			0xFF /* mask bits 7..0 */
	#define PAC1720_SET_OS(R,V)	(R = (R & (PAC1720_M_OS ^ 0xFF)) | (V & 0xFF))
	#define PAC1720_GET_OS(R)	(R & PAC1720_M_OS)

/*
 * 6-4: Channel Mask Register
 */
#define PAC1720_R_CHMSK			0x03

#define PAC1720_M_C2VS			0x08 /* mask bit 3 */
	#define PAC1720_SET_C2VS(R,V)	(R = (R & (PAC1720_M_C2VS ^ 0xFF)) | ((V & 0x01) << 3))
	#define PAC1720_GET_C2VS(R)	((R & PAC1720_M_C2VS) >> 3)

#define PAC1720_M_C2VSR			0x04 /* mask bit 2 */
	#define PAC1720_SET_C2VSR(R,V)	(R = (R & (PAC1720_M_C2VSR ^ 0xFF)) | ((V & 0x01) << 2))
	#define PAC1720_GET_C2VSR(R)	((R & PAC1720_M_C2VSR) >> 2)

#define PAC1720_M_C1VS			0x02 /* mask bit 1 */
	#define PAC1720_SET_C1VS(R,V)	(R = (R & (PAC1720_M_C1VS ^ 0xFF)) | ((V & 0x01) << 1))
	#define PAC1720_GET_C1VS(R)	((R & PAC1720_M_C1VS) >> 1)

#define PAC1720_M_C1VSR			0x01 /* mask bit 0 */
	#define PAC1720_SET_C1VSR(R,V)	(R = (R & (PAC1720_M_C1VSR ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C1VSR(R)	(R & PAC1720_M_C1VSR)

/*
 * 6-5: High-Limit Status Register
 */
#define PAC1720_R_HLSTAT		0x04

#define PAC1720_M_CVDN			0x80 /* mask bit 7 */
	#define PAC1720_SET_CVDN(R,V)	(R = (R & (PAC1720_M_CVDN ^ 0xFF)) | ((V & 0x01) << 7))
	#define PAC1720_GET_CVDN(R)	((R & PAC1720_M_CVDN) >> 7)

#define PAC1720_M_C2VSH			0x08 /* mask bit 3 */
	#define PAC1720_SET_C2VSH(R,V)	(R = (R & (PAC1720_M_C2VSH ^ 0xFF)) | ((V & 0x01) << 3))
	#define PAC1720_GET_C2VSH(R)	((R & PAC1720_M_C2VSH) >> 3)

#define PAC1720_M_C2VRH			0x04 /* mask bit 2 */
	#define PAC1720_SET_C2VRH(R,V)	(R = (R & (PAC1720_M_C2VRH ^ 0xFF)) | ((V & 0x01) << 2))
	#define PAC1720_GET_C2VRH(R)	((R & PAC1720_M_C2VRH) >> 2)

#define PAC1720_M_C1VSH			0x02 /* mask bit 1 */
	#define PAC1720_SET_C1VSH(R,V)	(R = (R & (PAC1720_M_C1VSH ^ 0xFF)) | ((V & 0x01) << 1))
	#define PAC1720_GET_C1VSH(R)	((R & PAC1720_M_C1VSH) >> 1)

#define PAC1720_M_C1VRH			0x01 /* mask bit 0 */
	#define PAC1720_SET_C1VRH(R,V)	(R = (R & (PAC1720_M_C1VRH ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C1VRH(R)	(R & PAC1720_M_C1VRH)

/*
 * 6-6: Low-Limit Status Register
 */
#define PAC1720_R_LLSTAT		0x05

#define PAC1720_M_C2VSL			0x08 /* mask bit 3 */
	#define PAC1720_SET_C2VSL(R,V)	(R = (R & (PAC1720_M_C2VSL ^ 0xFF)) | ((V & 0x01) << 3))
	#define PAC1720_GET_C2VSL(R)	((R & PAC1720_M_C2VSL) >> 3)

#define PAC1720_M_C2VRL			0x04 /* mask bit 2 */
	#define PAC1720_SET_C2VRL(R,V)	(R = (R & (PAC1720_M_C2VRL ^ 0xFF)) | ((V & 0x01) << 2))
	#define PAC1720_GET_C2VRL(R)	((R & PAC1720_M_C2VRL) >> 2)

#define PAC1720_M_C1VSL			0x02 /* mask bit 1 */
	#define PAC1720_SET_C1VSL(R,V)	(R = (R & (PAC1720_M_C1VSL ^ 0xFF)) | ((V & 0x01) << 1))
	#define PAC1720_GET_C1VSL(R)	((R & PAC1720_M_C1VSL) >> 1)

#define PAC1720_M_C1VRL			0x01 /* mask bit 0 */
	#define PAC1720_SET_C1VRL(R,V)	(R = (R & (PAC1720_M_C1VRL ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C1VRL(R)	(R & PAC1720_M_C1VRL)

/*
 * 6-7: VSOURCE Sampling Configuration Register
 */
#define PAC1720_R_VSRCCFG		0x0A

#define PAC1720_M_C2RS			0xC0 /* mask bits 7..6 */
	#define PAC1720_SET_C2RS(R,V)	(R = (R & (PAC1720_M_C2RS ^ 0xFF)) | ((V & 0x03) << 6))
	#define PAC1720_GET_C2RS(R)	((R & PAC1720_M_C2RS) >> 6)

#define PAC1720_M_C2RA			0x30 /* mask bits 5..4 */
	#define PAC1720_SET_C2RA(R,V)	(R = (R & (PAC1720_M_C2RA ^ 0xFF)) | ((V & 0x03) << 4))
	#define PAC1720_GET_C2RA(R)	((R & PAC1720_M_C2RA) >> 4)

#define PAC1720_M_C1RS			0x0C /* mask bits 3..2 */
	#define PAC1720_SET_C1RS(R,V)	(R = (R & (PAC1720_M_C1RS ^ 0xFF)) | ((V & 0x03) << 2))
	#define PAC1720_GET_C1RS(R,V)	((R & PAC1720_M_C1RS) >> 2)

#define PAC1720_M_C1RA			0x03 /* mask bits 1..0 */
	#define PAC1720_SET_C1RA(R,V)	(R = (R & (PAC1720_M_C1RA ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C1RA(R)	(R & PAC1720_M_C1RA)

/*
 * 6-8: Channel 1 VSENSE Sampling Configuration Register
 */
#define PAC1720_R_CH1SENSECFG		0x0B

#define PAC1720_M_C1CSS			0x70 /* mask bits 6..4 */
	#define PAC1720_SET_C1CSS(R,V)	(R = (R & (PAC1720_M_C1CSS ^ 0xFF)) | ((V & 0x07) << 4))
	#define PAC1720_GET_C1CSS(R)	((R & PAC1720_M_C1CSS) >> 4)

#define PAC1720_M_C1SA			0x0C /* mask bits 3..2 */
	#define PAC1720_SET_C1SA(R,V)	(R = (R & (PAC1720_M_C1SA ^ 0xFF)) | ((V & 0x03) << 2))
	#define PAC1720_GET_C1SA(R,V)	((R & PAC1720_M_C1SA) >> 2)

#define PAC1720_M_C1SR			0x03 /* mask bits 1..0 */
	#define PAC1720_SET_C1SR(R,V)	(R = (R & (PAC1720_M_C1SR ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C1SR(R)	(R & PAC1720_M_C1SR)

/*
 * 6-9: Channel 2 VSENSE Sampling Configuration Register
 */
#define PAC1720_R_CH2SENSECFG		0x0C

#define PAC1720_M_C2CSS			0x70 /* mask bits 6..4 */
	#define PAC1720_SET_C2CSS(R,V)	(R = (R & (PAC1720_M_C2CSS ^ 0xFF)) | ((V & 0x07) << 4))
	#define PAC1720_GET_C2CSS(R)	((R & PAC1720_M_C2CSS) >> 4)

#define PAC1720_M_C2SA			0x0C /* mask bits 3..2 */
	#define PAC1720_SET_C2SA(R,V)	(R = (R & (PAC1720_M_C2SA ^ 0xFF)) | ((V & 0x03) << 2))
	#define PAC1720_GET_C2SA(R,V)	((R & PAC1720_M_C2SA) >> 2)

#define PAC1720_M_C2SR			0x03 /* mask bits 1..0 */
	#define PAC1720_SET_C2SR(R,V)	(R = (R & (PAC1720_M_C2SR ^ 0xFF)) | (V & 0x01))
	#define PAC1720_GET_C2SR(R)	(R & PAC1720_M_C2SR)

/*
 * 6-10: Channel 1 VSENSE Result Register
 */
#define PAC1720_R_CH1SENSE		0x0D

/*
 * 6-11: Channel 2 VSENSE Result Register
 */
#define PAC1720_R_CH2SENSE		0x0F

/*
 * 6-12: Channel 1 VSOURCE Result Register
 */
#define PAC1720_R_CH1VSRC		0x11

/*
 * 6-13: Channel 2 VSOURCE Result Register
 */
#define PAC1720_R_CH2VSRC		0x13

/*
 * 6-14: Channel 1 Power Ratio Register
 */
#define PAC1720_R_CH1PWRRAT		0x15

/*
 * 6-15: Channel 2 Power Ratio Register
 */
#define PAC1720_R_CH2PWRRAT		0x17

/*
 * 6-16: Channel 1 VSENSE High-Limit Register
 */
#define PAC1720_R_CH1SENSEHL		0x19

/*
 * 6-17: Channel 2 VSENSE High-Limit Register
 */
#define PAC1720_R_CH2SENSEHL		0x1A

/*
 * 6-18: Channel 1 VSENSE Low-Limit Register
 */
#define PAC1720_R_CH1SENSELL		0x1B

/*
 * 6-19: Channel 2 VSENSE Low-Limit Register
 */
#define PAC1720_R_CH2SENSELL		0x1C

/*
 * 6-20: Channel 1 VSOURCE High-Limit Register
 */
#define PAC1720_R_CH1VSRCHL		0x1D

/*
 * 6-21: Channel 2 VSOURCE High-Limit Register
 */
#define PAC1720_R_CH2VSRCHL		0x1E

/*
 * 6-21: Channel 1 VSOURCE Low-Limit Register
 */
#define PAC1720_R_CH1VSRCLL		0x1F

/*
 * 6-21: Channel 2 VSOURCE Low-Limit Register
 */
#define PAC1720_R_CH2VSRCLL		0x20

/*
 * 6-24: Product ID Register
 */
#define PAC1720_R_PRODID		0xFD

/*
 * 6-25: MCHP ID Register
 */
#define PAC1720_R_MCHPID		0xFE

/*
 * 6-26: Revision Register
 */
#define PAC1720_R_REVISION		0xFF

#endif //_PAC1720_REGMAP_H
