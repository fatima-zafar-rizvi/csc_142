/*
File Name: InventoryTester.cpp
Description: This program tests the functionality of the Inventory class. It 
             creates an inventory with space for up to 10 books and adds six 
             Book objects to it. The program then prints the initial inventory 
             details, updates the prices of selected books using the 
             changePrice() method, and prints the updated inventory to reflect 
             the changes. 
Name: Fatima Rizvi
Date: Feb 20 2025
*/

#include <iostream>
#include "Inventory.h"

int main() {
    // Create an inventory with space for 10 books
    Inventory myInventory(10);

    // Creating Book objects and adding them to inventory
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

    // Adding books to the inventory and checking if successful
    myInventory.addBook(book1);
    myInventory.addBook(book2);
    myInventory.addBook(book3);
    myInventory.addBook(book4);
    myInventory.addBook(book5);
    myInventory.addBook(book6);

    // Print initial inventory
    std::cout << "\nInitial Inventory:\n";
    myInventory.printInventory();

    // Changing prices
    myInventory.changePrice("013478796X", 50.00);
    myInventory.changePrice("0143067889", 9.95);
    myInventory.changePrice("0134743350", 100.00);

    // Print updated inventory
    std::cout << "\nUpdated Inventory:\n";
    myInventory.printInventory();

    return 0;
}
