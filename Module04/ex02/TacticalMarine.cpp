/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/30 16:02:42 by pmaldag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;

	return;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh..." << std::endl;
	
	return;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	//this->_n = src.getRawBits();

	return *this;
}

void TacticalMarine::battlecry( void ) const
{
	std::cout << "For the holy PLOT!" << std::endl;

	return;
}

void TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;

	return;
}
void TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;

	return;
}

