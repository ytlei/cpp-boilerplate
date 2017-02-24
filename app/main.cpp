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

using std::cin;
using std::cout;
using std::endl;


int main() {
    double kp = 0;
    double ki = 0;
    double kd = 0;
    double setPoint = 0;
    double actualVel = 0;
    double dTime = 0;
    double newVel = 0;
    PidController pid;

    cout << "Please input Kp, Ki, Kd for PID control" << endl;

    cin >> kp >> ki >> kd;

    cout << "Please input setpoint, actual velocity, delta time" << endl;

    cin >> setPoint >> actualVel >> dTime;

    if (pid.setControlParam(kp, ki, kd)) {
        newVel = pid.showCurrentVelocity(setPoint, actualVel, dTime);
        cout << "New velocity is " << newVel << endl;
    } else {
        cout << "Kp, Ki, Kd for PID control must be non-negative." << endl;
    }

    return 0;
}
