/*
File Name: InventoryTester.cpp
Description: Recent modifications of this multi-file project include boundary 
             testing to ensure the inventory correctly rejects books when 
             exceeding capacity, error handling for price changes with invalid 
             ISBNs, and an empty inventory test to assess system behavior with 
             zero books. These enhancements improve durability by addressing 
             edge cases and potential errors.
Name: Fatima Rizvi
Date: Mar 4 2025
*/

#include <iostream>
#include "Inventory.h"

int main() {
    // Create an inventory with space for 6 books (testing boundary condition):
    Inventory myInventory(6);

    // Creating Book objects and adding them to inventory:
    Book book1("013478796X", "Tony Gaddis", "Starting Out With Java: "
               "From Control Structures through Data Structures", 4, 
               "PE", 121.75);
    Book book2("0321409493", "John Lewis", "Java Software Solutions: "
               "Foundations of Program Design", 5, "AW", 94.00);
    Book book3("0134743350", "Harvey Deitel", 
               "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, 
               "PH", 109.00);
    Book book5("1593276036", "Eric Matthes", "Python Crash Course", 1, 
               "NS", 39.95);
    Book book6("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, 
               "PG", 17.70);
    Book book7("0000000000", "Unknown Author", "Extra Book", 1, "NA", 10.00);

    // Adding books to the inventory and checking if successful:
    myInventory.addBook(book1);
    myInventory.addBook(book2);
    myInventory.addBook(book3);
    myInventory.addBook(book4);
    myInventory.addBook(book5);
    myInventory.addBook(book6);

    // Print initial inventory:
    std::cout << "\nInitial Inventory:\n";
    myInventory.printInventory();

    // Testing: Attempt to add an extra book beyond inventory capacity.
    if (!myInventory.addBook(book7)) {
        std::cout << "\n[Error] Inventory is full. Cannot add more books.\n";
    }

    // Changing prices:
    myInventory.changePrice("013478796X", 50.00);
    myInventory.changePrice("0143067889", 9.95);
    myInventory.changePrice("0134743350", 100.00);

    // Testing: Attempt to change the price of a non-existent ISBN.
    myInventory.changePrice("9999999999", 45.00);
    std::cout << "\nAttempted to change price of non-existent ISBN.\n";

    // Print updated inventory:
    std::cout << "\nUpdated Inventory:\n";
    myInventory.printInventory();

    // Testing: Creating an empty inventory and printing it.
    Inventory emptyInventory(0);
    std::cout << "\nEmpty Inventory Test:\n";
    emptyInventory.printInventory();

    return 0;
}
