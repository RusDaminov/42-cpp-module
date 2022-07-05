#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA valera("Valera", club);
		valera.attack();
		club.setType("some other type of club");
		valera.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB aydar("Aydar");
		aydar.attack(); // посмотреть, что Aydar без оружия выводит тогда как Valera всегда имеет
		aydar.setWeapon(club);
		aydar.attack();
		club.setType("some other type of club");
		aydar.attack();
	}
	return (0);
}

