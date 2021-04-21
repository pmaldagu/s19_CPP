/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 16:33:22 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap( 60, 60, 120, 120, 1, 60, 5, 0 )
{
	std::cout << "NINJ4-TP Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap( name, 60, 60, 120, 120, 1, 60, 5, 0 )
{
	std::cout << "NINJ4-TP with a name Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
	std::cout << "NINJ4-TP Copy constructor called" << std::endl;
	*this = src;

	return;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "NINJ4-TP Destructor called" << std::endl;
	
	return;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & src)
{
	std::cout << "NINJ4-TP Assignation operator called" << std::endl;
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

std::ostream & operator<<( std::ostream & o, NinjaTrap const & src )
{
	o << src.getName();

	return o;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "A wild NINJ4-TP (" << target.getName() << ") appeared, NINJ4-TP " << 
		this->_name << " attack with his special attack: spaghetti bolognese" << std::endl;

	return;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "A wild SC4V-TP (" << target.getName() << ") appeared, NINJ4-TP " << 
		this->_name << " attack with his special attack: omelette du fromage" << std::endl;

	return;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "A wild FR4G-TP (" << target.getName() << ") appeared, NINJ4-TP " << 
		this->_name << " attack with his special attack: steak with fries" << std::endl;
	
	return;
}

void NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << "A wild CL4P-TP (" << target.getName() << ") appeared, NINJ4-TP " << 
		this->_name << " attack with his special attack: couscous royal" << std::endl;

	return;
}
