// Inventory.h
#ifndef INVENTORY_H
#define INVENTORY_H
#include "Book.h"
#include <iostream>

class Inventory {
private:
    Book* books; 
    int nextEntry; 
    int length; 

public:
    // Constructor
    Inventory(int size);
    
    // Destructor
    ~Inventory();
    
    // Methods
    bool addBook(Book theBook);
    void changePrice(std::string isbn, double newPrice);
    void printInventory();
};

#endif
