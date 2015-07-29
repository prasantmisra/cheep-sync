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
* File Name    : r_cg_port.c
* Version      : Applilet3 for RL78/G14 V2.00.00.08 [12 Apr 2013]
* Device(s)    : R5F104AE
* Tool-Chain   : GCCRL78
* Description  : This file implements device driver for PORT module.
* Creation Date: 10/15/2013
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_port.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"
#define _FC_PMC0_DEFAULT        (0xFCU)
#define _FC_PM0_DEFAULT         (0xFCU)
/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_PORT_Create
* Description  : This function initializes the Port I/O.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_PORT_Create(void)
{
	 P0 = _00_Pn0_OUTPUT_0 | _00_Pn1_OUTPUT_0| _01_Pn0_OUTPUT_1;
	 PMC0 = _00_PMCn0_DI_ON | _00_PMCn1_DI_ON | _FC_PMC0_DEFAULT;
	 PM0 = _00_PMn0_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _FC_PM0_DEFAULT;
	 //PM1 = _00_PMn0_MODE_OUTPUT | _02_PMn1_NOT_USE | _04_PMn2_NOT_USE | _08_PMn3_NOT_USE | _10_PMn4_NOT_USE |
	       //   _20_PMn5_NOT_USE | _40_PMn6_NOT_USE | _80_PMn7_NOT_USE;
	 //Port 7
	 //COnnect our realy board
	//P7 = _00_Pn3_OUTPUT_0;
	//PM7 = _01_PMn0_NOT_USE | _02_PMn1_NOT_USE | _04_PMn2_NOT_USE
		//	| _00_PMn3_MODE_OUTPUT | _10_PMn4_NOT_USE |
		//	_20_PMn5_NOT_USE | _40_PMn6_NOT_USE | _80_PMn7_NOT_USE;

	    P2 = _01_Pn0_OUTPUT_1;
	    ADPC = _01_ADPC_DI_ON;
	    PM2 = _00_PMn0_MODE_OUTPUT | _02_PMn1_NOT_USE | _04_PMn2_NOT_USE | _08_PMn3_NOT_USE | _F0_PM2_DEFAULT;




}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
