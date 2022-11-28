/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:12:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:13:12 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void )
{
	std::cout << "A Constructor called" << std::endl;
}

A::A( A const & src )
{
	(void)src;
}

A::~A( void )
{
	std::cout << "A Destructor called" << std::endl;
}

A & A::operator=(A const & src)
{
	(void)src;
	return *this;
}
