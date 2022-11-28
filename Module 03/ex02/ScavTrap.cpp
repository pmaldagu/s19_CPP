/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/03 12:49:58 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap String Constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_enp = src._enp;
	this->_attckdmg = src._attckdmg;	

	return *this;
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & src )
{
	o << src.getName();

	return o;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attckdmg << " points of damage!" << std::endl;

	return;
}
