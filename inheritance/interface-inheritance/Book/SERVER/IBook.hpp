// 4. Book Library

// Create a library representing a book.

// Requirements:

// Store title, author, ISBN, and price.
// Allow modification of book details.
// Allow retrieval of book details.

#ifndef _IBOOK_HPP
#define _IBOOK_HPP

#include <iostream>
#include <string>

class IBook 
{
    public:
        std::string title;
        std::string author;
        unsigned long int ISBN;
        float price;

        virtual void setTitle(std::string _title) = 0;
        virtual void setAuthor(std::string _author) = 0;
        virtual void setISBN(unsigned long int _ISBN) = 0;
        virtual void setPrice(float _price) = 0;

        virtual std::string& getTitle() const = 0;
        virtual std::string& getAuthor() const = 0;
        virtual unsigned long int getISBN() const = 0;
        virtual float getPrice(float _price) const = 0;

        static IBook* getBookInstance(std::string _title, std::string _author, unsigned long int _ISBN, float _price);
};

#endif /* _IBOOK_HPP */