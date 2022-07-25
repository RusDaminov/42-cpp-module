//
// Created by Arshavin Bernita on 7/23/22.
//

#ifndef CASTS_HPP
#define CASTS_HPP

#include <iostream>
#include <sstream>

class Casts
{
	public:
		Casts();
		Casts( const std::string Number );
		Casts( const Casts & src);
		~Casts();
		Casts & operator = ( const Casts & rhs );
		class ArgsError: public std::exception
		{
			virtual const char* what() const throw();
		};
		char	getType() const;
		int		getIntForm() const;
		char	getCharForm() const;
		float	getFloatForm() const;
		double	getDoubleForm() const;

		void	FromInt();
		void	FromChar();
		void	FromFloat();
		void	FromDouble();

		std::string	print( int type, std::string Number );
		std::string printFloat( std::string Number );
		std::string printDouble( std::string Number );
	
	private:
		char	_Type;
		int		_IntForm;
		char	_CharForm;
		float	_FloatForm;
		double	_DoubleForm;
};

int		ErrorCheck( char type, const std::string & Number );
char	Parsing( const std::string & Number );
int		count_digit( int number );

#endif
