/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 18:34:19 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "SPR-TP Constructor called" << std::endl;
	this->_hit = this->FragTrap::_hit;
	this->_maxHit = this->FragTrap::_maxHit;
	this->_en = this->NinjaTrap::_en;
	this->_maxEn = this->NinjaTrap::_maxEn;
	this->_melDmg = this->NinjaTrap::_melDmg;
	this->_rangDmg = this->FragTrap::_rangDmg;
	this->_armorDmg = this->FragTrap::_armorDmg;

	return;
}

SuperTrap::SuperTrap( std::string name ) : ClapTrap( name ), FragTrap( name ), NinjaTrap( name )
{
	std::cout << "SPR-TP with a name Constructor called" << std::endl;
	this->_name = name;
	this->_hit = this->FragTrap::_hit;
	this->_maxHit = this->FragTrap::_maxHit;
	this->_en = this->NinjaTrap::_en;
	this->_maxEn = this->NinjaTrap::_maxEn;
	this->_melDmg = this->NinjaTrap::_melDmg;
	this->_rangDmg = this->FragTrap::_rangDmg;
	this->_armorDmg = this->FragTrap::_armorDmg;

	return;
}

SuperTrap::SuperTrap( SuperTrap const & src )
{
	std::cout << "SPR-TP Copy constructor called" << std::endl;
	*this = src;

	return;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "SPR-TP Destructor called" << std::endl;
	
	return;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & src)
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

std::ostream & operator<<( std::ostream & o, SuperTrap const & src )
{
	o << src.getName();

	return o;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << "(SPR-TP) ";
 	FragTrap::rangedAttack(target);

 	return;
}

void SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << "(SPR-TP) ";
 	NinjaTrap::meleeAttack(target);

	return;
}
