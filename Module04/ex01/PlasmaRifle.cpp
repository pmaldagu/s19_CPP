/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:25:44 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 17:29:25 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon()
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

PlasmaRifle::AWEapon( std::string const & name, int apcost, int damage) : 
	AWeapon(name, apcost, damage)
{
	std::cout << "Parametric Constructor called" << std::endl;

	return;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

PlasmaRifle::~PlasmaRifle( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();

	return *this;
}

void PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;

	return;
}
