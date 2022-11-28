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

Fixed::Fixed( void ) : _n( 0 )
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

Fixed::Fixed( int const n )
{
	std::cout << "Int Constructor called" << std::endl;
	this->_n = n << this->_frac;

	return;
}

Fixed::Fixed( float const f )
{
	std::cout << "Float Constructor called" << std::endl;
	this->_n = (int)roundf( f * ( 1 << this->_frac ));

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

int Fixed::getRawBits( void ) const
{
	return this->_n;
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;

	return;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_n / (float)(1 << this->_frac));
}

int		Fixed::toInt( void ) const
{
	return (this->_n >> this->_frac);
}

// Operators
std::ostream & operator<<( std::ostream & o, Fixed const & src )
{
	o << src.toFloat();

	return o;
}

// Comparaison
Fixed & Fixed::operator=( Fixed const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_n = src.getRawBits();

	return *this;
}

bool Fixed::operator<( Fixed const & rhs )
{ 
	return (this->_n < rhs.getRawBits()); 
}

bool Fixed::operator>( Fixed const & rhs )
{ 
	return (this->_n > rhs.getRawBits()); 
}

bool Fixed::operator<=( Fixed const & rhs) 
{
	return (this->_n <= rhs.getRawBits());
}

bool Fixed::operator>=( Fixed const & rhs )
{ 
	return  (this->_n >= rhs.getRawBits());
}

bool Fixed::operator==( Fixed const & rhs )
{ 
	return (this->_n == rhs.getRawBits()); 
}

bool Fixed::operator!=( Fixed const & rhs )
{ 
	return (this->_n != rhs.getRawBits()); 
}

// Arithmetic
Fixed & Fixed::operator+( Fixed const & rhs )
{ 
	*this = Fixed(toFloat() + rhs.toFloat());
	return *this;
}

Fixed & Fixed::operator-( Fixed const & rhs ) 
{ 
	*this = Fixed(toFloat() - rhs.toFloat());
	return *this; 
}

Fixed & Fixed::operator*( Fixed const & rhs ) 
{ 
	*this = Fixed(toFloat() * rhs.toFloat());
	return *this; 
}

Fixed & Fixed::operator/( Fixed const & rhs ) 
{ 
	*this = Fixed(toFloat() / rhs.toFloat());
	return *this; 
}

// Increment and Decrement
// Prefix
Fixed & Fixed::operator++( void ) 
{ 
	this->_n++; 
	return *this; 
}

Fixed & Fixed::operator--( void ) 
{ 
	this->_n--; 
	return *this; 
}

// Postfix
Fixed  Fixed::operator++( int ) 
{ 
	Fixed copy(*this); 
	operator++(); 
	return copy; 
}

Fixed  Fixed::operator--( int ) 
{ 
	Fixed copy(*this); 
	operator--(); 
	return copy; 
}

// Max and Min
Fixed & Fixed::min(Fixed & a, Fixed & b) 
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) 
{
	if (a.toFloat() < b.toFloat())
		return a;
	else
		return b;
}

Fixed & Fixed::max( Fixed & a, Fixed & b) 
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const& Fixed::max( Fixed const& a, Fixed const& b) 
{
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}
