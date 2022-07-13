//
// Created by Ruslan Daminov on 13.07.2022.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
//	this->_hitpoints = 100;
	this->_energy_points = 50;
//	this->_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called " << name << std::endl;
//	this->_hitpoints = 100;
	this->_energy_points = 50;
//	this->_damage = 20;
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	(*this) = copy;
}

ScavTrap & ScavTrap::operator= (ScavTrap & other)
{
	this->_name = other.getName();
	this->_hitpoints = other.getPoints();
	this->_energy_points = other.getEnergy();
	this->_damage = other.getDamage();
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_damage <<
			  " points of damage!!!" <<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode." << std::endl;
}

std::string ScavTrap::getName() const
{
	return (this->_name);
}

int 		ScavTrap::getPoints() const
{
	return (this->_hitpoints);
}

int 		ScavTrap::getEnergy() const
{
	return (this->_energy_points);
}

int 		ScavTrap::getDamage() const
{
	return (this->_damage);
}