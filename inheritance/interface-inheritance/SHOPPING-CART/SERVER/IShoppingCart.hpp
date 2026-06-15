// 9. Shopping Cart Library

// Create a library that represents a shopping cart.

// Requirements:

// Add item
// Remove item
// Calculate total price
// Count total items

#ifndef _ISHOPPING_CART
#define _ISHOPPING_CART

#include <iostream>
#include <map>

class IShoppingCart
{
    public:
        virtual void AddItem(std::string item, double price) = 0;
        virtual void RemoveItem(std::string item) = 0;
        virtual double TotalPrice() = 0;
        virtual int TotalItems() = 0;

        static IShoppingCart* getCartInstance(std::map<std::string, double>& _items);
};

#endif /* _ISHOPPING_CART */