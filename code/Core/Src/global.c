/*
 * global.c
 *
 *  Created on: Dec 6, 2022
 *      Author: NHAN
 */


#include "global.h"


int mode = INIT_SYSTEM;


int state_led_traffic_1 = RED;
int state_led_traffic_2 =GREEN;


int duration_time_of_RED = 20000;
int duration_time_of_YELLOW = 15000;
int duration_time_of_GREEN = 5000;
int buffer_duration_time = 1000;

int cycle_buzzer = 0;
