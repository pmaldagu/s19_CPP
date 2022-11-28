/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/07 15:09:16 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
}

Character::Character( std::string name )
{
	int i;

	i = 0;
	this->_name = name;
	while ( i < 4 )
	{
		this->_materia[i] = nullptr;
		i++;
	}

	return;
}

Character::Character( Character const & src )
{
	int i;

	i = 0;
	this->_name = src.getName();
	if ( i < 4 )
	{
		delete this->_materia[i];
		i++;
	}
	i = 0;
	while ( i < 4 )
	{
		this->_materia[i] = src._materia[i]->clone();
		i++;
	}

	return;
}

Character::~Character( void )
{
	int i;

	i = 0;
	while ( i < 4 )
	{
		delete this->_materia[i];
		i++;
	}
	
	return;
}

Character & Character::operator=(Character const & src)
{
	int i;
	
	i = 0;
	this->_name = src.getName();
	if( i < 4 )
	{
		delete this->_materia[i];
		i++;
	}
	i = 0;
	while ( i < 4 )
	{	
		this->_materia[i] = src._materia[i]->clone();
		i++;
	}

	return *this;
}

std::string const & Character::getName( void ) const
{
	return this->_name;
}

void Character::equip ( AMateria* m )
{
	int i;
	
	i = 0;
	while ( i < 4 && this->_materia[i] )
		i++;
	if ( i == 4 )
	{
		std::cout << "Inventory is full!" << std::endl;
		return;
	}
	this->_materia[i] = m;

}

void Character::unequip( int idx )
{
	if ( idx > 3 || !this->_materia[idx] )
		return;
	this->_materia[idx] = nullptr;
	while ( (idx + 1) < 3 )
	{
		this->_materia[idx] = this->_materia[idx + 1];
		idx++;
	}
	this->_materia[3] = nullptr;
}

void Character::use ( int idx , ICharacter & target )
{
	int i;

	i = 0;
	while ( i < 4 && i < idx && this->_materia[i] )
		i++;
	if ( i != idx )
		return;
	this->_materia[i]->use( target );
}		
