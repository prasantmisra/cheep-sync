/*
 * Copyright (c) [2015] [Robert Bosch Centre for Cyber Physical Systems, 
                         Indian Institute of Science, Bangalore]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *	1. Redistributions of source code must retain the above copyright notice, 
           this list of conditions and the following disclaimer.
 *	2. Redistributions in binary form must reproduce the above copyright notice, 
           this list of conditions and the following disclaimer in the documentation 
           and/or other materials provided with the distribution.
 *	3. Neither the name of the copyright holder nor the names of its contributors 
           may be used to endorse or promote products derived from this software without 
           specific prior written permission.
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 */
/*
 * Based off : http://dmitry.gr/index.php?r=05.Projects&proj=11.%20Bluetooth%20LE%20fakery
 */

#include "nrf24.h"
#include "r_cg_macrodriver.h"
#include "stdio.h"

#define PIN_CE	8 //Output
#define PIN_nCS	7 //Output

#define MY_MAC_0	0xEF
#define MY_MAC_1	0xFF
#define MY_MAC_2	0xC0
#define MY_MAC_3	0xAA
#define MY_MAC_4	0x18
#define MY_MAC_5	0x08

extern volatile uint8_t sent;
extern volatile uint32_t time_data;
volatile uint32_t prev_time_data=0;
volatile uint32_t send_prev_spi_time=0;
extern volatile uint8_t transmit_time;

public class RBCCPS_Cleanhands_Zoo_ICU_Map extends Activity {

