/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:00:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 18:26:39 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy("RadScorpion")
{
	this->_hp = 80;
	std::cout << "* click click click *" << std::endl;

	return;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
	*this = src;

	return;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
	
	return;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_type = src.getType();
	this->_hp = src.getHP();

	return *this;
}

