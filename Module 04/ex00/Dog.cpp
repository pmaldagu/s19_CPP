/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:38 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 13:00:41 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( Dog const & src )
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=( Dog const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = src.type;
	
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "WOOF WOOF" << std::endl;
}
