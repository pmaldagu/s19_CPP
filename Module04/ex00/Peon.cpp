/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:18:54 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:55:24 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( void ) : Victim()
{
	std::cout << "Zog zog." << std::endl;

	return;
}

Peon::Peon( std::string name) : Victim( name )
{
	std::cout << "Zog zog." << std::endl;

	return;
}

Peon::Peon( Peon const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..."<< std::endl;
	
	return;
}

Peon & Peon::operator=( Peon const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	
	return *this;
}

void Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;

	return;
}
