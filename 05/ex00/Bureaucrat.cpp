//
// Created by Arshavin Bernita on 7/21/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int range) : _name(name), _grade(range)
{
	if (range > 150)
		throw Bureaucrat::GradeTooLowException();
	if (range < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	(*this) = copy;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat & copy)
{
	if (this == &copy)
		return (*this);
	const_cast<std::string &>(this->_name) = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

void Bureaucrat::incGrade() // 150-маленький, 1- высокий. (3 + 1 = 2)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The Grade Bureaucrat is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Grade Bureaucrat is too low!");
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bur)
{
	out << "<" << bur.getName() << ">, bureaucrat grade <" << bur.getGrade() << ">";
	return (out);
}