#include <iostream>
#include "Weapon.hpp"

const std::string Weapon::getType(){
	return type;
}

Weapon::Weapon(std::string type){
	this->type = type;
}

void Weapon::setType(std::string type){
	this->type = type;
}
