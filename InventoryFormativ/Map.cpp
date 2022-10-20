#include "Map.h"
#include <iostream>

Map::Map(std::string_view _content, std::string _name) : Item(_name)
{
	content = _content;
}

void Map::Use()
{
	std::cout << content << std::endl;
}
