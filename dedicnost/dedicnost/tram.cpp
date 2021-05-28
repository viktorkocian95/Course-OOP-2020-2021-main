#include "tram.h"
#include "MoT.h"

tram::tram(int ID, int type, double usage, int wagons, int stations, string model, int typeTrolleys)
{
	this->MoT::uniqueID = ID;
	this->MoT::capacity = 70;
	this->MoT::broken = false;
	this->MoT::hasAds = false;
	this->MoT::typeOfUse = 3;
	this->MoT::numberOfStations = stations;
	this->MoT::model = model;
	this->typeOfRail = type;
	this->electricityUsage = usage;
	this->numberOfWagons = wagons;
	this->typeOfTrolleys = typeTrolleys;
}

int tram::GetType()
{
	return this->typeOfRail;
}

double tram::GetUsage()
{
	return this->electricityUsage;
}

double tram::CalcUsage(int km)
{
	return this->electricityUsage * km;
}