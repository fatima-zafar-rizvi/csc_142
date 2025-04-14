/*
File Name: even.cpp
Description: Generates 1,000 random integers between 0 and 100, and determines 
             whether each number is even or odd. It then counts the total 
             number of even and odd numbers. 

Name: Fatima Rizvi
Date: Feb 10 2025
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>


bool isEven(int num){
    return num % 2 == 0;
}

int main(){

    // Start for the random number generation:
    srand(time(0));

    // Counters:
    int evenCount = 0, oddCount = 0; 

    for (int i = 0; i < 1000; i++){
        int randomNum = rand() % 101; // Generate a number between 0-100.
         
        if (isEven(randomNum)){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display results:
    std::cout << "Total number of integers: 1000\n";
    std::cout << "Total number of even numbers: " << evenCount << "\n";
    std::cout << "Total number of odd numbers: " << oddCount << "\n";

    return 0;
         
}
