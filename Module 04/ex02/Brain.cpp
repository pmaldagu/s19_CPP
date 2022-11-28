/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:54:37 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 17:03:32 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=( Brain const & src)
{
	int i;

	i = 0;
	std::cout << "Assignation operator called" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
	return *this;
}
