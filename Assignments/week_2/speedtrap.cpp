/*
File Name: speedtrap.cpp
Description: This program checks if a driver is speeding based on a given 
             speed limit.
Name: Fatima Rizvi
Date: Jan 31st 2025
*/

#include <iostream>
#include <iomanip>
#include <string> 

int main(){

    // Declare variables:
    int speedLimit;
    double driverSpeed;

    // Prompt user for speed limit:
    std::cout << "Enter the speed limit: ";
    std::cin >> speedLimit;

    // Prompt user for driver's speed:
    std::cout << "Enter the driver's speed: ";
    std::cin >> driverSpeed;

    // Check if the driver is speeding using a single if statement:
    if (driverSpeed > speedLimit)
        std::cout << "You are not in Fast and Furious. Slow down!"
        << std::endl;
    else 
        std::cout << "Good job! You are not getting a speeding ticket."
        << std::endl;


    return 0;
}