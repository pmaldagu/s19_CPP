/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/07 15:38:08 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type )
{
	this->_type = type;

	return;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;

	return;
}

AMateria::~AMateria( void )
{
	return;
}

std::string const & AMateria::getType( void ) const
{
	return this->_type;
}

unsigned int AMateria::getXP( void ) const
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Use a Materia at " << target.getName() << std::endl;
	
	return;
}
