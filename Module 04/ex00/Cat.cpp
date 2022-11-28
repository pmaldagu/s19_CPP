/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:38 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 13:00:57 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" )
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( Cat const & src )
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=( Cat const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = src.type;
	
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "MIAOOOOWWWWW" << std::endl;
}
