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
 *   @author    Sherif Shazly
 *   @date	2017/2/24
 */

#include <iostream>
//#include <lib.hpp>
#include <PidController.hpp>
//#include </home/viki/cppSherif/cpp-boilerplate/include/PidController.hpp>
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
void PidController :: setInitialVelocity(double initialV) {
	initialVelocity = initialV;
	integral = 0;
	prevError = targetVelocity - initialVelocity;
	actualVelocity = initialVelocity;
} 

void PidController :: setActualVelocity(double actualV) {
	actualVelocity = actualV;
} 

double PidController :: getNextVelocity() {
	// Calculate Error Term
	double Error = targetVelocity - actualVelocity;
	// Calculate Proportional Term
	double P = Error*kp;
	// Calculate Integral Term
	double integralNew = integral + Error*dt;
	double I = integral*ki;
	// Calculate Derivative Term
	double derivative = (Error - prevError)/dt;
	double D = derivative*kd;

	// Calculate Increment
	double inc = P + I + D;
	// Calculate Next Velocity;
	double nextVelocity = actualVelocity + inc;

	// Assign new values to integral and PrevError
	integral = integralNew;
	prevError = Error;
	return nextVelocity;
} 

double PidController :: getActualVelocity() {
	return actualVelocity;
}

bool PidController::setControlParam(double p, double i, double d, double _dt) {
    // non-negative proportional, integral, derivate gains
    if (p < 0 || i < 0 || d < 0) {
        return false;
    }

    kp = p;
    ki = i;
    kd = d;
	dt = _dt;
    return true;
}


double PidController :: showCurrentVelocity(double setPoint, double curVelocity,double time) {
    

    return 25;
}
