/*
File Name: tax.cpp
Description: This program calculates the sales tax on a retail purchase and 
             allows the user to enter multiple purchases until they choose 
             to quit.
Name: Fatima Rizvi
Date: Feb 5 2025
*/


#include <iostream>
#include <iomanip>
#include <string> 
#include <stdexcept>

int main(){

    //Declare constatant and data type:
    const double SALES_TAX_RATE = 0.06;

    // Create boolean variable:
    bool keepGoing = true;
    char userChoice;

    while (keepGoing){

        std::string purchaseDescription;
        std::string purchaseCostStr;
        double purchaseCost = -1.0;

        // Get purchase description
        std::cout << "What did you purchase? Please enter: ";
        std::getline(std::cin, purchaseDescription);


        // Get valid purchase price:
        do {
            std::cout << "Enter the cost of the purchase "
                         "(in dollars and cents): ";
            std::getline (std::cin, purchaseCostStr);

            try {
                purchaseCost = std::stod(purchaseCostStr);
                if (purchaseCost < 0) {
                    std::cout << "Cost cannot be negative. Please enter a "
                                 "valid amount.\n";
                }
        } catch (const std::invalid_argument&) {
            std::cout << "Invalid input. Please enter a numeric value.\n";
            purchaseCost = -1;
        }
        } while (purchaseCost < 0);

        // Calculate tax and total cost:
        double salesTax = purchaseCost * SALES_TAX_RATE;
        double totalCost = purchaseCost + salesTax;

        // Display results:
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nPurchase Details:\n";
        std::cout << "Description: " << purchaseDescription << "\n";
        std::cout << "Purchase Cost: $" << purchaseCost << "\n";
        std::cout << "Sales Tax (6%): $" << salesTax << "\n";
        std::cout << "Total Cost: $" << totalCost << "\n";

        // Ask them if they wish to continue:
        std::cout << "\nWould you like to enter another purchase? (Y/N): ";
        std::cin >> userChoice;
        std::cin.ignore();

        if (userChoice != 'Y' && userChoice != 'y'){
            keepGoing = false;
        }
    }

    std::cout << "\nThank you for using the sales tax calculator. "
                 "See you next time!\n";
    return 0;
}

