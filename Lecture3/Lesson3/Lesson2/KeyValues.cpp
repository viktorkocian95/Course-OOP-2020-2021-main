#include "KeyValues.h"

KeyValues::KeyValues(int n)
{
	this->keyValues = new KeyValue * [n];
	this->count = 0;
}

KeyValues::~KeyValues()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->keyValues[i];
	}

	delete[] this->keyValues;
}

KeyValue* KeyValues::Create(int k, double v)
{
	KeyValue* kvp = new KeyValue(k, v);

	this->keyValues[this->count] = kvp;
	this->count += 1;

	return kvp;
}

KeyValue* KeyValues::Search(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			return this->keyValues[i];
		}
	}

	return nullptr;
}

KeyValue* KeyValues::Remove(int k)
{
	KeyValue* removedKey = nullptr;

	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			removedKey = this->keyValues[i];

			// Assign the next element to current location.        
			for (int j = i; j < this->count - 1; j++)
			{     
				this->keyValues[j] = this->keyValues[j + 1];
			}

			this->count -= 1;
			return removedKey;
		}
	}

	return nullptr;
}

int KeyValues::GetCount()
{
	return this->count;
}
