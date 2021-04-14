/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:25:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 14:57:41 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	int i;
	std::stringstream ss;

	ss << this;
	ss >> address;
	i = 0;
	
	while (address[i])
	{
		address[i] = std::toupper(address[i]);
		i++;
	}
}

Brain::~Brain()
{	
}

std::string Brain::identify()
{
	return(address);
}
