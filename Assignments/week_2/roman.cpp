/*
File Name: roman.cpp
Description: This program prompts the user for an integer between 1 and 10,
             validates the input using a do-while loop, and displays the corresponding
             Roman numeral.
Name: Fatima Rizvi
Date: Jan 31st 2025
*/

#include <iostream>
#include <iomanip>
#include <string> 

int main() {

    // Declare variable:
    int number;

    //Prompt user until a valid number is entered:
    do {
        std::cout << "Enter an integer between 1 and 10: ";
        std::cin >> number;

        if (number < 1) {
            std::cout 
            << "Invalid input. Please enter a number of at least 1." 
            << std::endl;
        } 
        else {
            if (number > 10) {
                std::cout 
                << "Invalid input. Please enter a number of at most 10." 
                << std::endl;
            } 
            else {
                break;  
            }
        }
    } while (true);

    // Display the corresponding Roman numeral:
    std::cout << "The Roman numeral equvalent of " << number << " is: ";

    if (number == 1) std::cout << "I";
    else if (number == 2) std::cout << "II";
    else if (number == 3) std::cout << "III";
    else if (number == 4) std::cout << "IV";
    else if (number == 5) std::cout << "V";
    else if (number == 6) std::cout << "VI";
    else if (number == 7) std::cout << "VII";
    else if (number == 8) std::cout << "VIII";
    else if (number == 9) std::cout << "IX";
    else if (number == 10) std::cout << "X";

    std::cout  << std::endl;

    return 0;
}
    