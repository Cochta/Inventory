#include "Weapon.h"

#include <iostream>

Weapon::Weapon(int _value, std::string _name) : Item(_name)
{
	value = _value;
}

void Weapon::Equip()
{
	std::cout << GetName() << " is now equiped" << std::endl;
}
