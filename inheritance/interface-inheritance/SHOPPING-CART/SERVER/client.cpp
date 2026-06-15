#include <iostream>
#include "IShoppingCart.hpp"

void testShoppingCart(void);

int main(void)
{
    testShoppingCart();
    return 0;
}

void testShoppingCart(void)
{
    std::map<std::string, double> items = {{"Keli", 60}, {"Dudh", 80}};
    IShoppingCart* myCart = IShoppingCart::getCartInstance(items);

    std::cout << "Total Price : " << myCart->TotalPrice() << std::endl;
    
    myCart->AddItem("Bread", 70);

    std::cout << "Total Items: " << myCart->TotalItems() << " Total Price : " << myCart->TotalPrice() << std::endl;
}
