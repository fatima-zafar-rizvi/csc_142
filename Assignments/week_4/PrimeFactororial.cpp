/*
File Name: PrimeFactorial.cpp
Description: This program generates a random number less than 50, checks if 
             it's prime, calculates its factorial if it is prime, and asks the 
             user if they want to repeat.

Name: Fatima Rizvi
Date: Feb 12 2025
*/

#include <iostream>
#include <iomanip>//
#include <string> //
#include <ctime>
#include <cstdlib>

// Function Prototypes:
bool isPrime(int number);
double factorial(int number);

int main(){
    int number;
    char repeat;

    // Start for the random number generation:
    srand(time(0));

    do{
        // Generate random number less than 50:
        number = rand() % 50;

        // Display number:
        std::cout << "Random number generated: " << number << std::endl;

        // Check if the number is prime:
        if (isPrime(number)) {
            std::cout << number << " is a prime number." << std::endl;
            std::cout << "Factorial of " << number << " is: " << std::fixed 
                      << std::setprecision(0) << factorial(number) 
                      << std::endl;
        }
        else {
            std::cout << number << " is not a prime number." << std::endl;
        }

        //Ask the user if they want to repeat:
        std::cout << "Do you want to give it another go? (y/n): "; 
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    // Ending message:
    std::cout << "Thank you for using my service. See you next time!" 
              << std::endl;

    return 0;
}

// Function to check if a number is prime:
bool isPrime(int number) {
    // 0 and 1 are not prime by definition:
    if (number <= 1) return false;

    // Check for factors:
    for (int i = 2; i < number; i++){
        if (number % i == 0) return false;
    }

    // If no factors were found, the number is prime:
    return true;
}

// Function to calculate factorial:
double factorial(int number){
    double result = 1;

    // Special case for 0! = 1
    if (number == 0) return 1;

    // Calculate factorial unsing a for loop:
    for (int i = 1; i <= number; i++){
        result *= i;
    }
    return result;
}