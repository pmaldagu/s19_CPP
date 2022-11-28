/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 11:43:13 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << "=========FRAGTRAP========" << std::endl;
	FragTrap frag("Fragfrag");

	std::cout << "---ATTACKS---" << std::endl;
	frag.attack("TrapTrap");
	
	std::cout << "---DAMAGE---" << std::endl;
	frag.takeDamage(3);
	frag.takeDamage(235);
	frag.takeDamage(235);
	
	std::cout << "---REPAIR---" << std::endl;
	frag.beRepaired(12);
	frag.beRepaired(125);

	std::cout << "---HIGH5---" << std::endl;
	frag.highFivesGuys();

	std::cout << "=========END========" << std::endl;
	return (0);
}
