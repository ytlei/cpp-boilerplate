/************************************************************
 *                                                          *
 * Copyright (C) 2017 by Yi-ting Lei                        *
 *                                                          *
 ***********************************************************/

/**
 *   @brief  	This is a PID controller for controlling car speed.
 *		one can set target velocity and get current speed.
 *      
 *  
 *   @param  	Ki,Kp,Kd for coefficients for the controller
 *   @return 	
 */

class PidController(){
		double kp,ki,kd;	
		double newVelocity, targetVelocity, actualVelocity;
	public:
		void setTargetVelocity(double targetV){};
		double showCurrentVelocity(){};

}
