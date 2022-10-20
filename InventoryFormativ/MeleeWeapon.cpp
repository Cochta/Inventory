#include "MeleeWeapon.h"

#include <iostream>

MeleeWeapon::MeleeWeapon(int _value, std::string _name) : Weapon(_value, _name)
{
}

void MeleeWeapon::Use()
{
	std::cout << "You deal " << std::to_string(value) << " melee damages." << std::endl;
}
