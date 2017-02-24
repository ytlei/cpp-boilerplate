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
//#include <lib.hpp>
#include <PidController.hpp>


bool PidController::setControlParam(double p, double i, double d) {
    // non-negative proportional, integral, derivate gains
    if (p < 0 || i < 0 || d < 0) {
        return false;
    }

    Kp = p;
    Ki = i;
    Kd = d;

    return true;
}


double PidController :: showCurrentVelocity(double setPoint, double curVelocity,
                                      double time) {
    

    return 25;
}
