/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:04:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 13:25:45 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : _hit( 100 ), _maxHit( 100 ), _en( 50 ), _maxEn( 50 ),
	_lvl( 1 ), _melDmg( 20 ), _rangDmg( 15 ), _armorDmg( 3 )
{
	std::cout << "SC4V-TP Default Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

ScavTrap::ScavTrap( std::string name ) : _name( name ), _hit( 100 ), _maxHit( 100 ),
   	_en( 50 ), _maxEn( 50 ), _lvl( 1 ), _melDmg( 20 ), _rangDmg( 15 ), _armorDmg( 3 )
{
	std::cout << "SC4V-TP with a name Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "SC4V-TP Copy constructor called" << std::endl;
	*this = src;

	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "SC4V-TP Destructor called" << std::endl;
	
	return;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src)
{
	std::cout << "SC4V-TP Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hit = src._hit;
	this->_maxHit = src._maxHit;
	this->_en = src._en;
	this->_maxEn = src._maxEn;
	this->_lvl = src._lvl;
	this->_melDmg = src._melDmg;
	this->_rangDmg = src._rangDmg;
	this->_armorDmg = src._armorDmg;	

	return *this;
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & src )
{
	o << src.getName();

	return o;
}

std::string ScavTrap::getName( void ) const
{
	return this->_name;
}

void ScavTrap::rangedAttack( std::string const & target )
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing "
		<< this->_rangDmg << " points of damage!" << std::endl;

	return;
}

void ScavTrap::meleeAttack( std::string const & target )
{
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing "
		<< this->_melDmg << " points of damage!" << std::endl;

	return;
}

void ScavTrap::takeDamage( unsigned int amount )
{
	int dmg;

	if ((int)amount > this->_maxHit || (int)amount < 0)
		amount = this->_maxHit + this->_armorDmg;
	dmg = (int)amount - this->_armorDmg;
	if ((int)amount > this->_armorDmg && this->_hit > 0)
	{
		if (dmg > this->_hit)
			dmg = this->_hit;
		this->_hit -= dmg;
		std::cout << "SC4V-TP " << this->_name << " takes " << dmg << 
			" points of damage!" << std::endl;
	}
	else if (this->_hit == 0)
		std::cout << "SC4V-TP " << this->_name << " is already dead" << std::endl;
	else
		std::cout << "SC4V-TP " << this->_name << " felt nothing" << std::endl;

	return;
}

void ScavTrap::beRepaired( unsigned int amount )
{
	int pnts;

	if ((int)amount > this->_maxHit || (int)amount < 0)
		amount = this->_maxHit;
	if ((this->_hit + amount) > this->_maxHit)
		pnts = this->_maxHit - this->_hit;
	else
		pnts = (int)amount;
	std::cout << "SC4V-TP " << this->_name << " is repaired, " << pnts << " points is gained"
		<< std::endl;

	return;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5];
	int index;

	challenges[0] = "fail libft";
	challenges[1] = "write get_next_line with a buffer of -1";
	challenges[2] = "do netwhat with no key";
	challenges[3] = "do ft_printf with all %";
	challenges[4] = "do ft_server without template";

	index = rand() % 5;
	std::cout << "SC4V-TP " << this->_name << " challenge " << target << " with: "
		<< challenges[index] << std::endl;
	
	return;
}
