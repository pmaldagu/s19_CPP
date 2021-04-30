/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 11:55:35 by pmaldag           #+#    #+#             */
/*   Updated: 2021/04/30 12:18:11 by pmaldag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy("Super Mutant")
{
	this->_hp = 80;
	std::cout << "* click click click *" << std::endl;

	return;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
	*this = src;

	return;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	
	return;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_type = src.getType();
	this->_hp = src.getHP();

	return *this;
}

void SuperMutant::takeDamage( int dmg )
{
	if ( dmg <= 3)
		std::cout << "The Super Mutant felt nothing" << std::endl;
	else if ( dmg + 3 > this->_hp )
		dmg = this->_hp + 3;
	this->_hp -= dmg + 3;
	if ( this->_hp < 0 )
		this->_hp = 0;

	return;
}
