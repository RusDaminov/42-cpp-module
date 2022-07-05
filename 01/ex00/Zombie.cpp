#include "Zombie.hpp"

Zombie::Zombie(std::string name_zombie) : name(name_zombie)
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> Destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
	return (this->name);
}