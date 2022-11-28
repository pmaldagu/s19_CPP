/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/07 15:10:49 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
}

Cure::Cure( Cure const & src ) : AMateria()
{
	*this = src;
}

Cure::~Cure( void )
{
}

Cure & Cure::operator=(Cure const & src)
{
	this->_type = src._type;

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
}

