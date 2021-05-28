#include "MoT.h"
#include <iostream>
#include <string>

using namespace std;

string MoT::owner = "DPO";
string MoT::depoLocation = "Sjizdna 420/69";
int MoT::depoID = 44;

int MoT::GetDepoID()
{
    return this->depoID;
}

int MoT::GetTypeOfUse()
{
    return this->typeOfUse;
}

int MoT::GetUniqueID()
{
    return this->uniqueID;
}

int MoT::GetNumberOfStations()
{
    return this->numberOfStations;
}

bool MoT::IsBroken()
{
    return this->broken;
}

bool MoT::_hasAds()
{
    return this->hasAds;
}

void MoT::printDepoInfo()
{
    cout << "Location of depo: " << this->depoLocation << " and ID is: " << this->depoID << endl;
}

string MoT::GetOwner()
{
    return this->owner;
}

string MoT::GetModel()
{
    return this->model;
}
