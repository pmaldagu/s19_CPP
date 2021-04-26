/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:00:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 12:19:59 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void )
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

SuperMutant::SuperMutant( std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	std::cout << "Parametric Constructor called" << std::endl;

	return;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();

	return *this;
}

