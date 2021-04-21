/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 12:55:51 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : _hit( 100 ), _maxHit( 100 ), _en( 100 ), _maxEn( 100 ),
	_lvl( 1 ), _melDmg( 30 ), _rangDmg( 20 ), _armorDmg( 5 )
{
	std::cout << "FR4G-TP Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

FragTrap::FragTrap( std::string name ) : _name( name ), _hit( 100 ), _maxHit( 100 ),
   	_en( 100 ), _maxEn( 100 ), _lvl( 1 ), _melDmg( 30 ), _rangDmg( 20 ), _armorDmg( 5 )
{
	std::cout << "FR4G-TP with a name Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "FR4G-TP Copy constructor called" << std::endl;
	*this = src;

	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FR4G-TP Destructor called" << std::endl;
	
	return;
}

FragTrap & FragTrap::operator=( FragTrap const & src)
{
	std::cout << "FR4G-TP Assignation operator called" << std::endl;
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

std::ostream & operator<<( std::ostream & o, FragTrap const & src )
{
	o << src.getName();

	return o;
}

std::string FragTrap::getName( void ) const
{
	return this->_name;
}

void FragTrap::rangedAttack( std::string const & target )
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing "
		<< this->_rangDmg << " points of damage!" << std::endl;

	return;
}

void FragTrap::meleeAttack( std::string const & target )
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing "
		<< this->_melDmg << " points of damage!" << std::endl;

	return;
}

void FragTrap::takeDamage( unsigned int amount )
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
		std::cout << "FR4G-TP " << this->_name << " takes " << dmg << 
			" points of damage!" << std::endl;
	}
	else if (this->_hit == 0)
		std::cout << "FR4G-TP " << this->_name << " is already dead" << std::endl;
	else
		std::cout << "FR4G-TP " << this->_name << " felt nothing" << std::endl;

	return;
}

void FragTrap::beRepaired( unsigned int amount )
{
	int pnts;

	if ((int)amount > this->_maxHit || (int)amount < 0)
		amount = this->_maxHit;
	if ((this->_hit + amount) > this->_maxHit)
		pnts = this->_maxHit - this->_hit;
	else
		pnts = (int)amount;
	std::cout << "FR4G-TP " << this->_name << " is repaired, " << pnts << " points is gained"
		<< std::endl;

	return;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5];
	int index;

	attacks[0] = "ft_service";
	attacks[1] = "minishell";
	attacks[2] = "push_swap";
	attacks[3] = "ft_containers";
	attacks[4] = "transcendance";

	index = rand() % 5;
	if (this->_en < 25)
		std::cout << "FR4G-TP " << this->_name << " has not enough ernergy to attack" 
			<< std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with "
			<< attacks[index] << std::endl;
		this->_en -= 25;
	}
	
	return;
}
