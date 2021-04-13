/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:15:13 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 14:37:44 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Pony.hpp"

Pony::Pony(std::string str)
{
	std::cout << "A wild pony appeared" << std::endl;
	name = str;
}

Pony::~Pony()
{
	std::cout << " Aaaannd it's gone" << std::endl;
}

void Pony::running()
{
	std::cout << name << " is running, like a turd, in the wind" << std::endl;
}
