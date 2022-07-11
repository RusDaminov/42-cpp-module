#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
	std::string name;
	Weapon *weapon2;
	void attack();
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
};

#endif
