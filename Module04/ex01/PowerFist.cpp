/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:25:44 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 17:35:10 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon( "Power Fist", 8, 50 )
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

PowerFist::PowerFist( PowerFist const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

PowerFist::~PowerFist( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

PowerFist & PowerFist::operator=( PowerFist const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	//this->_name = src.getName();
	//this->_apcost = src.getAPCost();
	//this->_damage = src.getDamage();
	AWeapon::operator=( src );

	return *this;
}

void PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;

	return;
}
