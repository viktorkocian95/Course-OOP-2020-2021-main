#include "metro.h"

metro::metro(int ID, int type, int stations, string model, string color, int floor, int wagons, int rev, bool signal)
{  
    this->MoT::uniqueID = ID;
    this->MoT::capacity = 70;
    this->MoT::broken = false;
    this->MoT::hasAds = false;
    this->MoT::typeOfUse = 3;
    this->MoT::numberOfStations = stations;
    this->MoT::model = model;
    this->color = color;
    this->floor = floor;
    this->numberOfWagons = wagons;
    this->revision = rev;
    this->hasSignal = signal;
}

string metro::GetColor()
{
    return this->color;
}

int metro::GetFloor()
{
    return this->floor;
}

int metro::GetNumberOfWagons()
{
    return this->numberOfWagons;
}

int metro::GetRevision()
{
    return this->revision;
}
