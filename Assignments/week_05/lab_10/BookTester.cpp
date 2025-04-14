/*
File Name: BookTester.cpp
Description: The program test the functionality of the Book class. It creates 
             three Book objects with predefined data. The program then prints 
             a formatted table displaying the details of each book. It then 
             uses the changePrice() method to modify the price of each book 
             and prints the updated information in the same table format. 

Name: Fatima Rizvi
Date: Feb 20 2025
*/

#include <iostream>
#include <iomanip>
#include "Book.h"

int main() {
    // Creating Book objects
    Book book1("013478796X", "Tony Gaddis", "Starting Out With Java: " 
        "From Control Structures through Data Structures", 4, "PE", 118.30);
    Book book2("0321409493", "John Lewis", "Java Software Solutions: "
        "Foundations of Program Design", 5, "AW", 94.05);
    Book book3("0134743350", "Harvey Deitel", "Java How to Program, "
        "Early Objects", 12, "PE", 134.84);

    // Printing Table Header
    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ')
              << std::left << std::setw(13) << "ISBN"
              << std::setw(18) << "AUTHOR"
              << std::setw(40) << "TITLE"
              << std::setw(5) << "ED"
              << std::setw(5) << "PUB"
              << std::right << std::setw(8) << "PRICE" << std::endl;
    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;
    
    // Printing Book Data
    std::cout << std::setfill(' ')
              << std::left << std::setw(13) << book1.getISBN()
              << std::setw(18) << book1.getAuthor()
              << std::setw(40) << book1.getTitle().substr(0, 37)
              << std::setw(5) << book1.getEdition()
              << std::setw(5) << book1.getPubCode()
              << std::right << std::fixed << std::setprecision(2) 
              << std::setw(8) << book1.getPrice() << std::endl;

    std::cout << std::left << std::setw(13) << book2.getISBN()
              << std::setw(18) << book2.getAuthor()
              << std::setw(40) << book2.getTitle().substr(0, 37)
              << std::setw(5) << book2.getEdition()
              << std::setw(5) << book2.getPubCode()
              << std::right << std::fixed << std::setprecision(2) 
              << std::setw(8) << book2.getPrice() << std::endl;

    std::cout << std::left << std::setw(13) << book3.getISBN()
              << std::setw(18) << book3.getAuthor()
              << std::setw(40) << book3.getTitle().substr(0, 37)
              << std::setw(5) << book3.getEdition()
              << std::setw(5) << book3.getPubCode()
              << std::right << std::fixed << std::setprecision(2) 
              << std::setw(8) << book3.getPrice() << std::endl;

    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;

    // Changing Prices
    std::cout << "Changing book1 price from $" << book1.getPrice() 
              << " to $145.68" << std::endl;
    book1.changePrice(145.68);
    
    std::cout << "Changing book2 price from $" << book2.getPrice() 
              << " to $117.79" << std::endl;
    book2.changePrice(117.79);
    
    std::cout << "Changing book3 price from $" << book3.getPrice() 
              << " to $59.99" << std::endl;
    book3.changePrice(59.99);

    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;

    // Printing Updated Data
    std::cout << std::setfill(' ')
              << std::left << std::setw(13) << book1.getISBN()
              << std::setw(18) << book1.getAuthor()
              << std::setw(40) << book1.getTitle().substr(0, 37)
              << std::setw(5) << book1.getEdition()
              << std::setw(5) << book1.getPubCode()
              << std::right << std::fixed << std::setprecision(2) 
              << std::setw(8) << book1.getPrice() << std::endl;

    std::cout << std::left << std::setw(13) << book2.getISBN()
              << std::setw(18) << book2.getAuthor()
              << std::setw(40) << book2.getTitle().substr(0, 37)
              << std::setw(5) << book2.getEdition()
              << std::setw(5) << book2.getPubCode()
              << std::right << std::fixed << std::setprecision(2) 
              << std::setw(8) << book2.getPrice() << std::endl;

    std::cout << std::left << std::setw(13) << book3.getISBN()
              << std::setw(18) << book3.getAuthor()
              << std::setw(40) << book3.getTitle().substr(0, 37)
              << std::setw(5) << book3.getEdition()
              << std::setw(5) << book3.getPubCode()
              << std::right << std::fixed << std::setprecision(2) 
              << std::setw(8) << book3.getPrice() << std::endl;

    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;

    return 0;
}
