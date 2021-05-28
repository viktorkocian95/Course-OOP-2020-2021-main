#pragma once
#include "MoT.h"

class autobus : public MoT
{
private:
	double usagePerKm;
	string engineType;
	int numberOfFloors;
	bool intercity;

public:
	autobus(int ID, double usage, string type, string model, int floors, int stations, bool intercity);
	int GetID();
	void printBusInfo();
	double calcUsage(int km);
};

