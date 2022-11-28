/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:03:21 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 17:09:13 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::~Weapon()
{	
}

const std::string& Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string str)
{
	type = str;
}
