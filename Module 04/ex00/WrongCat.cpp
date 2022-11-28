/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:38 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 13:34:36 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src )
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = src.type;
	
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "MIAOOOOWWWWW" << std::endl;
}
