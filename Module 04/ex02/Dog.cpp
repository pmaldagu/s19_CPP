/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:38 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 17:00:45 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
	this->brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( Dog const & src ) : Animal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=( Dog const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	delete this->brain;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
	
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "WOOF WOOF" << std::endl;
}
