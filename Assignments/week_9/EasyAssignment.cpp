#include <iostream>
#include <string>

int main(){
    // Prompt the user to enter their name and age:
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Calculate age in days (assuming each year has 365 days):
    int ageInDays = age * 365;

    // Print greeting with user’s name and calculated age in days:
    std::cout << "Hello, " << name << "! You are approximately " << ageInDays 
              << " days old." << std::endl;

    return 0;

}
