/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	main.cpp
 *   @brief  	This is the main file to run the PID controller
 *      
 *   Run the velocity controller
 *
 *   @author	Yi-ting Lei
 *   @date	2017/2/17
 */

#include <iostream>
#include <lib.hpp>
#include <PidController.hpp>
/*
PidController::PidController() {
	kp = 1;
	ki = 1;
	kd = 1;
	newVelocity = 0;
	targetVelocity = 0;
	actualVelocity = 0;
}
*/
void PidController :: setTargetVelocity(double targetV) {
	targetVelocity = targetV;
} 

double PidController :: showCurrentVelocity() {
	return 1;
}
