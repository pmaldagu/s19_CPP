/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:54:45 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 13:18:28 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	int i;
	std::string input;
	Phonebook tmp;
	char endl;

	while (1)
	{
		i = -1;
		std::cout << "Please enter EXIT, ADD or SEARCH:" << std::endl;
		if(!(std::cin >>input))
			return (0);
		while (input[++i])
			input[i] = std::toupper(input[i]);
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			tmp.add();
		else if (input == "SEARCH")
			tmp.search();
		else
			std::cout << "Wrong input, try again" << std::endl;
	}
	return (0);
}
