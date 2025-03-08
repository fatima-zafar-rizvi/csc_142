//BookDef.cpp
#include "Book.h"
#include <iomanip>

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

// Overloaded << Operator for formatted output
std::ostream& operator<<(std::ostream& os, const Book& book) {
    std::string isbnDisplay = book.codeNum;
    if (!book.isValidISBN()) {
        isbnDisplay += "*"; // Mark invalid ISBNs
    }

    os << std::left << std::setw(12) << isbnDisplay
       << std::setw(20) << book.author.substr(0, 18)
       << std::setw(45) << book.title.substr(0, 43)
       << std::setw(4) << book.edition
       << std::setw(6) << book.pubCode
       << "$" << std::fixed << std::setprecision(2) << std::setw(8) << book.price;
    return os;
}

// Overloaded == Operator for ISBN comparison
bool Book::operator==(const Book& other) const {
    return this->codeNum == other.codeNum;
}

// ISBN Validation Method
bool Book::isValidISBN() const {
    if (codeNum.length() != 10) return false; 

    int sum = 0;
    for (int i = 0; i < 9; i++) {
        if (!isdigit(codeNum[i])) return false; 
        sum += (codeNum[i] - '0') * (10 - i);
    }

    // Compute the check digit
    char checkDigit = codeNum[9];
    int computedCheck = (11 - (sum % 11)) % 11;

    // Convert computedCheck to character ('X' if 10)
    char expectedChar = (computedCheck == 10) ? 'X' : (computedCheck + '0');

    return checkDigit == expectedChar;
}
