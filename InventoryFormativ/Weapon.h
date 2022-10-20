#pragma once
#include "Item.h"

class Weapon : public Item
{
private:

protected:
	int value;

public:
	void Equip();
	Weapon(int _value, std::string _name);
};

