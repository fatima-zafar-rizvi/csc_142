// Book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

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
    };
    
    #endif

