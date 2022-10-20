#include <iostream>
#include <string>

#include "ForcePotion.h"
#include "HealthPotion.h"
#include "Inventory.h"
#include "Map.h"
#include "MeleeWeapon.h"
#include "RangedWeapon.h"

int main()
{
	std::string castlePicture = R"(
 __________________________________
|               /\                 |
|              |  |                |
|             /    \               |
|        ____|  []  |____          |
|       |                |         |
|       |  []   __   []  |         |
|       |       ||       |         |
|__________________________________|
	)";

	std::string treasureMap = R"(
 __________________________________
|     \\    //                     |
|      \\  //                      |
|       \\//                       |
|        \ \   X                   |
|         \ \______________________|
|          \  _____________________|
|           \ \                    |
|__________________________________|
	)";
	std::string globalMap = R"(
 __________________________________
|                           o      |
|    o-------o              |      |
|            |              |      |
|            |              |      |
|            o--------------o      |
|            |                     |
|     o------o                     |
|__________________________________|
	)";
	Map* global = new Map(globalMap, "Global Map");
	Map* castle = new Map(castlePicture, "Castle Picture");
	Map* treasure = new Map(treasureMap, "Treasure Map");
	MeleeWeapon* sword = new MeleeWeapon(7, "Sword");
	RangedWeapon* bow = new RangedWeapon(4, "Bow");
	HealthPotion* minor = new HealthPotion(10, "Minor health potion");
	HealthPotion* moderate = new HealthPotion(15, "Moderate health potion");
	HealthPotion* large = new HealthPotion(20, "Large health potion");
	ForcePotion* strength = new ForcePotion(10, "Strength potion");
	Inventory inv;
	inv.Add(global);
	inv.Add(treasure);
	inv.Add(castle);
	inv.Add(sword);
	inv.Add(bow);
	inv.Add(minor);
	inv.Add(moderate);
	inv.Add(large);
	inv.Add(strength);

	std::string quit;

	for (int i = 0; i <= 9; ++i)
	{
		inv.Print();
		if (i == 0)
			inv.UseItem(global);
		else if (i == 1)
			inv.UseItem(treasure);
		else if (i == 2)
			inv.UseItem(castle);
		else if (i == 3)
			inv.UseItem(sword);
		else if (i == 4)
			inv.EquipWeapon(bow);
		else if (i == 5)
			inv.UseItem(minor);
		else if (i == 6)
			inv.UseItem(moderate);
		else if (i == 7)
			inv.UseItem(large);
		else if (i == 8)
			inv.UseItem(strength);
		std::cin.clear();
		std::cout << "enter any value to use or equip next item..." << std::endl;
		std::cin >> quit;
		system("cls");
	}


}
