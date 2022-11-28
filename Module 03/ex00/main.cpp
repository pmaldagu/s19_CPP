/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/02 14:31:18 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap clap("Clapclap");

	std::cout << "---ATTACKS---" << std::endl;
	clap.attack("TrapTrap");
	
	std::cout << "---DAMAGE---" << std::endl;
	clap.takeDamage(3);
	clap.takeDamage(235);
	clap.takeDamage(235);
	
	std::cout << "---REPAIR---" << std::endl;
	clap.beRepaired(12);
	clap.beRepaired(125);

	std::cout << "---END---" << std::endl;

	return (0);
}
