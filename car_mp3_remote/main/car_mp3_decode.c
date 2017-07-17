/*
 * car_mp3_remote.c
 *
 *  Created on: Jul 14, 2017
 *      Author: anto
 */
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "esp_log.h"
#include "car_mp3_decode.h"

static const char* CAR_MP3_REMOTE_TAG = "CAR_MP3_RMT";

void car_mp3_decode_btn(uint16_t addr, uint16_t cmd)
{
	if(addr != CAR_REMOTE_IR_ADDR) {
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "unknown address: 0x%04x", addr);
		return;
	}

	switch(cmd)
	{
	case CAR_REMOTE_IR_BTN_CHM:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received CH-");
		break;
	case CAR_REMOTE_IR_BTN_CH:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received CH");
		break;
	case CAR_REMOTE_IR_BTN_CHP:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received CH+");
		break;
	case CAR_REMOTE_IR_BTN_PRV:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received <<");
		break;
	case CAR_REMOTE_IR_BTN_NXT:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received >>");
		break;
	case CAR_REMOTE_IR_BTN_PP:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received >||");
		break;
	case CAR_REMOTE_IR_BTN_VLM:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received -");
		break;
	case CAR_REMOTE_IR_BTN_VLP:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received +");
		break;
	case CAR_REMOTE_IR_BTN_EQ:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received EQ");
		break;
	case CAR_REMOTE_IR_BTN_0:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 0");
		break;
	case CAR_REMOTE_IR_BTN_100:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 100+");
		break;
	case CAR_REMOTE_IR_BTN_200:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 200+");
		break;
	case CAR_REMOTE_IR_BTN_1:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 1");
		break;
	case CAR_REMOTE_IR_BTN_2:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 2");
		break;
	case CAR_REMOTE_IR_BTN_3:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 3");
		break;
	case CAR_REMOTE_IR_BTN_4:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 4");
		break;
	case CAR_REMOTE_IR_BTN_5:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 5");
		break;
	case CAR_REMOTE_IR_BTN_6:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 6");
		break;
	case CAR_REMOTE_IR_BTN_7:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 7");
		break;
	case CAR_REMOTE_IR_BTN_8:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 8");
		break;
	case CAR_REMOTE_IR_BTN_9:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "Received 9");
		break;

	default:
		ESP_LOGI(CAR_MP3_REMOTE_TAG, "unknown command: 0x%04x", cmd);
	}


}

