#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap one("Biba");
	std::cout << std::endl;
	FragTrap two("Boba");
	std::cout << std::endl;

	two.highFivesGuys();
	two.attack("Fire");
	two.takeDamage(5);
	one.attack("Ice");
	one.guardGate();
	std::cout << std::endl;

	return (0);
}