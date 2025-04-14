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
        std::cout << "Enter an integer between 1 and 100: ";
        std::cin >> number;

        if (number < 1) {
            std::cout 
            << "Invalid input. Please enter a number of at least 1." 
            << std::endl;
        } 
        else {
            if (number > 100) {
                std::cout 
                << "Invalid input. Please enter a number of at most 100." 
                << std::endl;
            } 
            else {
                break;  
            }
        }
    } while (true);

    // Display the corresponding Roman numeral:
    std::cout << "The Roman numeral equvalent of " << number << " is: ";

    // Determine tens and ones place:
    int tens = number /10;
    int ones = number % 10;

    // Convert tens place:
    if (tens == 1) std::cout << "X";
    else if (tens == 2) std::cout << "XX";
    else if (tens == 3) std::cout << "XXX";
    else if (tens == 4) std::cout << "XL";
    else if (tens == 5) std::cout << "L";
    else if (tens == 6) std::cout << "LX";
    else if (tens == 7) std::cout << "LXX";
    else if (tens == 8) std::cout << "LXXX";
    else if (tens == 9) std::cout << "XC";
    else if (tens == 10) std::cout << "C";

    // Convert ones place:
    if (ones == 1) std::cout << "I";
    else if (ones == 2) std::cout << "II";
    else if (ones == 3) std::cout << "III";
    else if (ones == 4) std::cout << "IV";
    else if (ones == 5) std::cout << "V";
    else if (ones == 6) std::cout << "VI";
    else if (ones == 7) std::cout << "VII";
    else if (ones == 8) std::cout << "VIII";
    else if (ones == 9) std::cout << "IX";

    std::cout  << std::endl;

    return 0;
}
    