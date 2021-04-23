/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:14:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:44:52 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( void )
{
	std::cout << "Some random victim just appeared" << std::endl;

	return;
}

Victim::Victim( std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!"
		<< std::endl;

	return;
}

Victim::Victim( Victim const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" 
		<< std::endl;
	
	return;
}

Victim & Victim::operator=( Victim const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;

	return *this;
}

void Victim::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!"
		<< std::endl;

	return;
}

std::string Victim::getName( void ) const
{
	return this->_name;
}

std::ostream & operator<<( std::ostream & o, Victim & src )
{
	o << "I'm " << src.getName() << " and I like otters!" << std::endl;

	return o;
}

