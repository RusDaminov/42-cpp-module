//
// Created by Arshavin Bernita on 7/21/22.
//

#include "Form.hpp"

Form::Form() : _name(""), _sign(false), _gradeExec(150), _gradeSign(150)
{}

Form::Form(std::string name, int gradeSign, int gradeExec) :
	_name(name), _sign(false), _gradeExec(gradeExec), _gradeSign(gradeSign)
{
	if (_gradeExec <= 0 || _gradeSign <= 0)
		throw Form::GradeTooHighException();
	if (_gradeExec > 150 || _gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & copy) : _name(copy._name), _sign(false),
	_gradeExec(copy._gradeExec), _gradeSign(copy._gradeSign)
{
	(*this) = copy;
}

Form & Form::operator=(Form const & copy)
{
	if (this == &copy)
		return (*this);
	const_cast<std::string &>(this->_name) = copy._name;
	const_cast<int &>(this->_gradeSign) = copy._gradeSign;
	const_cast<int &>(this->_gradeExec) = copy._gradeExec;
	this->_sign = copy._sign;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

int			Form::getGradeExec() const
{
	return (this->_gradeExec);
}

int			Form::getGradeSign() const
{
	return (this->_gradeSign);
}
bool		Form::getSign() const
{
	return (this->_sign);
}

void	Form::beSigned(Bureaucrat & bur)
{
	if (bur.getGrade() <= this->_gradeSign)
	{
		if (this->_sign == true)
			throw (RED"The Form already signed!"RESET);
		this->_sign = true;
		std::cout << GREEN << "* The Form " << this->getName() << " is signed *" << RESET << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (MAGENTA"The Grade Form is too high!\n"RESET);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (MAGENTA"The Grade Form is too low!\n"RESET);
}

std::ostream& operator<< (std::ostream &out, const Form &form)
{
	out << CYAN << "Name form: " << form.getName() << "\nSign: " << form.getSign() << "\nGrade to Sign: " <<
		form.getGradeSign() << "\nGrade to Execute: " << form.getGradeExec() << RESET;
	return (out);
}