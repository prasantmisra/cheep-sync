/*
* ----------------------------------------------------------------------------
* “THE COFFEEWARE LICENSE” (Revision 1):
* <ihsan@kehribar.me> wrote this file. As long as you retain this notice you
* can do whatever you want with this stuff. If we meet some day, and you think
* this stuff is worth it, you can buy me a coffee in return.
* -----------------------------------------------------------------------------
* This library is based on this library: 
*   https://github.com/aaronds/arduino-nrf24l01
* Which is based on this library: 
*   http://www.tinkerer.eu/AVRLib/nRF24L01
* -----------------------------------------------------------------------------
*/
#include "nrf24.h"
#include "iodefine.h"
#include "iodefine_ext.h"
#include "r_cg_serial.h"
#include "r_cg_macrodriver.h"





uint8_t payload_len;
static uint8_t data[128];
uint8_t tx1;
uint8_t readData[5];
uint8_t tx_address11[4] = {0x71,0x91,0x7D,0x6B};
uint8_t rx_address11[4] = {0x71,0x91,0x7D,0x6B};
static uint8_t data_array[40];
static int length_arr;
extern volatile uint8_t sent;
extern volatile uint8_t receive;
void nrf24_test_sender();
static int
nrf24_channel_clear(void)
{
	//These functions need to be implemented
	return 1;
}
/*---------------------------------------------------------------------------*/
static int
nrf24_receiving_packet(void)
{
  return 0;
}
/*---------------------------------------------------------------------------*/
static int
nrf24_pending_packet(void)
{
  return 0;
}
/*---------------------------------------------------------------------------*/
static int
nrf24_on(void)
{
  return 0;
}
/*---------------------------------------------------------------------------*/
static int
nrf24_off(void)
{
  return 0;
}



static int
nrf24_transmit(unsigned short transmit_len)
{
  return 1;
}
/* init the hardware pins */
void nrf24_init() 
{
    nrf24_setupPins();
    nrf24_ce_digitalWrite(LOW);
    nrf24_csn_digitalWrite(HIGH);
    nrf24_ce_digitalWrite(HIGH);
    nrf24_config(2,32);
    //nrf24_readRegister(CONFIG,&tx1,1);
    //tx1=0;
    //nrf24_configRegister(RF_CH,2);
    //nrf24_readRegister(EN_AA,&tx1,1);
    //tx1=0;
    nrf24_configRegister(RF_CH,2);
    nrf24_readRegister(RF_CH,&tx1,1);
    tx1=0;
    nrf24_readRegister(CONFIG,&tx1,1);
    tx1=0;
    nrf24_readRegister(RX_ADDR_P0,&readData,5);
    tx1=0;
    nrf24_readRegister(RF_SETUP,&tx1,1);
    tx1=0;
    nrf24_readRegister(TX_ADDR,&readData,5);
    tx1=0;
    nrf24_configRegister(SETUP_AW,2);
    //nrf24_readRegister(SETUP_AW,&tx1,1);
    //nrf24_configRegister(DYNPD,0x00);
    //nrf24_configRegister(FEATURE,0x00);
    //nrf24_tx_address(&tx_address11);
    //copy_paste();

//	nrf_cmd(0x20, 0x12);	//on, no crc, int on RX/TX done
//	nrf_cmd(0x21, 0x00);	//no auto-acknowledge
//	nrf_cmd(0x22, 0x00);	//no RX
//	nrf_cmd(0x23, 0x02);	//5-byte address
//	nrf_cmd(0x24, 0x00);	//no auto-retransmit
//	nrf_cmd(0x26, 0x06);	//1MBps at 0dBm
//	nrf_cmd(0x27, 0x3E);	//clear various flags
//	nrf_cmd(0x3C, 0x00);	//no dynamic payloads
//	nrf_cmd(0x3D, 0x00);	//no features
//	nrf_cmd(0x31, 32);	//always RX 32 bytes
//	nrf_cmd(0x22, 0x01);	//RX on pipe 0

}

	/* configure the module */
