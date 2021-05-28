#pragma once
#include <string>

using namespace std;

class MoT
{
public:
	int capacity;
	bool broken;
	bool hasAds;
	int typeOfUse;		// ground, rails, water...
	long uniqueID;
	int numberOfStations;
	string model;

	void printDepoInfo();
	string GetOwner();
	string GetModel();
	int GetDepoID();
	int GetTypeOfUse();
	int GetUniqueID();
	int GetNumberOfStations();
	bool IsBroken();
	bool _hasAds();

	static string owner;
	static string depoLocation;
	static int depoID;
};

