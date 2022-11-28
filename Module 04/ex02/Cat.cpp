/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:38 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 17:01:23 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" )
{
	this->brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( Cat const & src ) : Animal()
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=( Cat const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	delete this->brain;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
	
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "MIAOOOOWWWWW" << std::endl;
}
