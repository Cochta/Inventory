#pragma once
#include "Weapon.h"

class MeleeWeapon : public Weapon
{
private:

protected:

public:
	MeleeWeapon(int _value, std::string _name);
	void Use() override;
};

