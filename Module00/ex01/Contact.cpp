/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:34 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 13:11:58 by pmaldagu         ###   ########.fr       */
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
	std::cout << "login: ";
	if (!(std::getline(std::cin, login)))
		exit(0);
	std::cout << "postal address: ";
	if (!(std::getline(std::cin, postal_addr)))
		exit(0);
	std::cout << "email address: ";
	if (!(std::getline(std::cin, email)))
		exit(0);
	std::cout << "phone number: ";
	if (!(std::getline(std::cin, phone_num)))
		exit(0);
	std::cout << "birthday date: ";
	if (!(std::getline(std::cin, birthday)))
		exit(0);
	std::cout << "favorite meal: ";
	if (!(std::getline(std::cin, fav_meal)))
		exit(0);
	std::cout << "underwear color: ";
	if (!(std::getline(std::cin, underwear_c)))
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
	std::cout << "login: " << login << std::endl;
	std::cout << "postal adress: " << postal_addr << std::endl;
	std::cout << "email: " << email << std::endl;
	std::cout << "phone number: " << phone_num << std::endl;
	std::cout << "birthday date: " << birthday << std::endl;
	std::cout << "favorite meal: " << fav_meal << std::endl;
	std::cout << "underwear color: " << underwear_c << std::endl;
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