	ImageView ipslocation;
	TextView logTextView;
	TextView cylinderTextView;
	static String beaconName;
	static int RSSI;
	static long timeStamp;
	static boolean flag = false;

volatile uint8_t time_stamp[3];

static inline void putsample(uint32_t sample)
{
    time_stamp[0]=sample;
    time_stamp[1]=sample>>8;
    time_stamp[2]=sample>>16;
}

void btLeCrc(const uint8_t* data, uint8_t len, uint8_t* dst){

	uint8_t v, t, d;

	while(len--){
	
		d = *data++;
		for(v = 0; v < 8; v++, d >>= 1){
		
			t = dst[0] >> 7;
			
			dst[0] <<= 1;
			if(dst[1] & 0x80) dst[0] |= 1;
			dst[1] <<= 1;
			if(dst[2] & 0x80) dst[1] |= 1;
			dst[2] <<= 1;
			
		
			if(t != (d & 1)){
			
				dst[2] ^= 0x5B;
				dst[1] ^= 0x06;
			}
		}	
	}
}

uint8_t  swapbits(uint8_t a){

	uint8_t v = 0;
	
	if(a & 0x80) v |= 0x01;
	if(a & 0x40) v |= 0x02;
	if(a & 0x20) v |= 0x04;
	if(a & 0x10) v |= 0x08;
	if(a & 0x08) v |= 0x10;
	if(a & 0x04) v |= 0x20;
	if(a & 0x02) v |= 0x40;
	if(a & 0x01) v |= 0x80;

	return v;
}

void btLeWhiten(uint8_t* data, uint8_t len, uint8_t whitenCoeff){
public class RBCCPS_Cleanhands_Zoo_ICU_Map extends Activity {

	ImageView ipslocation;
	TextView logTextView;
	TextView cylinderTextView;
	static String beaconName;
	static int RSSI;
	static long timeStamp;
	static boolean flag = false;
	uint8_t  m;
	
	while(len--){
	
		for(m = 1; m; m <<= 1){
		
			if(whitenCoeff & 0x80){
				
				whitenCoeff ^= 0x11;
				(*data) ^= m;
			}
			whitenCoeff <<= 1;
		}
		data++;
	}
}

static inline uint8_t btLeWhitenStart(uint8_t chan){
	//the value we actually use is what BT'd use left shifted one...makes our life easier
	return swapbits(chan) | 2;	
}

void btLePacketEncode(uint8_t* packet, uint8_t len, uint8_t chan){
	//length is of packet, including crc. pre-populate crc in packet with initial crc value!
	uint8_t i, dataLen = len - 3;
	
	btLeCrc(packet, dataLen, packet + dataLen);
	for(i = 0; i < 3; i++, dataLen++) packet[dataLen] = swapbits(packet[dataLen]);
	btLeWhiten(packet, len, btLeWhitenStart(chan));
	for(i = 0; i < len; i++) packet[i] = swapbits(packet[i]);	
}

uint8_t spi_byte(uint8_t byte){

	uint8_t data[10];
	data[0]=spi_transfer(byte);
	return data[0];
}

void nrf_cmd(uint8_t cmd, uint8_t data)
{
	nrf24_csn_digitalWrite(LOW);
	spi_byte(cmd);
	spi_byte(data);
	nrf24_csn_digitalWrite(HIGH);
}

void nrf_simplebyte(uint8_t cmd)
{
	nrf24_csn_digitalWrite(LOW);
	spi_byte(cmd);
	nrf24_csn_digitalWrite(HIGH);
}

void nrf_manybytes(uint8_t* data, uint8_t len){

	uint8_t data_in[5];

 	nrf24_csn_digitalWrite(LOW);
	sent=0;
	R_CSI00_Send_Receive(data,len,&data_in);
	while(1)
	{
		if(sent==1)
			break;
	}
	sent=0;
    	nrf24_csn_digitalWrite(HIGH);
}

void loop()
{
	uint8_t outbuf[32]={0};

	static const uint8_t chRf[] = {2, 26,80};
	static const uint8_t chLe[] = {37,38,39};
	uint8_t i, L, ch = 0;
	volatile uint8_t buf[32];
	volatile uint8_t tx12;
	uint8_t repeat=0;

	R_IT_Start();
	R_INTC0_Start();
	R_CSI00_Start();
	nrf_cmd(0x20,0x52);
	nrf24_readRegister(CONFIG,&tx12,1);
	nrf_cmd(0x21, 0x00);	//no auto-acknowledge
	nrf_cmd(0x22, 0x00);	//no RX
	nrf_cmd(0x23, 0x02);	//5-byte address
	nrf_cmd(0x24, 0x00);	//no auto-retransmit
	nrf_cmd(0x26, 0x04);	//1MBps at 0dBm
	nrf_cmd(0x27, 0x3E);	//clear various flags
	nrf_cmd(0x3C, 0x00);	//no dynamic payloads
	nrf_cmd(0x3D, 0x00);	//no features
	nrf_cmd(0x31, 32);	//always RX 32 bytes
	nrf_cmd(0x22, 0x01);	//RX on pipe 0
	buf[0] = 0x30;			//set addresses
	buf[1] = swapbits(0x8E);
	buf[2] = swapbits(0x89);
	buf[3] = swapbits(0xBE);
	buf[4] = swapbits(0xD6);
	nrf_manybytes(buf, 5);
	buf[0] = 0x2A;
	nrf_manybytes(buf, 5);

	nrf24_configRegister(CONFIG,0x52);
    	nrf24_readRegister(CONFIG,&tx12,1);
	while(1){


	if(time_data-prev_time_data>= 10)
	{

	prev_time_data=time_data;

        float h=3;
        float t=9;
	L = 0;
	
	buf[L++] = 0x42;	//PDU type, given address is random
        buf[L++] = 0x11 /*+ 8*/ + 10; //17 bytes of payload
	
	buf[L++] = MY_MAC_0;
	buf[L++] = MY_MAC_1;
	buf[L++] = MY_MAC_2;
	buf[L++] = MY_MAC_3;
	buf[L++] = MY_MAC_4;
	buf[L++] = MY_MAC_5;
	
	buf[L++] = 2;		//flags (LE-only, limited discovery mode)
	buf[L++] = 0x01;
	buf[L++] = 0x05;
	
	buf[L++] = 7;// + 8;
	buf[L++] = 0x08;

	buf[L++] = 'n';
	buf[L++] = 'c';
	buf[L++] = 'F';
	buf[L++] = '2';
	buf[L++] = 'L';
	buf[L++] = 'E';

        buf[L++] = 9;
        buf[L++] = 0xff;
        
	send_prev_spi_time=time_data;

        putsample(send_prev_spi_time);

        buf[L++]=time_stamp[0];

        buf[L++]=time_stamp[1];
      
        buf[L++]=time_stamp[2];
        buf[L++]=transmit_time;

        buf[L++]=1;
        buf[L++]=1;
        buf[L++]=1;
        buf[L++]=1;
		
	buf[L++] = 0x55;	//CRC start value: 0x555555
	buf[L++] = 0x55;
	buf[L++] = 0x55;
	

	nrf_cmd(0x25,chRf[0]);
	nrf_cmd(0x27, 0x6E);	//clear flags


	btLePacketEncode(buf,L,chLe[0]);

	outbuf[0] = 0xF3;
	outbuf[1] = 0xC3;
	outbuf[2] = 0xC2;
	outbuf[3] = 0xE5;
	outbuf[4]=0x38;
	outbuf[5]=0x41;
	outbuf[6]=0xE6;
	outbuf[7]=0x25;
	outbuf[8]=0xEE;
	outbuf[9]=0xC;
	outbuf[10]=0x28;
	outbuf[11]=0xF2;
	outbuf[12]=0xF9;
	outbuf[13]=0x88;
	outbuf[14]=0xE9;
	outbuf[15]=0x31;
	outbuf[16]=0x24;
	outbuf[17]=0x11;
	outbuf[18]=0x9B;
	outbuf[19]=0x2C;
	outbuf[20]=0x85;
	outbuf[21]=0x73;
	outbuf[22]=0x0;
	outbuf[23]=0x0;
	outbuf[24]=0x0;
	outbuf[25]=0x0;
	outbuf[26]=0x0;
	outbuf[27]=0x0;
	outbuf[28]=0x0;
	outbuf[29]=0x0;
	outbuf[30]=0x0;
	outbuf[31]=0x0;
	
	nrf24_send(buf,L);

	nrf24_powerDown();		
	}
	}
}


void delay(uint8_t data)
{
	volatile long i=0;
	for(i=0;i<300000;i++);
}
