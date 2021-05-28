#pragma once
#include "MoT.h"


class tram : public MoT
{	
private:
	int typeOfRail;
	double electricityUsage;
	int numberOfWagons;
	int typeOfTrolleys;

public:
	tram(int ID, int type, double usage, int wagons, int stations, string model, int trolleyType);
	int GetType();
	double GetUsage();
	double CalcUsage(int km);
};

