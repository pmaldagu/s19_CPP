/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:22:31 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 16:43:46 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	type = "Zombie";	
}

Zombie::~Zombie()
{
	std::cout << name << " is gone" << std::endl;
}

void Zombie::setType(std::string str)
{
	type = str;
}

void Zombie::setName(std::string str)
{
	name = str;
}

void Zombie::announce()
{
	std::cout << "<" <<name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
