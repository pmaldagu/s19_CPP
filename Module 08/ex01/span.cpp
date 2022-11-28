/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:35:10 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/17 13:20:44 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./span.hpp"

Span::Span() :
_maxStored(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span( unsigned int N) :
_maxStored( N )
{
	std::cout << "Parametric constructor called" << std::endl;
}

Span::Span( Span const & src ) :
_maxStored( src._maxStored )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Span::~Span( void )
{
	std::cout << "Destructor called" << std::endl;
}

Span & Span::operator=( Span const & rhs )
{
	size_t i;

	i = 0;
	if (this != &rhs)
	{
		this->_maxStored = rhs._maxStored;
		this->_vec.clear();
		this->_vec.resize(rhs._vec.size());
		std::copy(rhs._vec.begin(), rhs._vec.end(), this->_vec.begin());
	}
	return *this;
}

void Span::addNumber( int nb )
{
	if (this->_vec.size() == this->_maxStored)
		throw Span::TooManyException();
	else
		this->_vec.push_back(nb);
}

int Span::longestSpan( void )
{
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;
	

	if (this->_vec.size() == 1 || this->_vec.empty())
		throw Span::NotEnoughException();
	min = std::min_element(this->_vec.begin(), this->_vec.end());
	max = std::max_element(this->_vec.begin(), this->_vec.end());
	return abs(*max - *min);
}

int Span::shortestSpan( void )
{
	std::vector<int> cpy;
	std::vector<int>::iterator it;
	int ret;

	if (this->_vec.size() == 1 || this->_vec.empty())
		throw Span::NotEnoughException();
	cpy.resize(this->_vec.size());
	std::copy(this->_vec.begin(), this->_vec.end(), cpy.begin());
	std::sort(cpy.begin(), cpy.end());
	it = cpy.begin() + 1;
	ret = (*(cpy.end() - 1) - *(cpy.begin()));
	while (it != cpy.end())
	{
		if (abs(*(it - 1) - *it) < ret)
			ret = abs(*(it - 1) - *it);
		it++;
	}
	return ret;
}

Span::iterator Span::begin( void )
{
	return this->_vec.begin();
}

Span::iterator Span::end( void )
{
	return this->_vec.end();
}
