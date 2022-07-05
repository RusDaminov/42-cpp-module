#include "Zombie.hpp"

int main()
{
	Zombie *my = newZombie("Uasya");// на куче через функцию
	my->announce();
	delete my; // удаление Uasya

	randomChump("Valera"); // на стеке выделяется зомби

	Zombie two("Denis");//на стеке тоже самое что делает randomChump
//	two.set_name("as");
	two.announce();
	return (0);
}
