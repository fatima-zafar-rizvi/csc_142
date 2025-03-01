// BookDef.cpp
#include "Book.h"

// Default Constructor
Book::Book() {
    codeNum = "";
    author = "";
    title = "";
    edition = 0;
    pubCode = "";
    price = 0.0;
}

// Parameterized Constructor
Book::Book(std::string cn, std::string au, std::string ti, int ed, 
           std::string pc, double pr) {
    codeNum = cn;
    author = au;
    title = ti;
    edition = ed;
    pubCode = pc;
    price = pr;
}

// Accessor Methods
std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

double Book::getPrice() const {
    return price;
}

int Book::getEdition() const {
    return edition;
}

std::string Book::getISBN() const {
    return codeNum;
}

std::string Book::getPubCode() const {
    return pubCode;
}

// Mutator Method
void Book::changePrice(double newPrice) {
    price = newPrice;
}
