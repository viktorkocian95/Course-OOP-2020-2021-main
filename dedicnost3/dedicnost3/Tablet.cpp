#include "Tablet.h"
#include <sstream>

Tablet::Tablet(string name, double price, string color, bool key, double size)
    : AbstractProduct(name, price, color)
{
    this->appendKeyboard = key;
    this->size = size;
}

string Tablet::ToString()
{
    std::stringstream ss;
    ss << "Product is " << this->name << ", it is tablet and ";
    std::string s = ss.str();
    s.append(this->appendKeyboard ? "can connect keyboard" : "cannot connect keyboard");
    return s;
}
