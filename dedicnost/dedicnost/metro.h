#pragma once
#include "MoT.h"

using namespace std;

class metro : public MoT
{
private:
	string color;
	int floor;
	int numberOfWagons;
	int revision;
	bool hasSignal;

public:
	metro(int ID, int type, int stations, string model, string color, int floor, int wagons, int rev, bool signal);
	string GetColor();
	int GetFloor();
	int GetNumberOfWagons();
	int GetRevision();
};

