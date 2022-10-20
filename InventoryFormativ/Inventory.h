#pragma once
#include <vector>
#include "Item.h"
#include "Potion.h"
#include "Weapon.h"

class Inventory
{
private:
	void RemoveItem(Item* item);
public:
	std::vector<Item*> items;
	void Add(Item* _item);

	void UseItem(Item* item);
	void UseItem(Potion* item);
	void EquipWeapon(Weapon* item);

	void Print();
};
