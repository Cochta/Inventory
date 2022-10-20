#include "ForcePotion.h"

#include <iostream>

ForcePotion::ForcePotion(int _value, std::string _name) : Potion(_value, _name)
{
}

void ForcePotion::Use()
{
	std::cout << "You gain " << value << " strength." << std::endl;
}
