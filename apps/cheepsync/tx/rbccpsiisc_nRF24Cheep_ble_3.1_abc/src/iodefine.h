
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
//* File Name    : iodefine.h
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

#ifndef IODEFINE_H
#define IODEFINE_H

/*
 IO Registers
 */
union un_p0 {
	unsigned char p0;
	__BITS8 BIT;
};
union un_p1 {
	unsigned char p1;
	__BITS8 BIT;
};
union un_p2 {
	unsigned char p2;
	__BITS8 BIT;
};
union un_p3 {
	unsigned char p3;
	__BITS8 BIT;
};
union un_p4 {
	unsigned char p4;
	__BITS8 BIT;
};
union un_p5 {
	unsigned char p5;
	__BITS8 BIT;
};
union un_p6 {
	unsigned char p6;
	__BITS8 BIT;
};
union un_p12 {
	unsigned char p12;
	__BITS8 BIT;
};
union un_p13 {
	unsigned char p13;
	__BITS8 BIT;
};
union un_p14 {
	unsigned char p14;
	__BITS8 BIT;
};
union un_pm0 {
	unsigned char pm0;
	__BITS8 BIT;
};
union un_pm1 {
	unsigned char pm1;
	__BITS8 BIT;
};
union un_pm2 {
	unsigned char pm2;
	__BITS8 BIT;
};
union un_pm3 {
	unsigned char pm3;
	__BITS8 BIT;
};
union un_pm4 {
	unsigned char pm4;
	__BITS8 BIT;
};
union un_pm5 {
	unsigned char pm5;
	__BITS8 BIT;
};
union un_pm6 {
	unsigned char pm6;
	__BITS8 BIT;
};
union un_pm12 {
	unsigned char pm12;
	__BITS8 BIT;
};
union un_pm14 {
	unsigned char pm14;
	__BITS8 BIT;
};
union un_adm0 {
	unsigned char adm0;
	__BITS8 BIT;
};
union un_ads {
	unsigned char ads;
	__BITS8 BIT;
};
union un_adm1 {
	unsigned char adm1;
	__BITS8 BIT;
};
union un_egp0 {
	unsigned char egp0;
	__BITS8 BIT;
};
union un_egn0 {
	unsigned char egn0;
	__BITS8 BIT;
};
union un_iics0 {
	unsigned char iics0;
	__BITS8 BIT;
};
union un_iicf0 {
	unsigned char iicf0;
	__BITS8 BIT;
};
union un_flars {
	unsigned char flars;
	__BITS8 BIT;
};
union un_fssq {
	unsigned char fssq;
	__BITS8 BIT;
};
union un_flrst {
	unsigned char flrst;
	__BITS8 BIT;
};
union un_fsastl {
	unsigned char fsastl;
	__BITS8 BIT;
};
union un_fsasth {
	unsigned char fsasth;
	__BITS8 BIT;
};
union un_rtcc0 {
	unsigned char rtcc0;
	__BITS8 BIT;
};
union un_rtcc1 {
	unsigned char rtcc1;
	__BITS8 BIT;
};
union un_csc {
	unsigned char csc;
	__BITS8 BIT;
};
union un_ostc {
	unsigned char ostc;
	__BITS8 BIT;
};
union un_ckc {
	unsigned char ckc;
	__BITS8 BIT;
};
union un_cks0 {
	unsigned char cks0;
	__BITS8 BIT;
};
union un_cks1 {
	unsigned char cks1;
	__BITS8 BIT;
};
union un_lvim {
	unsigned char lvim;
	__BITS8 BIT;
};
union un_lvis {
	unsigned char lvis;
	__BITS8 BIT;
};
union un_monsta0 {
	unsigned char monsta0;
	__BITS8 BIT;
};
union un_asim {
	unsigned char asim;
	__BITS8 BIT;
};
union un_if2h {
	unsigned char if2h;
	__BITS8 BIT;
};
union un_mk2h {
	unsigned char mk2h;
	__BITS8 BIT;
};
union un_pr02h {
	unsigned char pr02h;
	__BITS8 BIT;
};
union un_pr12h {
	unsigned char pr12h;
	__BITS8 BIT;
};
union un_if0 {
	unsigned short if0;
	__BITS16 BIT;
};
union un_if0l {
	unsigned char if0l;
	__BITS8 BIT;
};
union un_if0h {
	unsigned char if0h;
	__BITS8 BIT;
};
union un_if1 {
	unsigned short if1;
	__BITS16 BIT;
};
union un_if1l {
	unsigned char if1l;
	__BITS8 BIT;
};
union un_if1h {
	unsigned char if1h;
	__BITS8 BIT;
};
union un_mk0 {
	unsigned short mk0;
	__BITS16 BIT;
};
union un_mk0l {
	unsigned char mk0l;
	__BITS8 BIT;
};
union un_mk0h {
	unsigned char mk0h;
	__BITS8 BIT;
};
union un_mk1 {
	unsigned short mk1;
	__BITS16 BIT;
};
union un_mk1l {
	unsigned char mk1l;
	__BITS8 BIT;
};
union un_mk1h {
	unsigned char mk1h;
	__BITS8 BIT;
};
union un_pr00 {
	unsigned short pr00;
	__BITS16 BIT;
};
union un_pr00l {
	unsigned char pr00l;
	__BITS8 BIT;
};
union un_pr00h {
	unsigned char pr00h;
	__BITS8 BIT;
};
union un_pr01 {
	unsigned short pr01;
	__BITS16 BIT;
};
union un_pr01l {
	unsigned char pr01l;
	__BITS8 BIT;
};
union un_pr01h {
	unsigned char pr01h;
	__BITS8 BIT;
};
union un_pr10 {
	unsigned short pr10;
	__BITS16 BIT;
};
union un_pr10l {
	unsigned char pr10l;
	__BITS8 BIT;
};
union un_pr10h {
	unsigned char pr10h;
	__BITS8 BIT;
};
union un_pr11 {
	unsigned short pr11;
	__BITS16 BIT;
};
union un_pr11l {
	unsigned char pr11l;
	__BITS8 BIT;
};
union un_pr11h {
	unsigned char pr11h;
	__BITS8 BIT;
};
union un_pmc {
	unsigned char pmc;
	__BITS8 BIT;
};

