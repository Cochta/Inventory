#include "Inventory.h"
#include "algorithm"
#include <iostream>

#include "Map.h"
#include "Potion.h"
#include "Weapon.h"

struct IsGreater
{
	bool operator()(Item* lx, Item* rx) const {
		return lx->GetName() < rx->GetName();
	}
};

void Inventory::RemoveItem(Item* item)
{
	items.erase(remove(items.begin(), items.end(), item));

}

void Inventory::Add(Item* _item)
{
	items.emplace_back(_item);
	//std::sort(items.begin(), items.end(), IsGreater());
}

void Inventory::UseItem(Item* item)
{
	item->Use();
}

void Inventory::UseItem(Potion* item)
{
	item->Use();
	RemoveItem(item);
}

void Inventory::EquipWeapon(Weapon* item)
{
	item->Equip();
}

void Inventory::Print()
{
	int i = 0;
	for (auto item : items)
	{
		std::cout << i << ": " << item->GetName() << std::endl;
		i++;
	}
	std::cout << std::endl;
}
