#pragma once
#include "Item.h"
#include <string>

class Map : public Item
{
private:
	std::string content;
protected:

public:
	Map(std::string_view _content, std::string _name);
	void Use() override;
};

