/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:34 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/21 15:52:49 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
#include <ios>
#include <limits>


Contact::Contact()
{	
}

Contact::~Contact()
{	
}

void Contact::set_values()
{
	std::getline(std::cin, first_name);
	std::cout << "first name: ";
	if (!(std::getline(std::cin, first_name)))
		exit(0);
	std::cout << "last name: ";
	if (!(std::getline(std::cin, last_name)))
		exit(0);
	std::cout << "nickname: ";	
	if (!(std::getline(std::cin, nickname)))
		exit(0);
	std::cout << "phone number: ";
	if (!(std::getline(std::cin, phone_num)))
		exit(0);
	std::cout << "darkest secret: ";
	if (!(std::getline(std::cin, darkest_secret)))
		exit(0);
}

void Contact::display_info()
{
	std::cout << "first name: " << first_name << std::endl;
	std::cout << "last name: " << last_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;	
	std::cout << "phone number: " << phone_num << std::endl;
	std::cout << "darkest secret: " << darkest_secret << std::endl;
}

std::string Contact::get_first_name()
{
	std::string tmp;

	tmp = first_name;
	if (tmp.length() > 10)
        tmp[9] = '.';
	return (tmp.substr(0, 10));
}

std::string Contact::get_last_name()
{
	std::string tmp;

	tmp = last_name;
	if (tmp.length() > 10)
        tmp[9] = '.';
	return (tmp.substr(0, 10));
}

std::string Contact::get_nickname()
{
	std::string tmp;

	tmp = nickname;
	if (tmp.length() > 10)
        tmp[9] = '.';
	return (tmp.substr(0, 10));
}
