/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/07 14:58:08 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
}

AMateria::AMateria( AMateria const & src )
{
	this->_type = src._type;
}

AMateria::~AMateria( void )
{
}

std::string const & AMateria::getType( void ) const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
