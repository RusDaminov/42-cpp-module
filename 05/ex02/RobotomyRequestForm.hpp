//
// Created by Arshavin Bernita on 7/21/22.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm : public Form
{
private:
	std::string _target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(){};
	RobotomyRequestForm(const RobotomyRequestForm & copy);
	RobotomyRequestForm & operator= (const RobotomyRequestForm & copy);

	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
