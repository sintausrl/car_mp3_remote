/*
 * car_mp3_remote.h
 *
 *  Created on: Jul 14, 2017
 *      Author: anto
 */

#ifndef MAIN_CAR_MP3_REMOTE_H_
#define MAIN_CAR_MP3_REMOTE_H_

#define CAR_REMOTE_IR_ADDR		0xFF00

#define CAR_REMOTE_IR_BTN_CHM	0xBA45
#define CAR_REMOTE_IR_BTN_CH	0xB946
#define CAR_REMOTE_IR_BTN_CHP	0xB847
#define CAR_REMOTE_IR_BTN_PRV	0xBB44
#define CAR_REMOTE_IR_BTN_NXT	0xBF40
#define CAR_REMOTE_IR_BTN_PP	0xBC43
#define CAR_REMOTE_IR_BTN_VLM	0xF807
#define CAR_REMOTE_IR_BTN_VLP	0xEA15
#define CAR_REMOTE_IR_BTN_EQ	0xF609
#define CAR_REMOTE_IR_BTN_0		0xE916
#define CAR_REMOTE_IR_BTN_100	0xE619
#define CAR_REMOTE_IR_BTN_200	0xF20D
#define CAR_REMOTE_IR_BTN_1		0xF30C
#define CAR_REMOTE_IR_BTN_2		0xE718
#define CAR_REMOTE_IR_BTN_3		0xA15E
#define CAR_REMOTE_IR_BTN_4		0xF708
#define CAR_REMOTE_IR_BTN_5		0xE31C
#define CAR_REMOTE_IR_BTN_6		0xA55A
#define CAR_REMOTE_IR_BTN_7		0xBD42
#define CAR_REMOTE_IR_BTN_8		0xAD52
#define CAR_REMOTE_IR_BTN_9		0xB54A

void car_mp3_decode_btn(uint16_t addr, uint16_t cmd);

#endif /* MAIN_CAR_MP3_REMOTE_H_ */
