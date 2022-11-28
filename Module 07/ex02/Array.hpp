/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:29:32 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 15:15:23 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

template< typename T >
class Array
{
	public:
		Array();
		Array( unsigned int n );
		Array ( Array const & src);
		virtual~Array();

		class LimitsException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Out of the limits");
				}
		};

		Array & operator=( Array const & src);
		T & operator[]( unsigned int const idx );

		unsigned int size( void ) const;

	private:
		T* _array;
		unsigned int _size;
};

template< typename T >
Array<T>::Array( void ) :
_size( 0 )
{
	std::cout << "Default Constructor called" << std::endl;
	this->_array = new T[0];
}

template< typename T >
Array<T>::Array( unsigned int n ) :
_size( n )
{
	std::cout << "Parametric Constructor called" << std::endl;
	this->_array = new T[n];
	memset(this->_array, 0, n * sizeof(T));
}

template< typename T >
Array<T>::Array( Array const & src ) :
_size( 0 )
{
	std::cout << "Copy Constructor called" << std::endl;
	this->_array = new T[0];
	*this = src;
}

template< typename T >
Array<T>::~Array( void )
{
	std::cout << "Destructor called" << std::endl;
	delete[] this->_array;
}

template< typename T >
Array<T> & Array<T>::operator=( Array const & src )
{
	std::cout << "Assignation Operator called" << std::endl;
	unsigned int i;

	i = 0;
	delete[] this->_array;
	this->_size = src._size;
	this->_array = new T[src._size];
	while ( i < src._size)
	{
		this->_array[i] = src._array[i];
		i++;
	}

	return *this;
}

template< typename T >
T & Array<T>::operator[]( unsigned int const idx  )
{
	std::cout << "Indexation Operator called" << std::endl;
	if (idx >= this->_size)
		throw Array<T>::LimitsException();
	else
		return this->_array[idx];
}


template< typename T >
unsigned int Array<T>::size( void ) const
{
	return (this->_size);
}

#endif
