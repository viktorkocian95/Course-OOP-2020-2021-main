#pragma once
#include "KeyValue.h"

class KeyValues
{
private:
	KeyValue* person;
	KeyValue** keyValues;
	int count;

public:
	KeyValues(int n);
	~KeyValues();
	KeyValue* Create(int k, double v);
	KeyValue* Search(int k);
	KeyValue* Remove(int k);
	int GetCount();
};

