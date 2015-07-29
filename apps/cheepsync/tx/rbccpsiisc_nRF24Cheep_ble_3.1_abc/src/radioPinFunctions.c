/*
* ----------------------------------------------------------------------------
* “THE COFFEEWARE LICENSE” (Revision 1):
* <ihsan@kehribar.me> wrote this file. As long as you retain this notice you
* can do whatever you want with this stuff. If we meet some day, and you think
* this stuff is worth it, you can buy me a coffee in return.
* -----------------------------------------------------------------------------
* Please define your platform spesific functions in this file ...
* -----------------------------------------------------------------------------
*/
#include "r_cg_macrodriver.h"
#include "r_cg_port.h"
#include "r_cg_serial.h"

/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"


#define set_bit(reg,bit) reg |= (1<<bit)
#define clr_bit(reg,bit) reg &= ~(1<<bit)
#define check_bit(reg,bit) (reg&(1<<bit))

/* ------------------------------------------------------------------------- */
void nrf24_setupPins()
{
    P0_bit.no0=1; // CE output
    P0_bit.no1=1; // CSN output
    //Dont need these now
    //set_bit(DDRC,2); // SCK output
    //set_bit(DDRC,3); // MOSI output
    //clr_bit(DDRC,4); // MISO input
}
/* ------------------------------------------------------------------------- */
void nrf24_ce_digitalWrite(uint8_t state)
{
    if(state)
    {
    	P0_bit.no0=1;
    }
    else
    {
    	P0_bit.no0=0;
    }
}
/* ------------------------------------------------------------------------- */
void nrf24_csn_digitalWrite(uint8_t state)
{
	//We pull down the chip select or pull it up accordingly
	if(state)
    {
    	P0_bit.no1=1;
    }
    else
    {
    	P0_bit.no1=0;
    }
}
/* ------------------------------------------------------------------------- */
void nrf24_sck_digitalWrite(uint8_t state)
{
    if(state)
    {
        //SDR00=1;
    }
    else
    {
        //SDR00=0;
    }
}
/* ------------------------------------------------------------------------- */
void nrf24_mosi_digitalWrite(uint8_t state)
{
    //We dont really call this anywhere right now
	if(state)
    {
        //set_bit(PORTC,3);
    	SDR00=1;
    }
    else
    {
        //clr_bit(PORTC,3);
    	SDR00=0;
    }
}
/* ------------------------------------------------------------------------- */
uint8_t nrf24_miso_digitalRead()
{
    //We are supposed to check for success or failure here
	//BUt we will do that later
	//Right now lets just return 1
	//We dont really call this anywhere right now
	return SDR00;
}
/* ------------------------------------------------------------------------- */
