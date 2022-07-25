//
// Created by Arshavin Bernita on 7/23/22.
//

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, int size, void (*f)(T const &val))
{
	for (int i = 0; i < size; i++)
		(*f)(arr[i]);
}

template <typename T>
void print(T const &val)
{
	std::cout << val << std::endl;
}

#endif
