#include "UnregistredUser.h"
#include <string>
#include <sstream>

using std::string;

string ipGenerator()
{
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:
		return "129.298.1.910";
	case 1:
		return "126.109.3.120";
	case 2:
		return "109.38.2.543";
	}
}


UnregistredUser::UnregistredUser(string name, string date, string address) : AbstractCustomer(name, date, address)
{
	srand(time(NULL));

	this->ipAddress = ipGenerator();
	this->tempID = rand() % 10000;
}

string UnregistredUser::ToString()
{
	std::stringstream ss;
	ss << "Name is " << this->name << ", is unregistered and user's IP address is " << this->ipAddress << " with temp ID " << this->tempID;
	std::string s = ss.str();
	return s;
}
