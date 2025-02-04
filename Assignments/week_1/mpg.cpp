/*
File Name: mpg.cpp

Description: Calculate the fuel efficiency of a vehicle
 
  Keyboard inputs:
     Vehicle description (string)
     Miles traveled (int)
     Fuel used in gallons (double)
 
  Outputs:
     Miles per gallon
     
Name: Fatima Rizvi
Date: Jan 24th 2025
*/

#include <iostream>
#include <iomanip> //For std::setprecision (help format to two decimal places).
#include <string>

int main() {
    // Constant declarations
    const double KM_PER_MILE = 1.60934;  // Conversion factor for km
    const double LITERS_PER_GALLON = 3.78541;  // Conversion factor for l

    // Variable declarations
    std::string desc;
    int miles;
    float gallons;
    float mpg;
    float l_per_100km;
    float kilometers;
    float liters;

    // Prompt for user inputs
    std::cout << "Please enter a description of your car: ";
    std::getline(std::cin, desc);
    std::cout << "How many miles did you drive? ";
    std::cin >> miles;
    std::cout << "How many gallons of gas did you use? ";
    std::cin >> gallons;

    // Calculate the results
    kilometers = miles * KM_PER_MILE;
    liters = gallons * LITERS_PER_GALLON;
    mpg = miles / gallons;
    l_per_100km = (liters / kilometers) * 100;

    // Print the user inputs and final results
    std::cout << "\n";
    std::cout << "Fuel efficiency of your " << desc << ":" << std::endl;
    std::cout << "You drove " << miles << " miles and used " << gallons 
              << " gallons." << std::endl;
    std::cout << "Your fuel efficiency is " << std::fixed 
              << std::setprecision(2) << mpg << " miles per gallon." 
              << std::endl;

    std::cout << "\n";
    std::cout << "Fuel efficiency of your " << desc << ":" << std::endl;
    std::cout << "You drove " << std::fixed << std::setprecision(2) 
              << kilometers << " kilometers and used " << std::fixed 
              << std::setprecision(2) << liters << " liters." << std::endl;
    std::cout << "Your fuel efficiency is " << std::fixed 
              << std::setprecision(2) << l_per_100km << " liters per 100km." 
              << std::endl;   

    return 0;
}



