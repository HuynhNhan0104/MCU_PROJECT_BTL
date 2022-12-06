/*
 * led_traffic.c
 *
 *  Created on: Dec 6, 2022
 *      Author: NHAN
 */

#include "traffic_led.h"

void turn_on_traffic_led_1(){
	switch(state_led_traffic_1){
		case RED:
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
		break;
		case YELLOW:
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		break;
		case GREEN:
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		break;
		case OFF:
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
		break;
		default:
		break;
	}
}


void turn_on_traffic_led_2(){
	switch(state_led_traffic_2){
		case RED:
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, SET);
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, RESET);
		break;
		case YELLOW:
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, SET);
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, SET);
		break;
		case GREEN:
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, RESET);
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, SET);
		break;
		case OFF:
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, RESET);
			HAL_GPIO_WritePin(D4_GPIO_Port, D5_Pin, RESET);
		break;
		default:
		break;
	}
}
