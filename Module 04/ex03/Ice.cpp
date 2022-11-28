/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/07 15:10:39 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
}

Ice::Ice( Ice const & src ) : AMateria()
{
	*this = src;
}

Ice::~Ice( void )
{
}

Ice & Ice::operator=(Ice const & src)
{
	this->_type = src._type;

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
}
