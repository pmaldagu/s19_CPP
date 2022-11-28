/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:36:19 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/20 18:56:14 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." <<std::endl;
	std::cout << "I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain ( std::string level )
{
	int i;

	i = 0;
	std::string name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*lvls[4])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	while (i < 4 && name[i] != level)
		i++;
	if (name[i] == level)
		(this->*lvls[i])();

}
