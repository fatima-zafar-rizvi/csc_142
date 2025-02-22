/*
File Name: RectangleTester.cpp
Description: The program allows the user to input the dimensions 
             (length and width) of three rooms in an apartment: 
             the kitchen, bedroom, and living room. It then uses setter methods
             to assign these dimensions to Rectangle objects and calculates 
             the area of each room using the class's getter methods. 
             Finally, it computes the total area of the apartment by summing 
             the areas of all three rooms and outputs this information.

Name: Fatima Rizvi
Date: Feb 18 2025
*/

#include <iostream>
#include <iomanip>
#include "Rectangle.h"


int main() {
    Rectangle kitchen, bedroom, livingRoom;
    double length, width;

    // Ask for dimensions for the kitchen:
    std::cout << "What is the kitchen's length? ";
    std::cin >> length;
    kitchen.setLength(length);
    std::cout << "What is the kitchen's width? ";
    std::cin >> width;
    kitchen.setWidth(width);

    // Ask for dimensions for the bedroom:
    std::cout << "What is the bedroom's length? ";
    std::cin >> length;
    bedroom.setLength(length);
    std::cout << "What is the bedroom's width? ";
    std::cin >> width;
    bedroom.setWidth(width);

    // Ask for dimensions for the living room:
    std::cout << "What is the living room's length? ";
    std::cin >> length;
    livingRoom.setLength(length);
    std::cout << "What is the living room's width? ";
    std::cin >> width;
    livingRoom.setWidth(width);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\nThe kitchen is " << kitchen.getLength() << " x " 
              << kitchen.getWidth() << ", with an area of " 
              << kitchen.getArea() << " sq ft.\n";
    std::cout << "The bedroom is " << bedroom.getLength() << " x " 
              << bedroom.getWidth() << ", with an area of " 
              << bedroom.getArea() << " sq ft.\n";
    std::cout << "The living room is " << livingRoom.getLength() << " x " 
              << livingRoom.getWidth() << ", with an area of " 
              << livingRoom.getArea() << " sq ft.\n";

    // Calculate and display the total area of the apartment        
    double totalArea = kitchen.getArea() + bedroom.getArea() + 
                       livingRoom.getArea();
    std::cout << "The total of all three rooms is " << totalArea << " sq ft.\n" 
              << std::endl;

    return 0;
}
