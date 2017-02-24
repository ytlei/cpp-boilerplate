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
using std::cin;
int main() {
	double kp = 0;
	double ki = 0;
	double kd = 0;
	double setPoint = 5;
	double initialVel = 0;
	double dTime = 0;
	class PidController pid;
    	cout << "Please input Kp, Ki, Kd for PID control" << endl;
    	cin >> kp >> ki >> kd;

    	cout << "Please input setpoint, initial velocity, delta time" << endl;
    	cin >> setPoint >> initialVel >> dTime;

	pid.setTargetVelocity(setPoint);
	pid.setInitialVelocity(initialVel); //Initial Velocity
	pid.setInitialConditions(kp,ki,kd,dTime); // kp, ki, kd, dt
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