#define P0 (*(volatile union un_p0 *)0xFFF00).p0
#define P0_bit (*(volatile union un_p0 *)0xFFF00).BIT
#define P1 (*(volatile union un_p1 *)0xFFF01).p1
#define P1_bit (*(volatile union un_p1 *)0xFFF01).BIT
#define P2 (*(volatile union un_p2 *)0xFFF02).p2
#define P2_bit (*(volatile union un_p2 *)0xFFF02).BIT
#define P3 (*(volatile union un_p3 *)0xFFF03).p3
#define P3_bit (*(volatile union un_p3 *)0xFFF03).BIT
#define P4 (*(volatile union un_p4 *)0xFFF04).p4
#define P4_bit (*(volatile union un_p4 *)0xFFF04).BIT
#define P5 (*(volatile union un_p5 *)0xFFF05).p5
#define P5_bit (*(volatile union un_p5 *)0xFFF05).BIT
#define P6 (*(volatile union un_p6 *)0xFFF06).p6
#define P6_bit (*(volatile union un_p6 *)0xFFF06).BIT
#define P12 (*(volatile union un_p12 *)0xFFF0C).p12
#define P12_bit (*(volatile union un_p12 *)0xFFF0C).BIT
#define P13 (*(volatile union un_p13 *)0xFFF0D).p13
#define P13_bit (*(volatile union un_p13 *)0xFFF0D).BIT
#define P14 (*(volatile union un_p14 *)0xFFF0E).p14
#define P14_bit (*(volatile union un_p14 *)0xFFF0E).BIT
#define SDR00 (*(volatile unsigned short *)0xFFF10)
#define SIO00 (*(volatile unsigned char *)0xFFF10)
#define TXD0 (*(volatile unsigned char *)0xFFF10)
#define SDR01 (*(volatile unsigned short *)0xFFF12)
#define RXD0 (*(volatile unsigned char *)0xFFF12)
#define SIO01 (*(volatile unsigned char *)0xFFF12)
#define TDR00 (*(volatile unsigned short *)0xFFF18)
#define TDR01 (*(volatile unsigned short *)0xFFF1A)
#define TDR01L (*(volatile unsigned char *)0xFFF1A)
#define TDR01H (*(volatile unsigned char *)0xFFF1B)
#define ADCR (*(volatile unsigned short *)0xFFF1E)
#define ADCRH (*(volatile unsigned char *)0xFFF1F)
#define PM0 (*(volatile union un_pm0 *)0xFFF20).pm0
#define PM0_bit (*(volatile union un_pm0 *)0xFFF20).BIT
#define PM1 (*(volatile union un_pm1 *)0xFFF21).pm1
#define PM1_bit (*(volatile union un_pm1 *)0xFFF21).BIT
#define PM2 (*(volatile union un_pm2 *)0xFFF22).pm2
#define PM2_bit (*(volatile union un_pm2 *)0xFFF22).BIT
#define PM3 (*(volatile union un_pm3 *)0xFFF23).pm3
#define PM3_bit (*(volatile union un_pm3 *)0xFFF23).BIT
#define PM4 (*(volatile union un_pm4 *)0xFFF24).pm4
#define PM4_bit (*(volatile union un_pm4 *)0xFFF24).BIT
#define PM5 (*(volatile union un_pm5 *)0xFFF25).pm5
#define PM5_bit (*(volatile union un_pm5 *)0xFFF25).BIT
#define PM6 (*(volatile union un_pm6 *)0xFFF26).pm6
#define PM6_bit (*(volatile union un_pm6 *)0xFFF26).BIT
#define PM12 (*(volatile union un_pm12 *)0xFFF2C).pm12
#define PM12_bit (*(volatile union un_pm12 *)0xFFF2C).BIT
#define PM14 (*(volatile union un_pm14 *)0xFFF2E).pm14
#define PM14_bit (*(volatile union un_pm14 *)0xFFF2E).BIT
#define ADM0 (*(volatile union un_adm0 *)0xFFF30).adm0
#define ADM0_bit (*(volatile union un_adm0 *)0xFFF30).BIT
#define ADS (*(volatile union un_ads *)0xFFF31).ads
#define ADS_bit (*(volatile union un_ads *)0xFFF31).BIT
#define ADM1 (*(volatile union un_adm1 *)0xFFF32).adm1
#define ADM1_bit (*(volatile union un_adm1 *)0xFFF32).BIT
#define EGP0 (*(volatile union un_egp0 *)0xFFF38).egp0
#define EGP0_bit (*(volatile union un_egp0 *)0xFFF38).BIT
#define EGN0 (*(volatile union un_egn0 *)0xFFF39).egn0
#define EGN0_bit (*(volatile union un_egn0 *)0xFFF39).BIT
#define SDR02 (*(volatile unsigned short *)0xFFF44)
#define SIO10 (*(volatile unsigned char *)0xFFF44)
#define TXD1 (*(volatile unsigned char *)0xFFF44)
#define SDR03 (*(volatile unsigned short *)0xFFF46)
#define RXD1 (*(volatile unsigned char *)0xFFF46)
#define SIO11 (*(volatile unsigned char *)0xFFF46)
#define SDR10 (*(volatile unsigned short *)0xFFF48)
#define SIO20 (*(volatile unsigned char *)0xFFF48)
#define TXD2 (*(volatile unsigned char *)0xFFF48)
#define SDR11 (*(volatile unsigned short *)0xFFF4A)
#define RXD2 (*(volatile unsigned char *)0xFFF4A)
#define SIO21 (*(volatile unsigned char *)0xFFF4A)
#define IICA0 (*(volatile unsigned char *)0xFFF50)
#define IICS0 (*(volatile union un_iics0 *)0xFFF51).iics0
#define IICS0_bit (*(volatile union un_iics0 *)0xFFF51).BIT
#define IICF0 (*(volatile union un_iicf0 *)0xFFF52).iicf0
#define IICF0_bit (*(volatile union un_iicf0 *)0xFFF52).BIT
#define TRDGRC0 (*(volatile unsigned short *)0xFFF58)
#define TRDGRD0 (*(volatile unsigned short *)0xFFF5A)
#define TRDGRC1 (*(volatile unsigned short *)0xFFF5C)
#define TRDGRD1 (*(volatile unsigned short *)0xFFF5E)
#define TRGGRC (*(volatile unsigned short *)0xFFF60)
#define TRGGRD (*(volatile unsigned short *)0xFFF62)
#define TDR02 (*(volatile unsigned short *)0xFFF64)
#define TDR03 (*(volatile unsigned short *)0xFFF66)
#define TDR03L (*(volatile unsigned char *)0xFFF66)
#define TDR03H (*(volatile unsigned char *)0xFFF67)
#define FLPMC (*(volatile unsigned char *)0xFFF80)
#define FLARS (*(volatile union un_flars *)0xFFF81).flars
#define FLARS_bit (*(volatile union un_flars *)0xFFF81).BIT
#define FLAPL (*(volatile unsigned short *)0xFFF82)
#define FLAPH (*(volatile unsigned char *)0xFFF84)
#define FSSQ (*(volatile union un_fssq *)0xFFF85).fssq
#define FSSQ_bit (*(volatile union un_fssq *)0xFFF85).BIT
#define FLSEDL (*(volatile unsigned short *)0xFFF86)
#define FLSEDH (*(volatile unsigned char *)0xFFF88)
#define FLRST (*(volatile union un_flrst *)0xFFF89).flrst
#define FLRST_bit (*(volatile union un_flrst *)0xFFF89).BIT
#define FSASTL (*(volatile union un_fsastl *)0xFFF8A).fsastl
#define FSASTL_bit (*(volatile union un_fsastl *)0xFFF8A).BIT
#define FSASTH (*(volatile union un_fsasth *)0xFFF8B).fsasth
#define FSASTH_bit (*(volatile union un_fsasth *)0xFFF8B).BIT
#define FLWL (*(volatile unsigned short *)0xFFF8C)
#define FLWH (*(volatile unsigned short *)0xFFF8E)
#define ITMC (*(volatile unsigned short *)0xFFF90)
#define SEC (*(volatile unsigned char *)0xFFF92)
#define MIN (*(volatile unsigned char *)0xFFF93)
#define HOUR (*(volatile unsigned char *)0xFFF94)
#define WEEK (*(volatile unsigned char *)0xFFF95)
#define DAY (*(volatile unsigned char *)0xFFF96)
#define MONTH (*(volatile unsigned char *)0xFFF97)
#define YEAR (*(volatile unsigned char *)0xFFF98)
#define SUBCUD (*(volatile unsigned char *)0xFFF99)
#define ALARMWM (*(volatile unsigned char *)0xFFF9A)
#define ALARMWH (*(volatile unsigned char *)0xFFF9B)
#define ALARMWW (*(volatile unsigned char *)0xFFF9C)
#define RTCC0 (*(volatile union un_rtcc0 *)0xFFF9D).rtcc0
#define RTCC0_bit (*(volatile union un_rtcc0 *)0xFFF9D).BIT
#define RTCC1 (*(volatile union un_rtcc1 *)0xFFF9E).rtcc1
#define RTCC1_bit (*(volatile union un_rtcc1 *)0xFFF9E).BIT
#define CMC (*(volatile unsigned char *)0xFFFA0)
#define CSC (*(volatile union un_csc *)0xFFFA1).csc
#define CSC_bit (*(volatile union un_csc *)0xFFFA1).BIT
#define OSTC (*(volatile union un_ostc *)0xFFFA2).ostc
#define OSTC_bit (*(volatile union un_ostc *)0xFFFA2).BIT
#define OSTS (*(volatile unsigned char *)0xFFFA3)
#define CKC (*(volatile union un_ckc *)0xFFFA4).ckc
#define CKC_bit (*(volatile union un_ckc *)0xFFFA4).BIT
#define CKS0 (*(volatile union un_cks0 *)0xFFFA5).cks0
#define CKS0_bit (*(volatile union un_cks0 *)0xFFFA5).BIT
#define CKS1 (*(volatile union un_cks1 *)0xFFFA6).cks1
#define CKS1_bit (*(volatile union un_cks1 *)0xFFFA6).BIT
#define RESF (*(volatile unsigned char *)0xFFFA8)
#define LVIM (*(volatile union un_lvim *)0xFFFA9).lvim
#define LVIM_bit (*(volatile union un_lvim *)0xFFFA9).BIT
#define LVIS (*(volatile union un_lvis *)0xFFFAA).lvis
#define LVIS_bit (*(volatile union un_lvis *)0xFFFAA).BIT
#define WDTE (*(volatile unsigned char *)0xFFFAB)
#define CRCIN (*(volatile unsigned char *)0xFFFAC)
#define RXB (*(volatile unsigned char *)0xFFFAD)
#define TXS (*(volatile unsigned char *)0xFFFAD)
#define MONSTA0 (*(volatile union un_monsta0 *)0xFFFAE).monsta0
#define MONSTA0_bit (*(volatile union un_monsta0 *)0xFFFAE).BIT
#define ASIM (*(volatile union un_asim *)0xFFFAF).asim
#define ASIM_bit (*(volatile union un_asim *)0xFFFAF).BIT
#define IF2 (*(volatile unsigned short *)0xFFFD0)
#define IF2H (*(volatile union un_if2h *)0xFFFD1).if2h
#define IF2H_bit (*(volatile union un_if2h *)0xFFFD1).BIT
#define MK2 (*(volatile unsigned short *)0xFFFD4)
#define MK2H (*(volatile union un_mk2h *)0xFFFD5).mk2h
#define MK2H_bit (*(volatile union un_mk2h *)0xFFFD5).BIT
#define PR02 (*(volatile unsigned short *)0xFFFD8)
#define PR02H (*(volatile union un_pr02h *)0xFFFD9).pr02h
#define PR02H_bit (*(volatile union un_pr02h *)0xFFFD9).BIT
#define PR12 (*(volatile unsigned short *)0xFFFDC)
#define PR12H (*(volatile union un_pr12h *)0xFFFDD).pr12h
#define PR12H_bit (*(volatile union un_pr12h *)0xFFFDD).BIT
#define IF0 (*(volatile union un_if0 *)0xFFFE0).if0
#define IF0_bit (*(volatile union un_if0 *)0xFFFE0).BIT
#define IF0L (*(volatile union un_if0l *)0xFFFE0).if0l
#define IF0L_bit (*(volatile union un_if0l *)0xFFFE0).BIT
#define IF0H (*(volatile union un_if0h *)0xFFFE1).if0h
#define IF0H_bit (*(volatile union un_if0h *)0xFFFE1).BIT
#define IF1 (*(volatile union un_if1 *)0xFFFE2).if1
#define IF1_bit (*(volatile union un_if1 *)0xFFFE2).BIT
#define IF1L (*(volatile union un_if1l *)0xFFFE2).if1l
#define IF1L_bit (*(volatile union un_if1l *)0xFFFE2).BIT
#define IF1H (*(volatile union un_if1h *)0xFFFE3).if1h
#define IF1H_bit (*(volatile union un_if1h *)0xFFFE3).BIT
#define MK0 (*(volatile union un_mk0 *)0xFFFE4).mk0
#define MK0_bit (*(volatile union un_mk0 *)0xFFFE4).BIT
#define MK0L (*(volatile union un_mk0l *)0xFFFE4).mk0l
#define MK0L_bit (*(volatile union un_mk0l *)0xFFFE4).BIT
#define MK0H (*(volatile union un_mk0h *)0xFFFE5).mk0h
#define MK0H_bit (*(volatile union un_mk0h *)0xFFFE5).BIT
#define MK1 (*(volatile union un_mk1 *)0xFFFE6).mk1
#define MK1_bit (*(volatile union un_mk1 *)0xFFFE6).BIT
#define MK1L (*(volatile union un_mk1l *)0xFFFE6).mk1l
#define MK1L_bit (*(volatile union un_mk1l *)0xFFFE6).BIT
#define MK1H (*(volatile union un_mk1h *)0xFFFE7).mk1h
#define MK1H_bit (*(volatile union un_mk1h *)0xFFFE7).BIT
#define PR00 (*(volatile union un_pr00 *)0xFFFE8).pr00
#define PR00_bit (*(volatile union un_pr00 *)0xFFFE8).BIT
#define PR00L (*(volatile union un_pr00l *)0xFFFE8).pr00l
#define PR00L_bit (*(volatile union un_pr00l *)0xFFFE8).BIT
#define PR00H (*(volatile union un_pr00h *)0xFFFE9).pr00h
#define PR00H_bit (*(volatile union un_pr00h *)0xFFFE9).BIT
#define PR01 (*(volatile union un_pr01 *)0xFFFEA).pr01
#define PR01_bit (*(volatile union un_pr01 *)0xFFFEA).BIT
#define PR01L (*(volatile union un_pr01l *)0xFFFEA).pr01l
#define PR01L_bit (*(volatile union un_pr01l *)0xFFFEA).BIT
#define PR01H (*(volatile union un_pr01h *)0xFFFEB).pr01h
#define PR01H_bit (*(volatile union un_pr01h *)0xFFFEB).BIT
#define PR10 (*(volatile union un_pr10 *)0xFFFEC).pr10
#define PR10_bit (*(volatile union un_pr10 *)0xFFFEC).BIT
#define PR10L (*(volatile union un_pr10l *)0xFFFEC).pr10l
#define PR10L_bit (*(volatile union un_pr10l *)0xFFFEC).BIT
#define PR10H (*(volatile union un_pr10h *)0xFFFED).pr10h
#define PR10H_bit (*(volatile union un_pr10h *)0xFFFED).BIT
#define PR11 (*(volatile union un_pr11 *)0xFFFEE).pr11
#define PR11_bit (*(volatile union un_pr11 *)0xFFFEE).BIT
#define PR11L (*(volatile union un_pr11l *)0xFFFEE).pr11l
#define PR11L_bit (*(volatile union un_pr11l *)0xFFFEE).BIT
#define PR11H (*(volatile union un_pr11h *)0xFFFEF).pr11h
#define PR11H_bit (*(volatile union un_pr11h *)0xFFFEF).BIT
#define MACRL (*(volatile unsigned short *)0xFFFF0)
#define MACRH (*(volatile unsigned short *)0xFFFF2)
#define MDUC (*(volatile unsigned char *)0xFFFFB)
#define PMC (*(volatile union un_pmc *)0xFFFFE).pmc
#define PMC_bit (*(volatile union un_pmc *)0xFFFFE).BIT

