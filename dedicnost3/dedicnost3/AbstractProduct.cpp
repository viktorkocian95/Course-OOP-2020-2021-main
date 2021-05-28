#include "AbstractProduct.h"


AbstractProduct::AbstractProduct(string name, double price, string color)
{
    this->name = name;
    this->price = price;
    this->color = color;
}

string AbstractProduct::GetName()
{
    return this->name;;
}

double AbstractProduct::GetPrice()
{
    return this->price;
}

string AbstractProduct::GetColor()
{
    return this->color;
}
