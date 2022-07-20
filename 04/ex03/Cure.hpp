//
// Created by Arshavin Bernita on 7/19/22.
//

#ifndef CPP_CURE_HPP
#define CPP_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(const Cure & copy);
	Cure & operator= (const Cure & copy);

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_CURE_HPP
