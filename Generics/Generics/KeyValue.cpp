#include "KeyValue.h"

KeyValue::KeyValue(int k, int v)
{
	this->key = k;
	this->value = v;
}

int KeyValue::GetValue()
{
	return this->value;
}

int KeyValue::GetKey()
{
	return this->key;
}
