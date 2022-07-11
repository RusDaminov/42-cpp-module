#include "Zombie.hpp"

int main()
{
	Zombie *my = newZombie("Uasya");// на куче через функцию
	my->announce();
	delete my; // удаление Uasya

	randomChump("Biba"); // на стеке выделяется зомби

	Zombie two("Boba");//на стеке тоже самое что делает randomChump
	two.announce();
	return (0);
}
