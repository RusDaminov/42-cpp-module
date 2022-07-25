//
// Created by Arshavin Bernita on 7/23/22.
//

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	&min(T &x, T &y)
{
	return ((x < y) ? x : y);
}

template <typename T>
T	&max(T &x, T &y)
{
	return ((x > y) ? x : y);
}
#endif
