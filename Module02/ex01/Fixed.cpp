/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:45:08 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/20 13:21:48 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed( 0 )
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

Fixed::Fixed( int const n )
{
	std::cout << "Int Constructor called" << std::endl;
	this->_fixed = n << this->_frac;

	return;
}

Fixed::Fixed( float const f )
{
	std::cout << "Float Constructor called" << std::endl;
	this->_fixed = (int)roundf( f * ( 1 << this->_frac ));

	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

Fixed & Fixed::operator=( Fixed const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = src.getRawBits();

	return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & src )
{
	o << src.toFloat();

	return o;
}

int Fixed::getRawBits( void ) const
{
	return this->_fixed;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;

	return;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixed / (float)(1 << this->_frac));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed >> this->_frac);
}

