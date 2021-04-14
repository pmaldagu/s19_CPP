/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:34:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 16:17:34 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Human.hpp"

Human::Human()
{	
}

Human::~Human()
{	
}

Brain& Human::getBrain()
{
	return (brain);
}

std::string Human::identify()
{
	return (brain.identify());
}
