/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:25:44 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 18:16:09 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle", 5, 21)
{
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
