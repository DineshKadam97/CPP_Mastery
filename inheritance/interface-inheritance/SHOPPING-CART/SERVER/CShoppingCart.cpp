#include "CShoppingCart.hpp"

CShoppingCart::CShoppingCart(std::map<std::string, double>& _items)
{
    items = _items;
}

void CShoppingCart::AddItem(std::string item, double price)
{
    items.insert({item, price});
}

void CShoppingCart::RemoveItem(std::string item)
{
    items.erase(item);
}

double CShoppingCart::TotalPrice()
{
    double price = 0.0;
    for(std::map<std::string, double>::iterator iter = items.begin(); iter != items.end(); ++iter)
    {
        price += iter->second;
    }

    return price;
}

int CShoppingCart::TotalItems()
{
    return items.size();
}

IShoppingCart* IShoppingCart::getCartInstance(std::map<std::string, double>& _items)
{
    return new CShoppingCart(_items);
}
