#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon2 = &weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << weapon2->getType()
			  << std::endl;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB() {

}
