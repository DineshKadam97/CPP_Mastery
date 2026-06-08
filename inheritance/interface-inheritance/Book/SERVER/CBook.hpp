// CBook class, who will implement the IBook interface

#ifndef _CBOOK_HPP
#define _CBOOK_HPP

#include "IBook.hpp"

class CBook : public IBook
{
    public:
        std::string title;
        std::string author;
        unsigned long int ISBN;
        float price;

    private:
        CBook(std::string _title, std::string _author, unsigned long int _ISBN, float _price)
        void setTitle(std::string _title);
        void setAuthor(std::string _author);
        void setISBN(unsigned long int _ISBN);
        void setPrice(float _price);

        std::string& getTitle() const;
        std::string& getAuthor() const;
        unsigned long int getISBN() const;
        float getPrice(float _price) const;
};

#endif /* _CBOOK_HPP */