/*
 Sfr bits
 */
#define ADCE ADM0_bit.no0
#define ADCS ADM0_bit.no7
#define SPD0 IICS0_bit.no0
#define STD0 IICS0_bit.no1
#define ACKD0 IICS0_bit.no2
#define TRC0 IICS0_bit.no3
#define COI0 IICS0_bit.no4
#define EXC0 IICS0_bit.no5
#define ALD0 IICS0_bit.no6
#define MSTS0 IICS0_bit.no7
#define IICRSV0 IICF0_bit.no0
#define STCEN0 IICF0_bit.no1
#define IICBSY0 IICF0_bit.no6
#define STCF0 IICF0_bit.no7
#define FSSTP FSSQ_bit.no6
#define SQST FSSQ_bit.no7
#define SQEND FSASTH_bit.no6
#define ESQEND FSASTH_bit.no7
#define RTCE RTCC0_bit.no7
#define RWAIT RTCC1_bit.no0
#define RWST RTCC1_bit.no1
#define RIFG RTCC1_bit.no3
#define WAFG RTCC1_bit.no4
#define WALIE RTCC1_bit.no6
#define WALE RTCC1_bit.no7
#define HIOSTOP CSC_bit.no0
#define XTSTOP CSC_bit.no6
#define MSTOP CSC_bit.no7
#define SDIV CKC_bit.no3
#define MCM0 CKC_bit.no4
#define MCS CKC_bit.no5
#define CSS CKC_bit.no6
#define CLS CKC_bit.no7
#define PCLOE0 CKS0_bit.no7
#define PCLOE1 CKS1_bit.no7
#define LVIF LVIM_bit.no0
#define LVIOMSK LVIM_bit.no1
#define LVISEN LVIM_bit.no7
#define LVILV LVIS_bit.no0
#define LVIMD LVIS_bit.no7
#define TRDIF0 IF2H_bit.no1
#define TRDIF1 IF2H_bit.no2
#define TRGIF IF2H_bit.no3
#define FLIF IF2H_bit.no7
#define TRDMK0 MK2H_bit.no1
#define TRDMK1 MK2H_bit.no2
#define TRGMK MK2H_bit.no3
#define FLMK MK2H_bit.no7
#define TRDPR00 PR02H_bit.no1
#define TRDPR01 PR02H_bit.no2
#define TRGPR0 PR02H_bit.no3
#define FLPR0 PR02H_bit.no7
#define TRDPR10 PR12H_bit.no1
#define TRDPR11 PR12H_bit.no2
#define TRGPR1 PR12H_bit.no3
#define FLPR1 PR12H_bit.no7
#define SROIF IF0_bit.no0
#define WDTIIF IF0_bit.no0
#define LVIIF IF0_bit.no1
#define PIF0 IF0_bit.no2
#define PIF1 IF0_bit.no3
#define PIF2 IF0_bit.no4
#define PIF3 IF0_bit.no5
#define PIF4 IF0_bit.no6
#define PIF5 IF0_bit.no7
#define CSIIF20 IF0H_bit.no0
#define IICIF20 IF0H_bit.no0
#define STIF2 IF0H_bit.no0
#define SRIF2 IF0H_bit.no1
#define SREIF2 IF0H_bit.no2
#define CSIIF00 IF0H_bit.no5
#define IICIF00 IF0H_bit.no5
#define STIF0 IF0H_bit.no5
#define SRIF0 IF0H_bit.no6
#define SREIF0 IF0H_bit.no7
#define TMIF01H IF0H_bit.no7
#define STIF1 IF1_bit.no0
#define CSIIF11 IF1_bit.no1
#define IICIF11 IF1_bit.no1
#define SRIF1 IF1_bit.no1
#define SREIF1 IF1_bit.no2
#define TMIF03H IF1_bit.no2
#define IICAIF0 IF1_bit.no3
#define TMIF00 IF1_bit.no4
#define TMIF01 IF1_bit.no5
#define TMIF02 IF1_bit.no6
#define TMIF03 IF1_bit.no7
#define ADIF IF1H_bit.no0
#define RTCIF IF1H_bit.no1
#define ITIF IF1H_bit.no2
#define TRJIF0 IF1H_bit.no6
#define SROMK MK0_bit.no0
#define WDTIMK MK0_bit.no0
#define LVIMK MK0_bit.no1
#define PMK0 MK0_bit.no2
#define PMK1 MK0_bit.no3
#define PMK2 MK0_bit.no4
#define PMK3 MK0_bit.no5
#define PMK4 MK0_bit.no6
#define PMK5 MK0_bit.no7
#define CSIMK20 MK0H_bit.no0
#define IICMK20 MK0H_bit.no0
#define STMK2 MK0H_bit.no0
#define SRMK2 MK0H_bit.no1
#define SREMK2 MK0H_bit.no2
#define CSIMK00 MK0H_bit.no5
#define IICMK00 MK0H_bit.no5
#define STMK0 MK0H_bit.no5
#define SRMK0 MK0H_bit.no6
#define SREMK0 MK0H_bit.no7
#define TMMK01H MK0H_bit.no7
#define STMK1 MK1_bit.no0
#define CSIMK11 MK1_bit.no1
#define IICMK11 MK1_bit.no1
#define SRMK1 MK1_bit.no1
#define SREMK1 MK1_bit.no2
#define TMMK03H MK1_bit.no2
#define IICAMK0 MK1_bit.no3
#define TMMK00 MK1_bit.no4
#define TMMK01 MK1_bit.no5
#define TMMK02 MK1_bit.no6
#define TMMK03 MK1_bit.no7
#define ADMK MK1H_bit.no0
#define RTCMK MK1H_bit.no1
#define ITMK MK1H_bit.no2
#define TRJMK0 MK1H_bit.no6
#define SROPR0 PR00_bit.no0
#define WDTIPR0 PR00_bit.no0
#define LVIPR0 PR00_bit.no1
#define PPR00 PR00_bit.no2
#define PPR01 PR00_bit.no3
#define PPR02 PR00_bit.no4
#define PPR03 PR00_bit.no5
#define PPR04 PR00_bit.no6
#define PPR05 PR00_bit.no7
#define CSIPR020 PR00H_bit.no0
#define IICPR020 PR00H_bit.no0
#define STPR02 PR00H_bit.no0
#define SRPR02 PR00H_bit.no1
#define SREPR02 PR00H_bit.no2
#define CSIPR000 PR00H_bit.no5
#define IICPR000 PR00H_bit.no5
#define STPR00 PR00H_bit.no5
#define SRPR00 PR00H_bit.no6
#define SREPR00 PR00H_bit.no7
#define TMPR001H PR00H_bit.no7
#define STPR01 PR01_bit.no0
#define CSIPR011 PR01_bit.no1
#define IICPR011 PR01_bit.no1
#define SRPR01 PR01_bit.no1
#define SREPR01 PR01_bit.no2
#define TMPR003H PR01_bit.no2
#define IICAPR00 PR01_bit.no3
#define TMPR000 PR01_bit.no4
#define TMPR001 PR01_bit.no5
#define TMPR002 PR01_bit.no6
#define TMPR003 PR01_bit.no7
#define ADPR0 PR01H_bit.no0
#define RTCPR0 PR01H_bit.no1
#define ITPR0 PR01H_bit.no2
#define TRJPR00 PR01H_bit.no6
#define SROPR1 PR10_bit.no0
#define WDTIPR1 PR10_bit.no0
#define LVIPR1 PR10_bit.no1
#define PPR10 PR10_bit.no2
#define PPR11 PR10_bit.no3
#define PPR12 PR10_bit.no4
#define PPR13 PR10_bit.no5
#define PPR14 PR10_bit.no6
#define PPR15 PR10_bit.no7
#define CSIPR120 PR10H_bit.no0
#define IICPR120 PR10H_bit.no0
#define STPR12 PR10H_bit.no0
#define SRPR12 PR10H_bit.no1
#define SREPR12 PR10H_bit.no2
#define CSIPR100 PR10H_bit.no5
#define IICPR100 PR10H_bit.no5
#define STPR10 PR10H_bit.no5
#define SRPR10 PR10H_bit.no6
#define SREPR10 PR10H_bit.no7
#define TMPR101H PR10H_bit.no7
#define STPR11 PR11_bit.no0
#define CSIPR111 PR11_bit.no1
#define IICPR111 PR11_bit.no1
#define SRPR11 PR11_bit.no1
#define SREPR11 PR11_bit.no2
#define TMPR103H PR11_bit.no2
#define IICAPR10 PR11_bit.no3
#define TMPR100 PR11_bit.no4
#define TMPR101 PR11_bit.no5
#define TMPR102 PR11_bit.no6
#define TMPR103 PR11_bit.no7
#define ADPR1 PR11H_bit.no0
#define RTCPR1 PR11H_bit.no1
#define ITPR1 PR11H_bit.no2
#define TRJPR10 PR11H_bit.no6
#define MAA PMC_bit.no0

