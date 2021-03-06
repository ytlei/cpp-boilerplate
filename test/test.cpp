/********************************************************************
 *                                                                  *
 * Copyright (C) 2017 by Yi-ting Lei                                *
 *                                                                  *
 ********************************************************************/


/** @file test.cpp
 *  @brief Implementation of unit test for PIDController
 *
 *  This file contains implementation of unit test for
 *  TestPIDController.
 *
 *  @author Yi-ting Lei
 *  @date   02/22/2017
*/

#include <gtest/gtest.h>
#include <PidController.cpp>
/**
 *   @brief  Test the set control parameter function of
 *           PIDController
 *
 *   @param  none
 *   @return none
*/
TEST(testSetTargetVelocity, should_pass) {
    PidController pid;
    ASSERT_TRUE(pid.setControlParam(.1, .1, .1, .1));
}


/**
 *   @brief  Test the compute velocity function of
 *           PIDController
 *
 *   @param  none
 *   @return none
*/
TEST(testShowVelocity, should_pass) {
    PidController pid;
    pid.setControlParam(.1, .1, .1, .1);
    ASSERT_EQ(pid.showCurrentVelocity(25, 20, 1), 25);
    ASSERT_EQ(pid.showCurrentVelocity(25, 20, 0), 25);
}
