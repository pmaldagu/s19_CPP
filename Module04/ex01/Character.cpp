/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:00:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/30 12:17:00 by pmaldag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
}

Character::Character( std::string const & name )
{
	this->_name = name;
	this->_ap = 40;
	this->_equip = nullptr;

	return;
}

Character::Character( std::string const & name, int ap, AWeapon* weapon)
{
	this->_name = name;
	this->_ap = ap;
	this->_equip = weapon;
	std::cout << "Parametric Constructor called" << std::endl;

	return;
}

Character::Character( Character const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Character::~Character( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

Character & Character::operator=( Character const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src.getName();
	this->_ap = src.getAP();

	return *this;
}

std::string const Character::getName( void ) const
{
	return this->_name;
}

int Character::getAP( void ) const
{
	return this->_ap;
}

AWeapon* Character::getWeapon( void ) const
{
	return this->_equip;
}

void Character::equip( AWeapon* weapon)
{
	this->_equip = weapon;

	return;
}

void Character::attack( Enemy* enemy )
{
	if (!this->_equip)
		return;
	if (this->_equip->getAPCost() > this->_ap )
		std::cout << "Not enough AP to attack" << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " 
			<< this->_equip->getName() << std::endl;
		this->_equip->attack();
		this->_ap -= this->_equip->getAPCost();
		enemy->takeDamage( this->_equip->getDamage());
	}
	if ( enemy->getHP() == 0 )
		delete enemy;

	return;
}

void Character::recoverAP ( void )
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

std::ostream & operator<<( std::ostream & o, Character & rhs )
{
	o << rhs.getName() << " has " << rhs.getAP() << " AP";
	if (rhs.getWeapon())
		o << " and wields a " << rhs.getWeapon()->getName();
	else
		o << " and is unarmed";
	o << std::endl;

	return o;
}
