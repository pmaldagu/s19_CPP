/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/13 11:27:04 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
	this->_xp = 0;
}

Ice::Ice( Ice const & src ) : AMateria( "ice" )
{
	this->_xp = src.getXP();

	return;
}

Ice::~Ice( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

Ice & Ice::operator=(Ice const & src)
{
	this->_xp = src.getXP();

	return *this;
}

AMateria* Ice::clone( void ) const
{
	Ice *clone;
	
	clone  = new Ice(*this);
	
	return ( clone );
}

void Ice::use( ICharacter & target )
{
	AMateria::use( target );

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return;
}

