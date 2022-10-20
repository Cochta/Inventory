#pragma once
#include "Item.h"

class Potion : public Item
{
private:

protected:
	int value;
	Potion(int _value, std::string _name);
public:

};