void nrf24_config(uint8_t channel, uint8_t pay_length)
{
    /* Use static payload length ... */
    payload_len = pay_length;
    //nrf24_activate_special();
    // Set RF channel
    nrf24_configRegister(RF_CH,channel);

    // Set length of incoming payload 
    nrf24_configRegister(RX_PW_P0, 32); // Auto-ACK pipe ...
    nrf24_configRegister(RX_PW_P1, 0x00); // Data payload pipe
    nrf24_configRegister(RX_PW_P2, 0x00); // Pipe not used 
    nrf24_configRegister(RX_PW_P3, 0x00); // Pipe not used 
    nrf24_configRegister(RX_PW_P4, 0x00); // Pipe not used 
    nrf24_configRegister(RX_PW_P5, 0x00); // Pipe not used 

    // 1 Mbps, TX gain: 0dbm
    nrf24_configRegister(RF_SETUP, 0x07);

    // CRC enable, 1 byte CRC length
    nrf24_configRegister(CONFIG,0x06);

    // Auto Acknowledgment
    nrf24_configRegister(EN_AA,0x00);

    // Enable RX addresses
    nrf24_configRegister(EN_RXADDR,(1<<ERX_P0)|(0<<ERX_P1)|(0<<ERX_P2)|(0<<ERX_P3)|(0<<ERX_P4)|(0<<ERX_P5));

    // Auto retransmit delay: 1000 us and Up to 15 retransmit trials
    nrf24_configRegister(SETUP_RETR,(0<<ARD)|(0<<ARC));
    nrf24_configRegister(SETUP_AW,2);

    // Dynamic length configurations: No dynamic length

    // Start listening

    //nrf24_configRegister(FEATURE,1<<EN_DPL);
    //nrf24_configRegister(DYNPD,(1<<DPL_P0)|(1<<DPL_P1)|(0<<DPL_P2)|(0<<DPL_P3)|(0<<DPL_P4)|(0<<DPL_P5));

    //nrf24_powerUpRx();
}

/* Set the RX address */
void nrf24_rx_address(uint8_t * adr) 
{
    nrf24_ce_digitalWrite(LOW);
    nrf24_writeRegister(RX_ADDR_P1,adr,nrf24_ADDR_LEN);
    nrf24_ce_digitalWrite(HIGH);
}


static int
nrf24_prepare(const void *payload, unsigned short payload_len)
{
	//This function is first called
	//For now lets assume that we transfer smaller byte chunks
	//And remove fragmentation
	int i=0;
	length_arr=payload_len;
	for(i=0;i<127;i++)
		{
			data[i]=0;
		}

	for(i=0;i<payload_len;i++)
	{
		data[i]=((uint8_t *)payload)[i];
	}
	asm("nop");
	nrf24_send(payload,payload_len);
	return 1;
}


/* Returns the payload length */
uint8_t nrf24_payload_length()
{
    return payload_len;
}

/* Set the TX address */
void nrf24_tx_address(uint8_t* adr)
{
    /* RX_ADDR_P0 must be set to the sending addr for auto ack to work. */
    nrf24_writeRegister(RX_ADDR_P0,rx_address11,nrf24_ADDR_LEN);
    nrf24_writeRegister(TX_ADDR,tx_address11,nrf24_ADDR_LEN);
}

/* Checks if data is available for reading */
/* Returns 1 if data is ready ... */
uint8_t nrf24_dataReady() 
{


	//Call the netstack RDC function and copy the packet buffer
	//attributes like in the other one

	// See note in getData() function - just checking RX_DR isn't good enough
    uint8_t status = nrf24_getStatus();

    // We can short circuit on RX_DR, but if it's not set, we still need
    // to check the FIFO for any pending packets
    if ( status & (1 << RX_DR) ) 
    {
        return 1;
    }

    return !nrf24_rxFifoEmpty();;
}

