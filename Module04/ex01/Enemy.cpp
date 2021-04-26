/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:00:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 18:17:02 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
}

Enemy::Enemy( std::string const & type)
{
	this->_type = type;

	return;
}

Enemy::Enemy( Enemy const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Enemy::~Enemy( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

Enemy & Enemy::operator=( Enemy const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_type = src.getType();
	this->_hp = src.getHP();

	return *this;
}

std::string const Enemy::getType( void ) const
{
	return this->_type;
}

int Enemy::getHP( void ) const
{
	return this->_hp;
}

void Enemy::takeDamage( int dmg )
{
	if (dmg < 0 )
		return;
	this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
	return;
}
