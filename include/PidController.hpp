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
#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

class PidController {
		double Kp, Ki, Kd;
		double newVelocity, targetVelocity, actualVelocity;
		double preError;                                 ///< previous error
     		double preIntegral;                              ///< previous integral
	public:
		
		bool setControlParam(double, double, double) ; 	///< set the pid parameters
		double showCurrentVelocity(double, double, double) ;	///< show current velocity
};

#endif
