//
// Created by Arshavin Bernita on 7/19/22.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


Brain::Brain(const Brain & copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	(*this) = copy;
}

Brain & Brain::operator= (const Brain & other)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
	return (*this);
}
