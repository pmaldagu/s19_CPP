/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:18:54 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:55:44 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rat.hpp"

Rat::Rat( void ) : Victim()
{
	std::cout << "Miouw miouw." << std::endl;

	return;
}

Rat::Rat( std::string name) : Victim( name )
{
	std::cout << "Miouw Miow." << std::endl;

	return;
}

Rat::Rat( Rat const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Rat::~Rat( void )
{
	std::cout << "Croucch..."<< std::endl;
	
	return;
}

Rat & Rat::operator=( Rat const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	
	return *this;
}

void Rat::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a big f**** swan!" << std::endl;

	return;
}
