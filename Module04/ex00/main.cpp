/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:56:16 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Rat.hpp"

int main( void ) 
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Rat alessio("Alessio");
	
	std::cout << robert << jim << joe << alessio;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(alessio);
	
	return 0;
}
