/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:12:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:13:20 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void )
{
	std::cout << "B Constructor called" << std::endl;
}

B::B( B const & src )
{
	(void)src;
}

B::~B( void )
{
	std::cout << "B Destructor called" << std::endl;
}

B & B::operator=(B const & src)
{
	(void)src;
	return *this;
}
