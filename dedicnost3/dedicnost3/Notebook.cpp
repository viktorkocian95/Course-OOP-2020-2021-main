#include "Notebook.h"
#include <sstream>

Notebook::Notebook(string name, double price, string color, bool con, bool num, bool touch)
    : AbstractProduct(name, price, color)
{
    this->convertible = con;
    this->hasNumpad = num;
    this->touchscreen = touch;
}

string Notebook::ToString()
{
    std::stringstream ss;
    ss << "Product is " << this->name << ", it is notebook and ";
    std::string s = ss.str();
    s.append(this->convertible ? "is convertible" : "is not convertible");
    return s;
}
