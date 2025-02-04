/*
File Name: exams.cpp
Description: This program prompts the user for their name and three exam scores,
             calculates the average of the scores, and displays the input data
             along with the formatted average.
Name: Fatima Rizvi
Date: Jan 31st 2025
*/

#include <iostream>
#include <iomanip>
#include <string> 

int main(){
    
    // Variable declarations:
    std::string name;
    int score_1;
    int score_2;
    int score_3;
    double average;

    // Prompt for user inputs:
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);

    // Prompt user for their exam scores:
    std::cout << "Enter the first exam score: ";
    std::cin >> score_1;
    std::cout << "Enter the second exam score: ";
    std::cin >> score_2;
    std::cout << "Enter the third exam score: ";
    std::cin >> score_3;

    // Caulculater the exam average:
    average = (score_1 + score_2 + score_3) / 3.0; 

    // Display results:
    std::cout << "\nHello, " << name << "." << std::endl;
    std::cout << "Your three exam scores are " << score_1 << ", " << score_2 
              << ", " << score_3 << "." << std::endl;
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Your average exam score is " << average << " points." 
              << std::endl;

    return 0;
}
