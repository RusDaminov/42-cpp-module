#include "ScavTrap.hpp"

int main()
{
	ScavTrap one("Biba");
	std::cout << std::endl;

	ScavTrap two(one);
	std::cout << two <<std::endl;
	std::cout << std::endl;

	ScavTrap three("Boba");
	std::cout << std::endl;

	three.attack("Fire");
	two.takeDamage(5);
	one.attack("Ice");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}