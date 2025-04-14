#include "Inventory.h"
#include <iostream>
#include <iomanip>

// Constructor
Inventory::Inventory(int size) {
    length = size;
    books = new Book[length]; 
    nextEntry = 0;
}

// Destructor
Inventory::~Inventory() {
    delete[] books; 
}

// Add a book to the inventory
bool Inventory::addBook(Book theBook) {
    if (nextEntry < length) {
        books[nextEntry] = theBook;
        nextEntry++;
        return true;
    }
    return false; 
}

// Change the price of a book given its ISBN
void Inventory::changePrice(std::string isbn, double newPrice) {
    for (int i = 0; i < nextEntry; i++) {
        if (books[i].getISBN() == isbn) {
            books[i].changePrice(newPrice);
            return;
        }
    }
}

// Print the inventory list
void Inventory::printInventory() {
    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ') 
              << std::left << std::setw(13) << "ISBN"
              << std::setw(18) << "AUTHOR"
              << std::setw(40) << "TITLE"
              << std::setw(5) << "ED"
              << std::setw(5) << "PUB"
              << std::right << std::setw(8) << "PRICE" << std::endl;
    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;
    
    for (int i = 0; i < nextEntry; i++) {
        std::cout << std::setfill(' ')
                  << std::left << std::setw(13) << books[i].getISBN()
                  << std::setw(18) << books[i].getAuthor()
                  << std::setw(40) << books[i].getTitle().substr(0, 37)
                  << std::setw(5) << books[i].getEdition()
                  << std::setw(5) << books[i].getPubCode()
                  << std::right << std::fixed << std::setprecision(2) 
                  << std::setw(8) << books[i].getPrice() << std::endl;
    }
    
    std::cout << std::setw(90) << std::setfill('-') << "" << std::endl;
}
