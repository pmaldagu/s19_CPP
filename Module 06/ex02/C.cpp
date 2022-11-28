/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:12:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:13:29 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void )
{
	std::cout << "C Constructor called" << std::endl;
}

C::C( C const & src )
{
	(void)src;
}

C::~C( void )
{
	std::cout << "C Destructor called" << std::endl;
}

C & C::operator=(C const & src)
{
	(void)src;
	return *this;
}
