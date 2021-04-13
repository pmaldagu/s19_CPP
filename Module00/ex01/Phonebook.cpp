/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:24:27 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 13:47:29 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

Phonebook::Phonebook()
{
	entry = -1;	
}

Phonebook::~Phonebook()
{	
}

void Phonebook::add()
{
	entry++;
	if (entry > 7)
		std::cout << "Phonebook is full" << std::endl;
	else
		contacts[entry].set_values();
}

void Phonebook::search()
{
	std::string	input;
	int index;
	int i;

	this->print();
	if (entry < 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	while (1)
	{
		std::cout << "Index: ";
		std::cin >> input;
 		if(!std::cin)
         	exit(0);
		i = 0;
		while(input[i])
		{
			if (std::isdigit(input[i]))
				break;
			i++;
		}
		if (input[i])
			index = std::stoi(input);
		if (index > 0 && index < 9 && index <= entry + 1)
				break;
		std::cout << "Wrong input, try again\n";
	}
	contacts[index - 1].display_info();
}

void Phonebook::print()
{
	int i;
	std::string tmp;

	i = 0;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (i < 8 && i <= entry)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		tmp = contacts[i].get_first_name();
		std::cout << std::setw(10) << tmp << "|";
		tmp = contacts[i].get_last_name();
		std::cout << std::setw(10) << tmp << "|";
		tmp = contacts[i].get_nickname();
		std::cout << std::setw(10) << tmp << std::endl;
		i++;
	}
}
