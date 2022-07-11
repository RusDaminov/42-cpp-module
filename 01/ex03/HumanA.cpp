#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon1) : name(name), weapon1(weapon1){
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their "
			  << weapon1.getType() << std::endl;
}
