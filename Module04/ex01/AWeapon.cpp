/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:00:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 13:39:35 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
	//std::cout << "Default Constructor called" << std::endl;

	return;
}

AWeapon::AWeapon( std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	//std::cout << "Parametric Constructor called" << std::endl;

	return;
}

AWeapon::AWeapon( AWeapon const & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

AWeapon::~AWeapon( void )
{
	//std::cout << "Destructor called" << std::endl;
	
	return;
}

AWeapon & AWeapon::operator=( AWeapon const & src)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();

	return *this;
}

std::string const AWeapon::getName( void ) const
{
	return this->_name;
}

int AWeapon::getAPCost( void ) const
{
	return this->_apcost;
}

int AWeapon::getDamage( void ) const
{
	return this->_damage;
}
