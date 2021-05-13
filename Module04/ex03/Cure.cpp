/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/13 11:34:12 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
	this->_xp = 0;
}

Cure::Cure( Cure const & src ) : AMateria( "cure" )
{
	this->_xp = src.getXP();

	return;
}

Cure::~Cure( void )
{
	
	return;
}

Cure & Cure::operator=(Cure const & src)
{
	this->_xp = src.getXP();

	return *this;
}

AMateria* Cure::clone( void ) const
{
	Cure *clone;
	
	clone  = new Cure(*this);
	
	return ( clone );
}

void Cure::use( ICharacter & target )
{
	AMateria::use( target );

	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;

	return;
}

