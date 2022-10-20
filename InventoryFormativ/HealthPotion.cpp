#include "HealthPotion.h"

#include <iostream>

HealthPotion::HealthPotion(int _value, std::string _name) : Potion(_value, _name)
{
}

void HealthPotion::Use()
{
	std::cout << "You recover " << value << " health points." << std::endl;
}
