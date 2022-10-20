#pragma once
#include "Weapon.h"

class RangedWeapon : public Weapon
{
private:

protected:
	
public:
	RangedWeapon(int _value, std::string _name);
	void Use() override;
};

