/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/30 15:24:37 by pmaldag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) 
{
	//std::cout << "Default Constructor called" << std::endl;
	this->_unit = nullptr;
	this->_nextUnit = nullptr;

	return;
}

Squad::Squad( Squad const & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Squad::~Squad( void )
{
	//std::cout << "Destructor called" << std::endl;
	Squad* cpy;
	Squad* tmp;

	cpy = this->_nextUnit;
	delete this->_unit;
	while (cpy)
	{
		tmp = cpy;
		delete cpy->_unit;
		cpy = cpy->_nextUnit;
		delete tmp;
	}
	
	return;
}

Squad & Squad::operator=(Squad const & src)
{
	//std::cout << "Assignation operator called" << std::endl;
	//this->_n = src.getRawBits();

	return *this;
}

int Squad::getCount( void ) const
{
	int count;
	Squad* cpy;

	cpy = this;
	count = 0;
	while ( cpy )
	{
		cpy = cpy->_nextUnit;
		count++;
	}
	return ( count );
}

ISpaceMarine* Squad::getUnit( int n ) const
{
	int i;
	Squad *cpy;

	i = 1;
	cpy = this;
	while (cpy && cpy->_nextUnit && i < n)
	{
		cpy = cpy->_nextUnit;
		i++;
	}
	if ( i != n )
	{
		std::cout << "This Unit doesn't exits" << std::endl;
		return nullptr;
	}
	return cpy->_unit;
}

int Squad::push( ISpaceMarine* newUnit)
{
	int i;
	Squad *cpy;

	i = 0;
	cpy = this;
	while (cpy && cpy->_nextUnit)
	{
		cpy = cpy->_nextUnit;
		i++;
	}
	if ( !this->_unit )
		this->_unit = newUnit;
	else
	{
		cpy->_nextUnit = new Squad;
		cpy->_nextUnit->_unit = newUnit;
		cpy->_nextUnit->_nextUnit = nullptr;
	}
	return ( i + 1 );
}
