#ifndef _CSHOPPING_CART_HPP
#define _CSHOPPING_CART_HPP

#include "IShoppingCart.hpp"

class CShoppingCart : public IShoppingCart
{
    private:
        std::map<std::string, double> items;

    public:
        CShoppingCart(std::map<std::string, double>& _items);
        void AddItem(std::string item, double price);
        void RemoveItem(std::string item);
        double TotalPrice();
        int TotalItems();
};

#endif /* _CSHOPPING_CART_HPP */
