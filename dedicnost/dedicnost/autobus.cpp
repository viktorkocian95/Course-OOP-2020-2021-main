#include "autobus.h"
#include <iostream>

autobus::autobus(int ID, double usage, string type, string model, int floors, int stations, bool intercity)
{
	this->MoT::uniqueID = ID;
	this->MoT::capacity = 80;
	this->MoT::broken = false;
	this->MoT::hasAds = false;
	this->MoT::typeOfUse = 1;
	this->MoT::numberOfStations = stations;
	this->usagePerKm = usage;
	this->engineType = type;
	this->MoT::model = model;
	this->numberOfFloors = floors;
	this->intercity = intercity;
}

int autobus::GetID()
{
	return this->MoT::uniqueID;
}

void autobus::printBusInfo()
{
	cout << "This bus is model " << this->model << ", its usage per KM is " << this->usagePerKm << " and engine type is " << this->engineType << endl;
}

double autobus::calcUsage(int km)
{
	return this->usagePerKm * km;
}
