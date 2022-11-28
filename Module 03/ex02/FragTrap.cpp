/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/03 13:07:52 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap String Constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_enp = src._enp;
	this->_attckdmg = src._attckdmg;	

	return *this;
}

std::ostream & operator<<( std::ostream & o, FragTrap const & src )
{
	o << src.getName();

	return o;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->_name << " : \"Give Me Five!\"" << std::endl;
}

void FragTrap::attack( std::string const & target )
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attckdmg << " points of damage!" << std::endl;

	return;
}
