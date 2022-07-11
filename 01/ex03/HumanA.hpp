#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
	std::string name;
	Weapon &weapon1;
	void attack();
	HumanA(std::string name, Weapon &weapon1);
	~HumanA(){};
	void setWeapon(Weapon &weapon);
};

#endif