/* Checks if receive FIFO is empty or not */
uint8_t nrf24_rxFifoEmpty()
{
    uint8_t fifoStatus;

    nrf24_readRegister(FIFO_STATUS,&fifoStatus,1);
    
    return (fifoStatus & (1 << RX_EMPTY));
}

/* Returns the length of data waiting in the RX fifo */
uint8_t nrf24_payloadLength()
{
    uint8_t status;
    nrf24_csn_digitalWrite(LOW);
    spi_transfer(R_RX_PL_WID);
    status = spi_transfer(0x00);
    nrf24_csn_digitalWrite(HIGH);
    return status;
}

/* Reads payload bytes into data array */
void nrf24_getData(void *data,unsigned short buf_len)
{
    /* Pull down chip select */
    nrf24_csn_digitalWrite(LOW);                               

    /* Send cmd to read rx payload */
    spi_transfer(R_RX_PAYLOAD);
    
    /* Read payload */
    nrf24_transferSync(data,data,buf_len);
    
    /* Pull up chip select */
    nrf24_csn_digitalWrite(HIGH);

    /* Reset status register */
    nrf24_configRegister(STATUS,(1<<RX_DR));   
}

/* Returns the number of retransmissions occured for the last message */
uint8_t nrf24_retransmissionCount()
{
    uint8_t rv;
    nrf24_readRegister(OBSERVE_TX,&rv,1);
    rv = rv & 0x0F;
    return rv;
}



void tranfer_data()
{
	int payload_len1;
	payload_len1=nrf24_payloadLength();
	//THis function is called from the main loop
	//And tranfers the data into the RDC layer after setting up the packet buffers
	//packetbuf_clear();
	//nrf24_getData(packetbuf_dataptr(),payload_len1);
	//Handle fragmentation here later
	//Or maybe in some other layer
	//But for now just assume there is no fragmentation
	//Find an efficient way of doing it later
	//packetbuf_set_datalen(payload_len1);
	//NETSTACK_RDC.input();


}










// Sends a data package to the default address. Be sure to send the correct
// amount of bytes as configured as payload on the receiver.


void nrf24_send(const void *value, unsigned short payload_len)
{    

	//This is supposed to be modularisd and call prepare and transmit but for now we just do
	//everythung here
	/* Go to Standby-I first */
	int i=0;
	length_arr=payload_len;
	//payload_len=23;
	//nrf24_test_sender();
	//return;
	for(i=0;i<127;i++)
			{
				data[i]=0;
			}

		for(i=0;i<payload_len;i++)
		{
			data[i]=((uint8_t *)value)[i];
		}










    nrf24_ce_digitalWrite(LOW);
     
    /* Set to transmitter mode , Power up if needed */

    nrf24_powerUpTx();

    /* Do we really need to flush TX fifo each time ? */


    #if 1
        /* Pull down chip select */

        nrf24_csn_digitalWrite(LOW);

        /* Write cmd to flush transmit FIFO */
        spi_transfer(FLUSH_TX);

        /* Pull up chip select */
        nrf24_csn_digitalWrite(HIGH);




    #endif 

    /* Pull down chip select */
    nrf24_csn_digitalWrite(LOW);


    /* Write cmd to write payload */
    spi_transfer(W_TX_PAYLOAD);

    /* Write payload */
    nrf24_transmitSync(value,payload_len);


    /* Pull up chip select */
    nrf24_csn_digitalWrite(HIGH);

    /* Start the transmission */
    nrf24_ce_digitalWrite(HIGH);
   //while(true);
   //while(1);
    //while(1);
    while(nrf24_isSending());
    //nrf24_powerUpRx();



}





