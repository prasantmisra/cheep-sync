/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only 
* intended for use with Renesas products. No other uses are authorized. This 
* software is owned by Renesas Electronics Corporation and is protected under 
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING 
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT 
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE 
* AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR 
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE 
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software 
* and to discontinue the availability of this software.  By using this software, 
* you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2011, 2013 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_intc.h
* Version      : Applilet3 for RL78/G14 V2.01.00.02 [09 Aug 2013]
* Device(s)    : R5F104AE
* Tool-Chain   : GCCRL78
* Description  : This file implements device driver for INTC module.
* Creation Date: 6/17/2014
***********************************************************************************************************************/

#ifndef INTC_H
#define INTC_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/*
    External Interrupt Rising Edge Enable Register 0 (EGP0)
*/
/* INTPn pin valid edge selection (EGPn) */
#define _01_INTP0_EDGE_RISING_SEL       (0x01U)   /* rising edge selected for INTP0 pin */
#define _00_INTP0_EDGE_RISING_UNSEL     (0x00U)   /* rising edge not selected for INTP0 pin */
#define _02_INTP1_EDGE_RISING_SEL       (0x02U)   /* rising edge selected for INTP1 pin */
#define _00_INTP1_EDGE_RISING_UNSEL     (0x00U)   /* rising edge not selected for INTP1 pin*/
#define _04_INTP2_EDGE_RISING_SEL       (0x04U)   /* rising edge selected for INTP2 pin */
#define _00_INTP2_EDGE_RISING_UNSEL     (0x00U)   /* rising edge not selected for INTP2 pin */
#define _08_INTP3_EDGE_RISING_SEL       (0x08U)   /* rising edge selected for INTP3 pin */
#define _00_INTP3_EDGE_RISING_UNSEL     (0x00U)   /* rising edge not selected for INTP3 pin */
#define _10_INTP4_EDGE_RISING_SEL       (0x10U)   /* rising edge selected for INTP4 pin */
#define _00_INTP4_EDGE_RISING_UNSEL     (0x00U)   /* rising edge not selected for INTP4 pin */
#define _20_INTP5_EDGE_RISING_SEL       (0x20U)   /* rising edge selected for INTP5 pin */
#define _00_INTP5_EDGE_RISING_UNSEL     (0x00U)   /* rising edge not selected for INTP5 pin */

/*
    External Interrupt Falling Edge Enable Register 0 (EGN0)
*/
/* INTPn pin valid edge selection (EGNn) */
#define _01_INTP0_EDGE_FALLING_SEL      (0x01U)   /* falling edge selected for INTP0 pin */
#define _00_INTP0_EDGE_FALLING_UNSEL    (0x00U)   /* falling edge not selected for INTP0 pin */
#define _02_INTP1_EDGE_FALLING_SEL      (0x02U)   /* falling edge selected for INTP1 pin */
#define _00_INTP1_EDGE_FALLING_UNSEL    (0x00U)   /* falling edge not selected for INTP1 pin */
#define _04_INTP2_EDGE_FALLING_SEL      (0x04U)   /* falling edge selected for INTP2 pin */
#define _00_INTP2_EDGE_FALLING_UNSEL    (0x00U)   /* falling edge not selected for INTP2 pin */
#define _08_INTP3_EDGE_FALLING_SEL      (0x08U)   /* falling edge selected for INTP3 pin */
#define _00_INTP3_EDGE_FALLING_UNSEL    (0x00U)   /* falling edge not selected for INTP3 pin */
#define _10_INTP4_EDGE_FALLING_SEL      (0x10U)   /* falling edge selected for INTP4 pin */
#define _00_INTP4_EDGE_FALLING_UNSEL    (0x00U)   /* falling edge not selected for INTP4 pin */
#define _20_INTP5_EDGE_FALLING_SEL      (0x20U)   /* falling edge selected for INTP5 pin */
#define _00_INTP5_EDGE_FALLING_UNSEL    (0x00U)   /* falling edge not selected for INTP5 pin */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_INTC_Create(void);
void R_INTC0_Start(void);
void R_INTC0_Stop(void);

#endif
