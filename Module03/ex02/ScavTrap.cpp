/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:04:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 15:13:54 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3 )
{
	std::cout << "SC4V-TP Default Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 100, 100, 100, 1, 20, 15, 3 )
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