/*
 Interrupt vector addresses
 */
#define RST_vect (0x0)
#define INTDBG_vect (0x2)
#define INTSRO_vect (0x4)
#define INTWDTI_vect (0x4)
#define INTLVI_vect (0x6)
#define INTP0_vect (0x8)
#define INTP1_vect (0xA)
#define INTP2_vect (0xC)
#define INTP3_vect (0xE)
#define INTP4_vect (0x10)
#define INTP5_vect (0x12)
#define INTCSI20_vect (0x14)
#define INTIIC20_vect (0x14)
#define INTST2_vect (0x14)
#define INTSR2_vect (0x16)
#define INTSRE2_vect (0x18)
#define INTCSI00_vect (0x1E)
#define INTIIC00_vect (0x1E)
#define INTST0_vect (0x1E)
#define INTSR0_vect (0x20)
#define INTSRE0_vect (0x22)
#define INTTM01H_vect (0x22)
#define INTST1_vect (0x24)
#define INTCSI11_vect (0x26)
#define INTIIC11_vect (0x26)
#define INTSR1_vect (0x26)
#define INTSRE1_vect (0x28)
#define INTTM03H_vect (0x28)
#define INTIICA0_vect (0x2A)
#define INTTM00_vect (0x2C)
#define INTTM01_vect (0x2E)
#define INTTM02_vect (0x30)
#define INTTM03_vect (0x32)
#define INTAD_vect (0x34)
#define INTRTC_vect (0x36)
#define INTIT_vect (0x38)
#define INTTRJ0_vect (0x40)
#define INTTRD0_vect (0x56)
#define INTTRD1_vect (0x58)
#define INTTRG_vect (0x5A)
#define INTFL_vect (0x62)
#define BRK_I_vect (0x7E)
#endif