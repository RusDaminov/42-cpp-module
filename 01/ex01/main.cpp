#include "Zombie.hpp"

int main()
{
	int N = 7;

	Zombie *arr = zombieHorde(N,"Uasya"); // выделение памяти и заполнение

	for (int i = 0; i < N; ++i)
		arr[i].announce(); //проверка что выделилось)

	delete[] arr;

	return (0);
}
