/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:34 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/12 18:52:06 by pmaldagu         ###   ########.fr       */
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
	std::cout << "first name: ";
	if (!(std::cin >> first_name))
	{
		std::cin.clear();
    	std::cout << std::endl;
	}
	std::cout << "last name: ";
	if (!(std::cin >> last_name))
		return ;
	std::cout << "nickname: ";	
	if (std::cin >> nickname && std::cin.eof())
		return ;
	std::cout << "login: ";
	if (std::cin >> login && std::cin.eof())
		return ;
	std::cout << "postal address: ";
	if (std::cin >> postal_addr && std::cin.eof())
		return ;
	std::cout << "email address: ";
	if (std::cin >> email && std::cin.eof())
		return ;
	std::cout << "phone number: ";
	if (std::cin >> phone_num && std::cin.eof())
		return ;
	std::cout << "birthday date: ";
	if (std::cin >> birthday && std::cin.eof())
		return ;
	std::cout << "favorite meal: ";
	if (std::cin >> fav_meal && std::cin.eof())
		return ;
	std::cout << "underwear color: ";
	if (std::cin >> underwear_c && std::cin.eof())
		return ;
	std::cout << "darkest secret: ";
	if (std::cin >> darkest_secret && std::cin.eof())
		return ;
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
