/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 17:32:40 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "CL4P-TP Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

ClapTrap::ClapTrap( std::string name ) : _name( name )
{
	std::cout << "CL4P-TP Constructor called" << std::endl;
	srand(time(NULL));

	return;
}


ClapTrap::ClapTrap( std::string name, int hit, int maxHit, int en, int maxEn, 
		int lvl, int melDmg, int rangDmg, int armorDmg ) : _name( name ), 
	_hit( hit ), _maxHit( maxHit ), _en( en ), _maxEn( maxEn ), _lvl( lvl ), 
	_melDmg( melDmg ), _rangDmg( rangDmg ), _armorDmg( armorDmg)
{
	std::cout << "CL4P-TP with a name Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

ClapTrap::ClapTrap( int hit, int maxHit, int en, int maxEn, 
		int lvl, int melDmg, int rangDmg, int armorDmg ) : _hit( hit ), 
	_maxHit( maxHit ), _en( en ), _maxEn( maxEn ), _lvl( lvl ), 
	_melDmg( melDmg ), _rangDmg( rangDmg ), _armorDmg( armorDmg)
{
	std::cout << "CL4P-TP with a name Constructor called" << std::endl;
	srand(time(NULL));

	return;
}


ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "CL4P-TP Copy constructor called" << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "CL4P-TP Destructor called" << std::endl;
	
	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src)
{
	std::cout << "CL4P-TP Assignation operator called" << std::endl;
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

std::ostream & operator<<( std::ostream & o, ClapTrap const & src )
{
	o << src.getName();

	return o;
}

std::string ClapTrap::getName( void ) const
{
	return this->_name;
}

void ClapTrap::rangedAttack( std::string const & target )
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at range, causing "
		<< this->_rangDmg << " points of damage!" << std::endl;

	return;
}

void ClapTrap::meleeAttack( std::string const & target )
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at melee, causing "
		<< this->_melDmg << " points of damage!" << std::endl;

	return;
}

void ClapTrap::takeDamage( unsigned int amount )
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
		std::cout << "CL4P-TP " << this->_name << " takes " << dmg << 
			" points of damage!" << std::endl;
	}
	else if (this->_hit == 0)
		std::cout << "CL4P-TP " << this->_name << " is already dead" << std::endl;
	else
		std::cout << "CL4P-TP " << this->_name << " felt nothing" << std::endl;

	return;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	int pnts;

	if ((int)amount > this->_maxHit || (int)amount < 0)
		amount = this->_maxHit;
	if ((this->_hit + amount) > this->_maxHit)
		pnts = this->_maxHit - this->_hit;
	else
		pnts = (int)amount;
	std::cout << "CL4P-TP " << this->_name << " is repaired, " << pnts << " points is gained"
		<< std::endl;

	return;
}
