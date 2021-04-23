/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:57:57 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:39:22 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void )
{
	std::cout << "A Sorcerer is born!" << std::endl;

	return;
}

Sorcerer::Sorcerer( std::string name, std::string title )
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;

	return;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title 
		<< ", is dead. Consequences will never be the same!" << std::endl;
	
	return;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & src )
{

	std::cout << "Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_title = src._title;

	return *this;
}

std::string Sorcerer::getName( void ) const
{
	return this->_name;
}

std::string Sorcerer::getTitle( void ) const
{
	return this->_title;
}

void Sorcerer::polymorph( Victim const & src )
{
	src.getPolymorphed();

	return;
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << ", , and I like ponies!" 
		<< std::endl;

	return o;
}
