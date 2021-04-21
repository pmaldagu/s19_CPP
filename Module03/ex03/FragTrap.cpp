/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 15:11:19 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5 )
{
	std::cout << "FR4G-TP Constructor called" << std::endl;
	srand(time(NULL));

	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 100, 100, 100, 100, 1, 30, 20, 5 )
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