void nrf24_test_sender()
{
	int temp;
	data_array[0] = 0x00;
	data_array[1] = 0xAA;
	data_array[2] = 0x55;
	data_array[3] = 0x00;
	nrf24_ce_digitalWrite(LOW);
	/* Set to transmitter mode , Power up if needed */
	nrf24_powerUpTx();
	/* Do we really need to flush TX fifo each time ? */
#if 1
	/* Pull down chip select */
	nrf24_csn_digitalWrite(LOW);

	/* Write cmd to flush transmit FIFO */
	spi_transfer(FLUSH_TX);

	/* Pull up chip select */
	nrf24_csn_digitalWrite(HIGH);
#endif

	/* Pull down chip select */
	nrf24_csn_digitalWrite(LOW);

	/* Write cmd to write payload */
	spi_transfer(W_TX_PAYLOAD);

	/* Write payload */
	nrf24_transmitSync(data_array, 30);

	/* Pull up chip select */
	nrf24_csn_digitalWrite(HIGH);

	/* Start the transmission */
	nrf24_ce_digitalWrite(HIGH);
	/* Wait for transmission to end */

}







uint8_t nrf24_isSending()
{
    uint8_t status;

    /* read the current status */
    status = nrf24_getStatus();
                
    /* if sending successful (TX_DS) or max retries exceded (MAX_RT). */
    if((status & ((1 << TX_DS)  | (1 << MAX_RT))))
    {        
        asm("nop");
    	return 0; /* false */
    }

    return 1; /* true */

}

uint8_t nrf24_getStatus()
{
    uint8_t rv;
    nrf24_csn_digitalWrite(LOW);
    rv = spi_transfer(NOP_CUSTOM);
    nrf24_csn_digitalWrite(HIGH);
    return rv;
}

uint8_t nrf24_lastMessageStatus()
{
    uint8_t rv;

    rv = nrf24_getStatus();

    /* Transmission went OK */
    if((rv & ((1 << TX_DS))))
    {
        return NRF24_TRANSMISSON_OK;
    }
    /* Maximum retransmission count is reached */
    /* Last message probably went missing ... */
    else if((rv & ((1 << MAX_RT))))
    {
        return NRF24_MESSAGE_LOST;
    }  
    /* Probably still sending ... */
    else
    {
        return 0xFF;
    }
}

void nrf24_powerUpRx()
{     
    nrf24_csn_digitalWrite(LOW);
    spi_transfer(FLUSH_RX);
    nrf24_csn_digitalWrite(HIGH);

    nrf24_configRegister(STATUS,(1<<RX_DR)|(1<<TX_DS)|(1<<MAX_RT)); 

    nrf24_ce_digitalWrite(LOW);    
    nrf24_configRegister(CONFIG,nrf24_CONFIG|((1<<PWR_UP)|(1<<PRIM_RX)));    
    nrf24_ce_digitalWrite(HIGH);
}

void nrf24_powerUpTx()
{
    nrf24_configRegister(STATUS,(1<<RX_DR)|(0<<TX_DS)|(1<<MAX_RT));

    nrf24_configRegister(CONFIG,nrf24_CONFIG|((1<<PWR_UP)|(0<<PRIM_RX)));
}

void nrf24_powerDown()
{
    nrf24_ce_digitalWrite(LOW);
    nrf24_configRegister(CONFIG,nrf24_CONFIG);
}

/* software spi routine */
uint8_t spi_transfer(uint8_t tx)
{
uint8_t data;
uint8_t data_send=tx;
uint8_t len=1;
//R_CSI00_Send_Receive(&data_send,1u,&data);
R_CSI00_Send_Receive(&data_send,len,&data);
while(1)
{
	if(sent==1)
		break;
}
sent=0;

return data;

//    uint8_t i = 0;
//    uint8_t rx = 0;
//    //nrf24_sck_digitalWrite(LOW);
//    //We have a clock
//    //We simply write the data
//    asm("nop");
//    asm("nop");
//    //while ((SSR00 & _0040_SAU_UNDER_EXECUTE) != 0);
//    while(1)
//    {
//    	if(SSR00==0)
//    		break;
//    	else
//    		rx=SDR00;
//    }
//    SDR00=tx;
//    asm("nop");
//    asm("nop");
//    while ((SSR00 & _0040_SAU_UNDER_EXECUTE) != 0);
//    //SDR00=0;
//    rx=SDR00;
//    while(1)
//    {
//    	if(SSR00==0)
//    		break;
//    	else
//    		rx=SDR00;
//    }
//
//    return rx;


}

