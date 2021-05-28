#include "StaticValue.h"

int StaticValue::value = 0;

int StaticValue::getValue()
{
	return StaticValue::value;
}

void StaticValue::setValue(int v)
{
	StaticValue::value = v;
}
