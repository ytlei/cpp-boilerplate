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
 *   @author    Sherif Shazly
 *   @date	2017/2/24
 */
#ifndef CLASS_PIDCONTROLLER
#define CLASS_PIDCONTROLLER

class PidController {
	private:
		double kp, ki, kd, dt;
	public:
		double initialVelocity, targetVelocity, actualVelocity, integral, prevError;
		//PidController();
		void setTargetVelocity(double targetV) ; 	///< set the target velocity
		void setInitialVelocity(double initialV) ; 	///< set the initial velocity
		void setActualVelocity(double actualV) ; 	///< set the initial velocity
		void setInitialConditions(double _kp, double _ki, double _kd, double _dt); ///< set the initial conditions
		double getNextVelocity(); ///< calculate the velocity for the next timestep (currentVelocity + increment)
		double getActualVelocity();	///< show current (actual) velocity
};

#endif
