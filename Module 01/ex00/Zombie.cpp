/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:22:31 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/20 14:26:28 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is gone" << std::endl;
}

void Zombie::setName( std::string name )
{
	this->_name = name;
	announce();
}

void Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
