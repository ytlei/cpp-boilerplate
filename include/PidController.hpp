/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @file	PidController.hpp
 *   @brief  	This is a PID controller for controlling car speed.
 *		one can set target velocity and get current speed.
 *      
 *   Control the velocity using kp ki kd parameters in PID algorithm
 *
 *   @author	Yi-ting Lei
 *   @date	2017/2/17
 */
#ifndef CLASS_PIDCONTROLLER
#define CLASS_PIDCONTROLLER

class PidController {
		double kp, ki, kd;
		double newVelocity, targetVelocity, actualVelocity;
	public:
		//PidController();
		void setTargetVelocity(double targetV) ; 	///< set the target velocity
		double showCurrentVelocity() ;	///< show current velocity
};

#endif