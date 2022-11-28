/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:54:37 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 13:25:17 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "none" )
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string name) : type( name )
{
	std::cout << "WrongAnimal Type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = src.type;
	
	return *this;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "*WrongAnimal sound*" << std::endl;
}
