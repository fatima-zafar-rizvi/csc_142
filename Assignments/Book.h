//Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
    private:
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:
        // Default Constructor
        Book();

        // Parameterized Constructor
        Book(std::string cn, std::string au, std::string ti, int ed, 
            std::string pc, double pr);
    
        // Accessor Methods
        std::string getTitle() const;
        std::string getAuthor() const;
        double getPrice() const;
        int getEdition() const;
        std::string getISBN() const;
        std::string getPubCode() const;
    
        // Mutator Method
        void changePrice(double newPrice);
        
        // Overloaded Operators
        friend std::ostream& operator<<(std::ostream& os, const Book& book);
        bool operator==(const Book& other) const;

        // New Method for ISBN Validation
        bool isValidISBN() const;
};

#endif
