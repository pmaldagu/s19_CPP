/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:54:37 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 15:14:30 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type( "none" )
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string name) : type( name )
{
	std::cout << "Animal Type constructor called" << std::endl;
}

Animal::Animal( Animal const & src ) : type("")
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = src.getType();
	
	return *this;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}

void Animal::makeSound( void ) const
{
	std::cout << "*Animal sound*" << std::endl;
}
