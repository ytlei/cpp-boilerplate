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
//#include </home/viki/cppSherif/cpp-boilerplate/include/PidController.cpp>
#include <PidController.cpp>
using std::cout;
using std::endl;

int main() {
	class PidController pid;
	pid.setTargetVelocity(5);
	pid.setInitialVelocity(0); //Initial Velocity
	pid.setInitialConditions(.5,0.05,0.0001,.1); // kp, ki, kd, dt
	cout << pid.getActualVelocity() << endl;
	cout << "------------" << endl;
    for (int i = 0; i < 200; i++) {
        double Velocity = pid.getNextVelocity(); // Calculate Next Velocity Value
	pid.setActualVelocity(Velocity);
	cout << pid.getActualVelocity() << endl;
	cout << "------------" << endl;
    }

    return 0;
}
