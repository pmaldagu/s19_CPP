/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/12 18:20:02 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	int i;

	i = 0;
	while (I < 4)
	{
		this->_source[i] = nullptr;
		i++;
	}

	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;

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
	///
	return *this;
}

void MateriaSource::learnMateria( AMateria* m )
{
	
	
