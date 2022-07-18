#include "ClapTrap.hpp"

int main()
{
	ClapTrap one("Abobus");
	ClapTrap two;
	ClapTrap three(one);

	one.attack("Bibobus");
	one.takeDamage(3);
	one.beRepaired(1);
	return (0);
}