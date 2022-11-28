/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 11:01:35 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) 
{
	std::cout << "=========CLAPTRAP========" << std::endl;
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

	std::cout << "=========SCAVTRAP========" << std::endl;
	ScavTrap scav("Scavscav");

	std::cout << "---ATTACKS---" << std::endl;
	scav.attack("TrapTrap");
	
	std::cout << "---DAMAGE---" << std::endl;
	scav.takeDamage(3);
	scav.takeDamage(235);
	scav.takeDamage(235);
	
	std::cout << "---REPAIR---" << std::endl;
	scav.beRepaired(12);
	scav.beRepaired(125);

	std::cout << "---GUARD---" << std::endl;
	scav.guardGate();

	std::cout << "=========END========" << std::endl;
	return (0);
}
