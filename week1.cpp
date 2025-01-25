/* 
   MPG.cpp
     Calculate the fuel efficiency of a vehicle
 
   Keyboard inputs:
     Vehicle description (string)
     Miles traveled (int)
     Fuel used in gallons (double)
 
   Outputs:
     Miles per gallon
 
   Name: Fatima Rizvi
   Date: 01/24/2025


  The starter file calculates the fuel efficiency of a vehicle in MPG (miles per gallon), a
    quantity commonly used in the US. In much of the rest of the world, fuel efficiency is
    often reported in L/100km (liters per 100 kilometers)

 
  Your task

    Extend the starter file to calculate both measures—MPG and L/100km—for the given
    user input.
    The starter file includes a constant for KM_PER_MILE which you must use in your
    calculation; you must also add a new constant for LITERS_PER_GALLON (you may need
    to use Google to find the correct conversion factor to use). Add appropriate constant(s),
    variable(s), assignment statement(s), and print statement(s) to the program to
    generate correct and understandable output. An example will be shown in class.
 

    For up to +2 points extra credit, format the output values to have exactly two digits to
    the right of the decimal place.
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