/* send and receive multiple bytes over SPI */
void nrf24_transferSync(uint8_t* dataout,uint8_t* datain,uint8_t len)
{
    uint8_t i;
    sent=0;
    R_CSI00_Send_Receive(dataout,len,datain);
    while(1)
    {
    	if(sent==1)
    		break;
    }
    sent=0;
//	uint8_t i;
//
//	    for(i=0;i<len;i++)
//	    {
//	        datain[i] = spi_transfer(0xff);
//	    }

}

/* send multiple bytes over SPI */
void nrf24_transmitSync(const void *dataout,uint8_t len)
{

    uint8_t i[len];
    sent=0;
    R_CSI00_Send_Receive(dataout,len,&i);
    while(1)
    {
    	if(sent==1)
    		break;
    }
    sent=0;
//    uint8_t i;
//
//    for(i=0;i<len;i++)
//    {
//        spi_transfer(((uint8_t *)(dataout))[i]);
//    }

}

/* Clocks only one byte into the given nrf24 register */
void nrf24_configRegister(uint8_t reg, uint8_t value)
{
    nrf24_csn_digitalWrite(LOW);
    spi_transfer(W_REGISTER | (REGISTER_MASK & reg));
    spi_transfer(value);
    nrf24_csn_digitalWrite(HIGH);
}


void nrf24_activate_special()
{
    nrf24_csn_digitalWrite(LOW);
    spi_transfer(ACTIVATE);
    spi_transfer(0x73);
    nrf24_csn_digitalWrite(HIGH);
}

/* Read single register from nrf24 */
void nrf24_readRegister(uint8_t reg, uint8_t* value, uint8_t len)
{
    nrf24_csn_digitalWrite(LOW);
    spi_transfer(R_REGISTER | (REGISTER_MASK & reg));
    //spi_transfer(reg);
    nrf24_transferSync(value,value,len);
    nrf24_csn_digitalWrite(HIGH);
}

/* Write to a single register of nrf24 */
void nrf24_writeRegister(uint8_t reg, uint8_t* value, uint8_t len) 
{
    nrf24_csn_digitalWrite(LOW);
    spi_transfer(W_REGISTER | (REGISTER_MASK & reg));
    nrf24_transmitSync(value,len);
    nrf24_csn_digitalWrite(HIGH);
}

void delay_loop(void) {
	unsigned int i;
	for (i = 50; i > 0; i--)
		;
}



void copy_paste()
{

	int temp;
	nrf24_config(2, 4);
	nrf24_tx_address(tx_address11);
	nrf24_rx_address(rx_address11);
	while (1) {
		//LED0 = LED_ON;

		//LED1 = LED_ON;
		//LED2 = LED_ON;
		//LED3 = LED_ON;
		//delay_loop1();
		//LED0 = LED_OFF;
		//LED1 = LED_OFF;
		//LED2 = LED_OFF;
		//LED3 = LED_OFF;
		//delay_loop1();
		//nrf24_tx_address((uint8_t*) (uartBuffer + 1));
		data_array[0] = 0x00;
		data_array[1] = 0xAA;
		data_array[2] = 0x55;
		data_array[3] = 0x22;
		/* Automatically goes to TX mode */
		nrf24_send(data_array,4);
		/* Wait for transmission to end */
		while (nrf24_isSending());
		/* Make analysis on last tranmission attempt */
		temp = nrf24_lastMessageStatus();
		if (temp == NRF24_TRANSMISSON_OK)
		{
			//Do something
		}
		else if (temp == NRF24_MESSAGE_LOST)
		{
			//Do something else
		}
		/* Retranmission count indicates the tranmission quality */
		/* Optionally, go back to RX mode ... */
		//nrf24_powerUpRx();
		/* Or you might want to power down after TX */
		// nrf24_powerDown();
		/* Wait a little ... */
		//_delay_ms(10);

	}


}

