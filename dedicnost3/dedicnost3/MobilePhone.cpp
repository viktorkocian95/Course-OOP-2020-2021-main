#include "MobilePhone.h"
#include <sstream>

MobilePhone::MobilePhone(string name, double price, string color, int mpix, double size, string cpu)
    : AbstractProduct(name, price, color)
{
    this->mpix = mpix;
    this->size = size;
    this->cpuname = cpu;
}

string MobilePhone::ToString()
{
    std::stringstream ss;
    ss << "Product is " << this->name << ", it is phone and has " << this->mpix << " mpix";
    std::string s = ss.str();
    return s;
}
