
///******************************************************************************
//* DISCLAIMER
//* This software is supplied by Renesas Electronics Corporation and is only 
//* intended for use with Renesas products. No other uses are authorized. This 
//* software is owned by Renesas Electronics Corporation and is protected under 
//* all applicable laws, including copyright laws.
//* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING 
//* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT 
//* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE 
//* AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
//* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
//* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
//* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR 
//* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE 
//* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
//* Renesas reserves the right, without notice, to make changes to this software 
//* and to discontinue the availability of this software.  By using this software, 
//* you agree to the additional terms and conditions found by accessing the 
//* following link:
//* http://www.renesas.com/disclaimer
//*
//* Copyright (C) 2011, 2013 Renesas Electronics Corporation. All rights reserved.
//******************************************************************************/

///*
//*******************************************************************************
//* File Name    : iodefine_ext.h
//* Version      : Applilet3 for RL78/G14 V2.01.00.02 [09 Aug 2013]
//* Device(s)    : R5F104AE
//* Tool-Chain   : gccrl78
//* Description  : None
//* Creation Date: 2/9/2014
//*******************************************************************************
//*/

/************************************************************************/
/* Header file generated from device file:                              */
/*    DR5F104AE.DVF                                                     */
/*    Copyright(C) 2011 Renesas                                         */
/*    Version V1.20                                                     */
/************************************************************************/

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pu14 {
	unsigned char pu14;
	__BITS8 BIT;
};
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim5 {
	unsigned char pim5;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pom1 {
	unsigned char pom1;
	__BITS8 BIT;
};
union un_pom3 {
	unsigned char pom3;
	__BITS8 BIT;
};
union un_pom5 {
	unsigned char pom5;
	__BITS8 BIT;
};
union un_pmc0 {
	unsigned char pmc0;
	__BITS8 BIT;
};
union un_pmc12 {
	unsigned char pmc12;
	__BITS8 BIT;
};
union un_pmc14 {
	unsigned char pmc14;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_bectl {
	unsigned char bectl;
	__BITS8 BIT;
};
union un_fsse {
	unsigned char fsse;
	__BITS8 BIT;
};
union un_pfs {
	unsigned char pfs;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_rmc {
	unsigned char rmc;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_se1l {
	unsigned char se1l;
	__BITS8 BIT;
};
union un_ss1l {
	unsigned char ss1l;
	__BITS8 BIT;
};
union un_st1l {
	unsigned char st1l;
	__BITS8 BIT;
};
union un_soe1l {
	unsigned char soe1l;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_iicctl00 {
	unsigned char iicctl00;
	__BITS8 BIT;
};
union un_iicctl01 {
	unsigned char iicctl01;
	__BITS8 BIT;
};
union un_trjioc0 {
	unsigned char trjioc0;
	__BITS8 BIT;
};
union un_trjmr0 {
	unsigned char trjmr0;
	__BITS8 BIT;
};
union un_trjisr0 {
	unsigned char trjisr0;
	__BITS8 BIT;
};
union un_trgmr {
	unsigned char trgmr;
	__BITS8 BIT;
};
union un_trgcntc {
	unsigned char trgcntc;
	__BITS8 BIT;
};
union un_trgcr {
	unsigned char trgcr;
	__BITS8 BIT;
};
union un_trgier {
	unsigned char trgier;
	__BITS8 BIT;
};
union un_trgsr {
	unsigned char trgsr;
	__BITS8 BIT;
};
union un_trgior {
	unsigned char trgior;
	__BITS8 BIT;
};
union un_trdelc {
	unsigned char trdelc;
	__BITS8 BIT;
};
union un_trdmr {
	unsigned char trdmr;
	__BITS8 BIT;
};
union un_trdpmr {
	unsigned char trdpmr;
	__BITS8 BIT;
};
union un_trdfcr {
	unsigned char trdfcr;
	__BITS8 BIT;
};
union un_trdoer1 {
	unsigned char trdoer1;
	__BITS8 BIT;
};
union un_trdoer2 {
	unsigned char trdoer2;
	__BITS8 BIT;
};
union un_trdocr {
	unsigned char trdocr;
	__BITS8 BIT;
};
union un_trddf0 {
	unsigned char trddf0;
	__BITS8 BIT;
};
union un_trddf1 {
	unsigned char trddf1;
	__BITS8 BIT;
};
union un_trdcr0 {
	unsigned char trdcr0;
	__BITS8 BIT;
};
union un_trdiora0 {
	unsigned char trdiora0;
	__BITS8 BIT;
};
union un_trdiorc0 {
	unsigned char trdiorc0;
	__BITS8 BIT;
};
union un_trdsr0 {
	unsigned char trdsr0;
	__BITS8 BIT;
};
union un_trdier0 {
	unsigned char trdier0;
	__BITS8 BIT;
};
union un_trdpocr0 {
	unsigned char trdpocr0;
	__BITS8 BIT;
};
union un_trdcr1 {
	unsigned char trdcr1;
	__BITS8 BIT;
};
union un_trdiora1 {
	unsigned char trdiora1;
	__BITS8 BIT;
};
union un_trdiorc1 {
	unsigned char trdiorc1;
	__BITS8 BIT;
};
union un_trdsr1 {
	unsigned char trdsr1;
	__BITS8 BIT;
};
union un_trdier1 {
	unsigned char trdier1;
	__BITS8 BIT;
};
union un_trdpocr1 {
	unsigned char trdpocr1;
	__BITS8 BIT;
};
union un_dtcen0 {
	unsigned char dtcen0;
	__BITS8 BIT;
};
union un_dtcen1 {
	unsigned char dtcen1;
	__BITS8 BIT;
};
union un_dtcen2 {
	unsigned char dtcen2;
	__BITS8 BIT;
};
union un_dtcen3 {
	unsigned char dtcen3;
	__BITS8 BIT;
};
union un_dtcen4 {
	unsigned char dtcen4;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};
union un_elselr00 {
	unsigned char elselr00;
	__BITS8 BIT;
};
union un_elselr01 {
	unsigned char elselr01;
	__BITS8 BIT;
};
union un_elselr02 {
	unsigned char elselr02;
	__BITS8 BIT;
};
union un_elselr03 {
	unsigned char elselr03;
	__BITS8 BIT;
};
union un_elselr04 {
	unsigned char elselr04;
	__BITS8 BIT;
};
union un_elselr05 {
	unsigned char elselr05;
	__BITS8 BIT;
};
union un_elselr06 {
	unsigned char elselr06;
	__BITS8 BIT;
};
union un_elselr07 {
	unsigned char elselr07;
	__BITS8 BIT;
};
union un_elselr08 {
	unsigned char elselr08;
	__BITS8 BIT;
};
union un_elselr09 {
	unsigned char elselr09;
	__BITS8 BIT;
};
union un_elselr10 {
	unsigned char elselr10;
	__BITS8 BIT;
};
union un_elselr11 {
	unsigned char elselr11;
	__BITS8 BIT;
};
union un_elselr12 {
	unsigned char elselr12;
	__BITS8 BIT;
};
union un_elselr13 {
	unsigned char elselr13;
	__BITS8 BIT;
};
union un_elselr14 {
	unsigned char elselr14;
	__BITS8 BIT;
};
union un_elselr15 {
	unsigned char elselr15;
	__BITS8 BIT;
};
union un_elselr16 {
	unsigned char elselr16;
	__BITS8 BIT;
};
union un_elselr17 {
	unsigned char elselr17;
	__BITS8 BIT;
};
union un_elselr18 {
	unsigned char elselr18;
	__BITS8 BIT;
};
union un_elselr19 {
	unsigned char elselr19;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define PMC0 (*(volatile union un_pmc0 *)0xF0060).pmc0
#define PMC0_bit (*(volatile union un_pmc0 *)0xF0060).BIT
#define PMC12 (*(volatile union un_pmc12 *)0xF006C).pmc12
#define PMC12_bit (*(volatile union un_pmc12 *)0xF006C).BIT
#define PMC14 (*(volatile union un_pmc14 *)0xF006E).pmc14
#define PMC14_bit (*(volatile union un_pmc14 *)0xF006E).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define ADPC (*(volatile unsigned char *)0xF0076)
#define PIOR0 (*(volatile unsigned char *)0xF0077)
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define PIOR1 (*(volatile unsigned char *)0xF0079)
#define PER1 (*(volatile union un_per1 *)0xF007A).per1
#define PER1_bit (*(volatile union un_per1 *)0xF007A).BIT
#define PMS (*(volatile union un_pms *)0xF007B).pms
#define PMS_bit (*(volatile union un_pms *)0xF007B).BIT
#define PRDSEL (*(volatile unsigned short *)0xF007E)
#define TOOLEN (*(volatile unsigned char *)0xF0080)
#define BPAL0 (*(volatile unsigned char *)0xF0081)
#define BPAH0 (*(volatile unsigned char *)0xF0082)
#define BPAS0 (*(volatile unsigned char *)0xF0083)
#define BACDVL0 (*(volatile unsigned char *)0xF0084)
#define BACDVH0 (*(volatile unsigned char *)0xF0085)
#define BACDML0 (*(volatile unsigned char *)0xF0086)
#define BACDMH0 (*(volatile unsigned char *)0xF0087)
#define MONMOD (*(volatile unsigned char *)0xF0088)
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define BECTL (*(volatile union un_bectl *)0xF00A1).bectl
#define BECTL_bit (*(volatile union un_bectl *)0xF00A1).BIT
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define TEMPCAL0 (*(volatile unsigned char *)0xF00AC)
#define TEMPCAL1 (*(volatile unsigned char *)0xF00AD)
#define TEMPCAL2 (*(volatile unsigned char *)0xF00AE)
#define TEMPCAL3 (*(volatile unsigned char *)0xF00AF)
#define FLSEC (*(volatile unsigned short *)0xF00B0)
#define FLFSWS (*(volatile unsigned short *)0xF00B2)
#define FLFSWE (*(volatile unsigned short *)0xF00B4)
#define FSSET (*(volatile unsigned char *)0xF00B6)
#define FSSE (*(volatile union un_fsse *)0xF00B7).fsse
#define FSSE_bit (*(volatile union un_fsse *)0xF00B7).BIT
#define FLFADL (*(volatile unsigned short *)0xF00B8)
#define FLFADH (*(volatile unsigned char *)0xF00BA)
#define PFCMD (*(volatile unsigned char *)0xF00C0)
#define PFS (*(volatile union un_pfs *)0xF00C1).pfs
#define PFS_bit (*(volatile union un_pfs *)0xF00C1).BIT
#define FLRL (*(volatile unsigned short *)0xF00C2)
#define FLRH (*(volatile unsigned short *)0xF00C4)
#define FLWE (*(volatile unsigned char *)0xF00C6)
#define FLRE (*(volatile unsigned char *)0xF00C7)
#define FLTMS (*(volatile unsigned short *)0xF00C8)
#define DFLMC (*(volatile unsigned short *)0xF00CA)
#define FLMCL (*(volatile unsigned short *)0xF00CC)
#define FLMCH (*(volatile unsigned char *)0xF00CE)
#define FSCTL (*(volatile unsigned char *)0xF00CF)
#define ICEADR (*(volatile unsigned short *)0xF00D0)
#define ICEDAT (*(volatile unsigned short *)0xF00D2)
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define OSMC (*(volatile unsigned char *)0xF00F3)
#define RMC (*(volatile union un_rmc *)0xF00F4).rmc
#define RMC_bit (*(volatile union un_rmc *)0xF00F4).BIT
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define VECTCTRL (*(volatile unsigned char *)0xF00FF)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SSR02 (*(volatile unsigned short *)0xF0104)
#define SSR02L (*(volatile unsigned char *)0xF0104)
#define SSR03 (*(volatile unsigned short *)0xF0106)
#define SSR03L (*(volatile unsigned char *)0xF0106)
#define SIR00 (*(volatile unsigned short *)0xF0108)
#define SIR00L (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned short *)0xF010A)
#define SIR01L (*(volatile unsigned char *)0xF010A)
#define SIR02 (*(volatile unsigned short *)0xF010C)
#define SIR02L (*(volatile unsigned char *)0xF010C)
#define SIR03 (*(volatile unsigned short *)0xF010E)
#define SIR03L (*(volatile unsigned char *)0xF010E)
#define SMR00 (*(volatile unsigned short *)0xF0110)
#define SMR01 (*(volatile unsigned short *)0xF0112)
#define SMR02 (*(volatile unsigned short *)0xF0114)
#define SMR03 (*(volatile unsigned short *)0xF0116)
#define SCR00 (*(volatile unsigned short *)0xF0118)
#define SCR01 (*(volatile unsigned short *)0xF011A)
#define SCR02 (*(volatile unsigned short *)0xF011C)
#define SCR03 (*(volatile unsigned short *)0xF011E)
#define SE0 (*(volatile unsigned short *)0xF0120)
#define SE0L (*(volatile union un_se0l *)0xF0120).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0120).BIT
#define SS0 (*(volatile unsigned short *)0xF0122)
#define SS0L (*(volatile union un_ss0l *)0xF0122).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0122).BIT
#define ST0 (*(volatile unsigned short *)0xF0124)
#define ST0L (*(volatile union un_st0l *)0xF0124).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0124).BIT
#define SPS0 (*(volatile unsigned short *)0xF0126)
#define SPS0L (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned short *)0xF0128)
#define SOE0 (*(volatile unsigned short *)0xF012A)
#define SOE0L (*(volatile union un_soe0l *)0xF012A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF012A).BIT
#define EDR00 (*(volatile unsigned short *)0xF012C)
#define EDR00L (*(volatile unsigned char *)0xF012C)
#define EDR01 (*(volatile unsigned short *)0xF012E)
#define EDR01L (*(volatile unsigned char *)0xF012E)
#define EDR02 (*(volatile unsigned short *)0xF0130)
#define EDR02L (*(volatile unsigned char *)0xF0130)
#define EDR03 (*(volatile unsigned short *)0xF0132)
#define EDR03L (*(volatile unsigned char *)0xF0132)
#define SOL0 (*(volatile unsigned short *)0xF0134)
#define SOL0L (*(volatile unsigned char *)0xF0134)
#define SSC0 (*(volatile unsigned short *)0xF0138)
#define SSC0L (*(volatile unsigned char *)0xF0138)
#define SSR10 (*(volatile unsigned short *)0xF0140)
#define SSR10L (*(volatile unsigned char *)0xF0140)
#define SSR11 (*(volatile unsigned short *)0xF0142)
#define SSR11L (*(volatile unsigned char *)0xF0142)
#define SIR10 (*(volatile unsigned short *)0xF0148)
#define SIR10L (*(volatile unsigned char *)0xF0148)
#define SIR11 (*(volatile unsigned short *)0xF014A)
#define SIR11L (*(volatile unsigned char *)0xF014A)
#define SMR10 (*(volatile unsigned short *)0xF0150)
#define SMR11 (*(volatile unsigned short *)0xF0152)
#define SCR10 (*(volatile unsigned short *)0xF0158)
#define SCR11 (*(volatile unsigned short *)0xF015A)
#define SE1 (*(volatile unsigned short *)0xF0160)
#define SE1L (*(volatile union un_se1l *)0xF0160).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0160).BIT
#define SS1 (*(volatile unsigned short *)0xF0162)
#define SS1L (*(volatile union un_ss1l *)0xF0162).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0162).BIT
#define ST1 (*(volatile unsigned short *)0xF0164)
#define ST1L (*(volatile union un_st1l *)0xF0164).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0164).BIT
#define SPS1 (*(volatile unsigned short *)0xF0166)
#define SPS1L (*(volatile unsigned char *)0xF0166)
#define SO1 (*(volatile unsigned short *)0xF0168)
#define SOE1 (*(volatile unsigned short *)0xF016A)
#define SOE1L (*(volatile union un_soe1l *)0xF016A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF016A).BIT
#define EDR10 (*(volatile unsigned short *)0xF016C)
#define EDR10L (*(volatile unsigned char *)0xF016C)
#define EDR11 (*(volatile unsigned short *)0xF016E)
#define EDR11L (*(volatile unsigned char *)0xF016E)
#define SOL1 (*(volatile unsigned short *)0xF0174)
#define SOL1L (*(volatile unsigned char *)0xF0174)
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define IICSE0 (*(volatile unsigned char *)0xF0235)
#define TRJCR0 (*(volatile unsigned char *)0xF0240)
#define TRJIOC0 (*(volatile union un_trjioc0 *)0xF0241).trjioc0
#define TRJIOC0_bit (*(volatile union un_trjioc0 *)0xF0241).BIT
#define TRJMR0 (*(volatile union un_trjmr0 *)0xF0242).trjmr0
#define TRJMR0_bit (*(volatile union un_trjmr0 *)0xF0242).BIT
#define TRJISR0 (*(volatile union un_trjisr0 *)0xF0243).trjisr0
#define TRJISR0_bit (*(volatile union un_trjisr0 *)0xF0243).BIT
#define TRGMR (*(volatile union un_trgmr *)0xF0250).trgmr
#define TRGMR_bit (*(volatile union un_trgmr *)0xF0250).BIT
#define TRGCNTC (*(volatile union un_trgcntc *)0xF0251).trgcntc
#define TRGCNTC_bit (*(volatile union un_trgcntc *)0xF0251).BIT
#define TRGCR (*(volatile union un_trgcr *)0xF0252).trgcr
#define TRGCR_bit (*(volatile union un_trgcr *)0xF0252).BIT
#define TRGIER (*(volatile union un_trgier *)0xF0253).trgier
#define TRGIER_bit (*(volatile union un_trgier *)0xF0253).BIT
#define TRGSR (*(volatile union un_trgsr *)0xF0254).trgsr
#define TRGSR_bit (*(volatile union un_trgsr *)0xF0254).BIT
#define TRGIOR (*(volatile union un_trgior *)0xF0255).trgior
#define TRGIOR_bit (*(volatile union un_trgior *)0xF0255).BIT
#define TRG (*(volatile unsigned short *)0xF0256)
#define TRGGRA (*(volatile unsigned short *)0xF0258)
#define TRGGRB (*(volatile unsigned short *)0xF025A)
#define TRGGRCM (*(volatile unsigned short *)0xF025C)
#define TRGGRDM (*(volatile unsigned short *)0xF025E)
#define TRDELC (*(volatile union un_trdelc *)0xF0260).trdelc
#define TRDELC_bit (*(volatile union un_trdelc *)0xF0260).BIT
#define TRDSTR (*(volatile unsigned char *)0xF0263)
#define TRDMR (*(volatile union un_trdmr *)0xF0264).trdmr
#define TRDMR_bit (*(volatile union un_trdmr *)0xF0264).BIT
#define TRDPMR (*(volatile union un_trdpmr *)0xF0265).trdpmr
#define TRDPMR_bit (*(volatile union un_trdpmr *)0xF0265).BIT
#define TRDFCR (*(volatile union un_trdfcr *)0xF0266).trdfcr
#define TRDFCR_bit (*(volatile union un_trdfcr *)0xF0266).BIT
#define TRDOER1 (*(volatile union un_trdoer1 *)0xF0267).trdoer1
#define TRDOER1_bit (*(volatile union un_trdoer1 *)0xF0267).BIT
#define TRDOER2 (*(volatile union un_trdoer2 *)0xF0268).trdoer2
#define TRDOER2_bit (*(volatile union un_trdoer2 *)0xF0268).BIT
#define TRDOCR (*(volatile union un_trdocr *)0xF0269).trdocr
#define TRDOCR_bit (*(volatile union un_trdocr *)0xF0269).BIT
#define TRDDF0 (*(volatile union un_trddf0 *)0xF026A).trddf0
#define TRDDF0_bit (*(volatile union un_trddf0 *)0xF026A).BIT
#define TRDDF1 (*(volatile union un_trddf1 *)0xF026B).trddf1
#define TRDDF1_bit (*(volatile union un_trddf1 *)0xF026B).BIT
#define TRDCR0 (*(volatile union un_trdcr0 *)0xF0270).trdcr0
#define TRDCR0_bit (*(volatile union un_trdcr0 *)0xF0270).BIT
#define TRDIORA0 (*(volatile union un_trdiora0 *)0xF0271).trdiora0
#define TRDIORA0_bit (*(volatile union un_trdiora0 *)0xF0271).BIT
#define TRDIORC0 (*(volatile union un_trdiorc0 *)0xF0272).trdiorc0
#define TRDIORC0_bit (*(volatile union un_trdiorc0 *)0xF0272).BIT
#define TRDSR0 (*(volatile union un_trdsr0 *)0xF0273).trdsr0
#define TRDSR0_bit (*(volatile union un_trdsr0 *)0xF0273).BIT
#define TRDIER0 (*(volatile union un_trdier0 *)0xF0274).trdier0
#define TRDIER0_bit (*(volatile union un_trdier0 *)0xF0274).BIT
#define TRDPOCR0 (*(volatile union un_trdpocr0 *)0xF0275).trdpocr0
#define TRDPOCR0_bit (*(volatile union un_trdpocr0 *)0xF0275).BIT
#define TRD0 (*(volatile unsigned short *)0xF0276)
#define TRDGRA0 (*(volatile unsigned short *)0xF0278)
#define TRDGRB0 (*(volatile unsigned short *)0xF027A)
#define TRDGRC0M (*(volatile unsigned short *)0xF027C)
#define TRDGRD0M (*(volatile unsigned short *)0xF027E)
#define TRDCR1 (*(volatile union un_trdcr1 *)0xF0280).trdcr1
#define TRDCR1_bit (*(volatile union un_trdcr1 *)0xF0280).BIT
#define TRDIORA1 (*(volatile union un_trdiora1 *)0xF0281).trdiora1
#define TRDIORA1_bit (*(volatile union un_trdiora1 *)0xF0281).BIT
#define TRDIORC1 (*(volatile union un_trdiorc1 *)0xF0282).trdiorc1
#define TRDIORC1_bit (*(volatile union un_trdiorc1 *)0xF0282).BIT
#define TRDSR1 (*(volatile union un_trdsr1 *)0xF0283).trdsr1
#define TRDSR1_bit (*(volatile union un_trdsr1 *)0xF0283).BIT
#define TRDIER1 (*(volatile union un_trdier1 *)0xF0284).trdier1
#define TRDIER1_bit (*(volatile union un_trdier1 *)0xF0284).BIT
#define TRDPOCR1 (*(volatile union un_trdpocr1 *)0xF0285).trdpocr1
#define TRDPOCR1_bit (*(volatile union un_trdpocr1 *)0xF0285).BIT
#define TRD1 (*(volatile unsigned short *)0xF0286)
#define TRDGRA1 (*(volatile unsigned short *)0xF0288)
#define TRDGRB1 (*(volatile unsigned short *)0xF028A)
#define TRDGRC1M (*(volatile unsigned short *)0xF028C)
#define TRDGRD1M (*(volatile unsigned short *)0xF028E)
#define DTCBAR (*(volatile unsigned char *)0xF02E0)
#define DTCEN0 (*(volatile union un_dtcen0 *)0xF02E8).dtcen0
#define DTCEN0_bit (*(volatile union un_dtcen0 *)0xF02E8).BIT
#define DTCEN1 (*(volatile union un_dtcen1 *)0xF02E9).dtcen1
#define DTCEN1_bit (*(volatile union un_dtcen1 *)0xF02E9).BIT
#define DTCEN2 (*(volatile union un_dtcen2 *)0xF02EA).dtcen2
#define DTCEN2_bit (*(volatile union un_dtcen2 *)0xF02EA).BIT
#define DTCEN3 (*(volatile union un_dtcen3 *)0xF02EB).dtcen3
#define DTCEN3_bit (*(volatile union un_dtcen3 *)0xF02EB).BIT
#define DTCEN4 (*(volatile union un_dtcen4 *)0xF02EC).dtcen4
#define DTCEN4_bit (*(volatile union un_dtcen4 *)0xF02EC).BIT
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define ELSELR00 (*(volatile union un_elselr00 *)0xF0300).elselr00
#define ELSELR00_bit (*(volatile union un_elselr00 *)0xF0300).BIT
#define ELSELR01 (*(volatile union un_elselr01 *)0xF0301).elselr01
#define ELSELR01_bit (*(volatile union un_elselr01 *)0xF0301).BIT
#define ELSELR02 (*(volatile union un_elselr02 *)0xF0302).elselr02
#define ELSELR02_bit (*(volatile union un_elselr02 *)0xF0302).BIT
#define ELSELR03 (*(volatile union un_elselr03 *)0xF0303).elselr03
#define ELSELR03_bit (*(volatile union un_elselr03 *)0xF0303).BIT
#define ELSELR04 (*(volatile union un_elselr04 *)0xF0304).elselr04
#define ELSELR04_bit (*(volatile union un_elselr04 *)0xF0304).BIT
#define ELSELR05 (*(volatile union un_elselr05 *)0xF0305).elselr05
#define ELSELR05_bit (*(volatile union un_elselr05 *)0xF0305).BIT
#define ELSELR06 (*(volatile union un_elselr06 *)0xF0306).elselr06
#define ELSELR06_bit (*(volatile union un_elselr06 *)0xF0306).BIT
#define ELSELR07 (*(volatile union un_elselr07 *)0xF0307).elselr07
#define ELSELR07_bit (*(volatile union un_elselr07 *)0xF0307).BIT
#define ELSELR08 (*(volatile union un_elselr08 *)0xF0308).elselr08
#define ELSELR08_bit (*(volatile union un_elselr08 *)0xF0308).BIT
#define ELSELR09 (*(volatile union un_elselr09 *)0xF0309).elselr09
#define ELSELR09_bit (*(volatile union un_elselr09 *)0xF0309).BIT
#define ELSELR10 (*(volatile union un_elselr10 *)0xF030A).elselr10
#define ELSELR10_bit (*(volatile union un_elselr10 *)0xF030A).BIT
#define ELSELR11 (*(volatile union un_elselr11 *)0xF030B).elselr11
#define ELSELR11_bit (*(volatile union un_elselr11 *)0xF030B).BIT
#define ELSELR12 (*(volatile union un_elselr12 *)0xF030C).elselr12
#define ELSELR12_bit (*(volatile union un_elselr12 *)0xF030C).BIT
#define ELSELR13 (*(volatile union un_elselr13 *)0xF030D).elselr13
#define ELSELR13_bit (*(volatile union un_elselr13 *)0xF030D).BIT
#define ELSELR14 (*(volatile union un_elselr14 *)0xF030E).elselr14
#define ELSELR14_bit (*(volatile union un_elselr14 *)0xF030E).BIT
#define ELSELR15 (*(volatile union un_elselr15 *)0xF030F).elselr15
#define ELSELR15_bit (*(volatile union un_elselr15 *)0xF030F).BIT
#define ELSELR16 (*(volatile union un_elselr16 *)0xF0310).elselr16
#define ELSELR16_bit (*(volatile union un_elselr16 *)0xF0310).BIT
#define ELSELR17 (*(volatile union un_elselr17 *)0xF0311).elselr17
#define ELSELR17_bit (*(volatile union un_elselr17 *)0xF0311).BIT
#define ELSELR18 (*(volatile union un_elselr18 *)0xF0312).elselr18
#define ELSELR18_bit (*(volatile union un_elselr18 *)0xF0312).BIT
#define ELSELR19 (*(volatile union un_elselr19 *)0xF0313).elselr19
#define ELSELR19_bit (*(volatile union un_elselr19 *)0xF0313).BIT
#define TRJ0 (*(volatile unsigned short *)0xF0500)

/*
 Sfr bits
 */
#define ADTYP ADM2_bit.no0
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define SSIE00 ISC_bit.no7
#define TRJ0EN PER1_bit.no0
#define DTCEN PER1_bit.no3
#define TRD0EN PER1_bit.no4
#define TRGEN PER1_bit.no6
#define DFLEN DFLCTL_bit.no0
#define BRSAM BECTL_bit.no0
#define ESQST FSSE_bit.no7
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define RTCEN PER0_bit.no7
#define PAENB RMC_bit.no0
#define WDVOL RMC_bit.no7
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define SPT0 IICCTL00_bit.no0
#define STT0 IICCTL00_bit.no1
#define ACKE0 IICCTL00_bit.no2
#define WTIM0 IICCTL00_bit.no3
#define SPIE0 IICCTL00_bit.no4
#define WREL0 IICCTL00_bit.no5
#define LREL0 IICCTL00_bit.no6
#define IICE0 IICCTL00_bit.no7
#define PRS0 IICCTL01_bit.no0
#define DFC0 IICCTL01_bit.no2
#define SMC0 IICCTL01_bit.no3
#define DAD0 IICCTL01_bit.no4
#define CLD0 IICCTL01_bit.no5
#define WUP0 IICCTL01_bit.no7
#define TRGPWM TRGMR_bit.no0
#define TRGMDF TRGMR_bit.no1
#define TRGDFA TRGMR_bit.no2
#define TRGDFB TRGMR_bit.no3
#define TRGDFCK0 TRGMR_bit.no4
#define TRGDFCK1 TRGMR_bit.no5
#define TRGELCICE TRGMR_bit.no6
#define TRGSTART TRGMR_bit.no7
#define TRGTCK0 TRGCR_bit.no0
#define TRGTCK1 TRGCR_bit.no1
#define TRGTCK2 TRGCR_bit.no2
#define TRGCKEG0 TRGCR_bit.no3
#define TRGCKEG1 TRGCR_bit.no4
#define TRGCCLR0 TRGCR_bit.no5
#define TRGCCLR1 TRGCR_bit.no6
#define TRGIMIEA TRGIER_bit.no0
#define TRGIMIEB TRGIER_bit.no1
#define TRGUDIE TRGIER_bit.no2
#define TRGOVIE TRGIER_bit.no3
#define TRGIMFA TRGSR_bit.no0
#define TRGIMFB TRGSR_bit.no1
#define TRGUDF TRGSR_bit.no2
#define TRGOVF TRGSR_bit.no3
#define TRGDIRF TRGSR_bit.no4
#define TRGIOA0 TRGIOR_bit.no0
#define TRGIOA1 TRGIOR_bit.no1
#define TRGIOA2 TRGIOR_bit.no2
#define TRGBUFA TRGIOR_bit.no3
#define TRGIOB0 TRGIOR_bit.no4
#define TRGIOB1 TRGIOR_bit.no5
#define TRGIOB2 TRGIOR_bit.no6
#define TRGBUFB TRGIOR_bit.no7
#define TRDSYNC TRDMR_bit.no0
#define TRDBFC0 TRDMR_bit.no4
#define TRDBFD0 TRDMR_bit.no5
#define TRDBFC1 TRDMR_bit.no6
#define TRDBFD1 TRDMR_bit.no7
#define TRDPWMB0 TRDPMR_bit.no0
#define TRDPWMC0 TRDPMR_bit.no1
#define TRDPWMD0 TRDPMR_bit.no2
#define TRDPWMB1 TRDPMR_bit.no4
#define TRDPWMC1 TRDPMR_bit.no5
#define TRDPWMD1 TRDPMR_bit.no6
#define TRDSHUTS TRDOER2_bit.no0
#define TRDPTO TRDOER2_bit.no7
#define CRC0EN CRC0CTL_bit.no7

/*
 Interrupt vector addresses
 */
#endif
