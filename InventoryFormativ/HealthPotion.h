#pragma once
#include "Potion.h"

class HealthPotion : public Potion
{
public:
	HealthPotion(int _value, std::string _name);
	void Use() override;
};

