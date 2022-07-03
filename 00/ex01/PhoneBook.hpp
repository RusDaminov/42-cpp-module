#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact		bool[8];
	int 		count;

	int 		read_str(std::string enter, int flag, Contact person[8], int i);
	std::string number_list(int i)
};



#endif
