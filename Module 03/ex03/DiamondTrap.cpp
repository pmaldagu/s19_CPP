/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 11:41:29 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap(1), FragTrap(1)
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(1), FragTrap(1), _name(name)
{
	std::cout << "DiamondTrap String Constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_enp = src._enp;
	this->_attckdmg = src._attckdmg;	

	return *this;
}

std::ostream & operator<<( std::ostream & o, DiamondTrap const & src )
{
	o << src.getName();

	return o;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap " << this->_name << " ClapTrap name: " << getName() << std::endl;
}

void DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack(target);
	return;
}
