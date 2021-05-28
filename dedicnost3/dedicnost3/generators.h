#pragma once
#include <string>
#include <iostream>

using std::string;

string gName()
{
	int random = rand() % 4;
	switch (random)
	{
		case 0:
			return "Radek";
		case 1:
			return "Ondrej";
		case 2:
			return "Mira";
		case 3:
			return "Patrik";
	}
}

string gDate()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "04.04.2000";
	case 1:
		return "12.9.1892";
	case 2:
		return "23.8.1989";
	case 3:
		return "07.12.2004";
	}
}

double gDouble()
{
	return rand() % 10000;
}

int gInt()
{
	return rand() % 10000;
}

string gPass()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "fdscagfercf890";
	case 1:
		return "lolollllllll";
	case 2:
		return "12308967";
	case 3:
		return "vdfcshe";
	}
}

string gPhoneName()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "OnePlus 990";
	case 1:
		return "iPhone 1010";
	case 2:
		return "Samsung Andromeda S90";
	case 3:
		return "Huawei 1";
	}
}

string gNoteName()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "Lenovo Legion";
	case 1:
		return "HP Business";
	case 2:
		return "Asus NotVivoBook";
	case 3:
		return "MagBook Earth";
	}
}

string gTabName()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "iBeg Air";
	case 1:
		return "Lenovo Cheap 900";
	case 2:
		return "Microsoft Underground";
	case 3:
		return "Huawei Tab";
	}
}

string gColor()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "cerna";
	case 1:
		return "stribrna";
	case 2:
		return "cervena";
	case 3:
		return "modra";
	}
}

string gNick()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "lolslayer97";
	case 1:
		return "earthcrusher69";
	case 2:
		return "beddestroyer89";
	case 3:
		return "appssurvivor62";
	}
}

string gCpu()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "exynos 9000000";
	case 1:
		return "M3";
	case 2:
		return "snapdragon 1";
	case 3:
		return "mediatek cheapo 09";
	}
}

bool gBool()
{
	int random = rand() % 2;
	switch (random)
	{
	case 0:
		return true;
	case 1:
		return false;
	}
}

string gAddress()
{
	int random = rand() % 4;
	switch (random)
	{
	case 0:
		return "Bila 97123";
	case 1:
		return "Ostravska 56";
	case 2:
		return "Draci lol 912";
	case 3:
		return "San Andreas 789";
	}
}