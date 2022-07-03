/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:41:15 by abernita          #+#    #+#             */
/*   Updated: 2022/07/03 14:52:17 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <locale>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char)std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}