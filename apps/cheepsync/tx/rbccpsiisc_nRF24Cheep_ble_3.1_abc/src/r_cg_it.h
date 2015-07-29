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
* File Name    : r_cg_it.h
* Version      : Applilet3 for RL78/G14 V2.01.00.02 [09 Aug 2013]
* Device(s)    : R5F104AE
* Tool-Chain   : GCCRL78
* Description  : This file implements device driver for IT module.
* Creation Date: 6/3/2014
***********************************************************************************************************************/

#ifndef IT_H
#define IT_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/* 
    Interval timer control register (ITMC)
*/
/* Interval timer operation enable/disable specification (RINTE) */
#define _0000_IT_OPERATION_DISABLE    (0x0000U)    /* disable interval timer operation */
#define _8000_IT_OPERATION_ENABLE     (0x8000U)    /* enable interval timer operation */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
/* Interval timer compare value (ITMCMP11 - 0) */
#define _05DB_ITMCMP_VALUE            (0x05DBU)
#define _0002_ITMCMP_VALUE            (0x0002U)
#define _000E_ITMCMP_VALUE            (0x000EU)

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_IT_Create(void);
void R_IT_Start(void);
void R_IT_Stop(void);

/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
