/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/13 11:12:11 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->_source[i] = nullptr;
		i++;
	}

	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	int i;

	i = 0;
	while ( i < 4 )
	{
		delete this->_source[i];
		i++;
	}
	i = 0;
	while ( i < 4 )
	{
		this->_source[i] = src._source[i]->clone();
		i++;
	}

	return;
}

MateriaSource::~MateriaSource( void )
{
	int i;

	i = 0;
	while (i < 4)
	{
		delete this->_source[i];
		i++;
	}
	
	return;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	int i;

	i = 0;
	while ( i < 4 )
	{
		delete this->_source[i];
		i++;
	}
	i = 0;
	while ( i < 4 )
	{
		this->_source[i] = src._source[i]->clone();
		i++;
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria* m )
{
	int i;

	i = 0;
	while (i < 4 && this->_source[i] )
		i++;
	if ( i != 4 )
		this->_source[i] = m->clone();
	return;
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	int i;

	i = 0;
	while ( i < 4 && this->_source[i]->getType() != type	)
		i++;
	if ( i != 4 )
		return ( this->_source[i]->clone() );
	else
		return nullptr;
}
