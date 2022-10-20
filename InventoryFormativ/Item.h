#pragma once
#include <string>

class Item
{
private:
	std::string name;
protected:
	Item(std::string _name);
public:
	virtual void Use() = 0;
	std::string GetName() { return name; }
};

