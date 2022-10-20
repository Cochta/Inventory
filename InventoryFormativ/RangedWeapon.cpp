#include "RangedWeapon.h"

#include <iostream>


RangedWeapon::RangedWeapon(int _value, std::string _name) : Weapon(_value, _name)
{
}

void RangedWeapon::Use()
{
	std::cout << "You deal " << std::to_string(value) << " ranged damages." << std::endl;
}
