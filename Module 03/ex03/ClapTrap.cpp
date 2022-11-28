/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/02 18:19:58 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hitp(10), _enp(10), _attckdmg(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitp(10), _enp(10), _attckdmg(0)
{
	std::cout << "ClapTrap String Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hitp, int enp, int attckdmg ) : _name(name), _hitp(hitp), _enp(enp), _attckdmg(attckdmg)
{
	std::cout << "ClapTrap Complete Constructor called" << std::endl;
}

ClapTrap::ClapTrap( int hitp, int enp, int attckdmg ) : _hitp(hitp), _enp(enp), _attckdmg(attckdmg)
{
	std::cout << "ClapTrap Allmost Complete Constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapCopy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_enp = src._enp;
	this->_attckdmg = src._attckdmg;	

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

void ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attckdmg << " points of damage!" << std::endl;

	return;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	int dmg;

	dmg = amount;
	if (amount > this->_hitp)
		dmg = this->_hitp;
	if (!this->_hitp)
		std::cout << "STOP!, ClapTrap " << this->_name << " is already dead " << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " take " << dmg << " points of damage" << std::endl;
		this->_hitp -= dmg;
	}
}

void ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitp += amount;

	std::cout << "ClapTrap " << this->_name << " is repaired, his hitpoints are increased by " << amount << " points" << std::endl;
}
