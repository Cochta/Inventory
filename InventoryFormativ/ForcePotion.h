#pragma once
#include "Potion.h"

class ForcePotion : public Potion
{
public:
	ForcePotion(int _value, std::string _name);
	void Use() override;
};

