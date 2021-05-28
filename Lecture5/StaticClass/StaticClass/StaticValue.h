#pragma once
class StaticValue
{
private:
	static int value;

public:
	static int getValue();
	static void setValue(int v);
};

