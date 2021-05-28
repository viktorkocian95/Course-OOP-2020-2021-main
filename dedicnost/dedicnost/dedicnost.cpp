#include <iostream>
#include "MoT.h"
#include "autobus.h"
#include "tram.h"
#include "metro.h"

int main()
{
    autobus* bus = new autobus(69, 214.78, "diesel", "Skoda 124", 2, 25, false);
    tram* tramvaj = new tram(6789075, 2, 250, 2, 14, "Tramka 67", 4);
    metro* metro1 = new metro(89798, 2, 21, "Skoda 4", "blue", 2, 4, 1, true);
    tramvaj->printDepoInfo();
    bus->printBusInfo();
    cout << metro1->GetNumberOfStations() << endl;
    cout << bus->GetModel() << endl;
    cout << bus->GetID() << endl;
    std::cout << "Hello World!\n";
}