/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:59:51 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/17 13:30:42 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class Span
{
	public:
		Span();
		Span( unsigned int N );
		Span( Span const & src);
		virtual ~Span();

		Span & operator=( Span const & rhs );

		class NotEnoughException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("No enough number");
				}
		};

		class TooManyException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Too many number");
				}
		};

		class InvalidException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Invalid input iterator");
				}
		};

		void addNumber( int nb);
		int shortestSpan( void );
		int longestSpan( void );

		typedef std::vector<int>::iterator iterator;

		template< typename InputIterator >
		void addNumber( InputIterator begin, InputIterator end );

		iterator begin( void );
		iterator end( void );

	private:
		unsigned int _maxStored;
		std::vector<int> _vec;
};

template< typename InputIterator >
void Span::addNumber( InputIterator begin, InputIterator end )
{
	size_t elem;

	try
	{
		elem = std::distance(begin, end);
		if ((elem + this->_vec.size()) > this->_maxStored)
			throw TooManyException();
		this->_vec.insert(this->_vec.end(), begin, end);
	}
	catch(std::exception & e)
	{
		throw InvalidException();
	}
}

#endif
