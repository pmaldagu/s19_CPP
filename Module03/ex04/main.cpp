/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 18:31:33 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main( void ) 
{
	SuperTrap kalel("Clarck");
	//NinjaTrap scorpion("Hanzo");

	std::cout << "---ATTACKS---" << std::endl;
	kalel.rangedAttack("Carapuce");
	kalel.meleeAttack("Reptincel");
	
	std::cout << "---VAULT---" << std::endl;
	kalel.vaulthunter_dot_exe("Carapuce");
	kalel.vaulthunter_dot_exe("Reptincel");
	kalel.vaulthunter_dot_exe("Carapuce");
	kalel.vaulthunter_dot_exe("Reptincel");
	kalel.vaulthunter_dot_exe("Carapuce");

	//std::cout << "---SHOEBOX---" << std::endl;
	//kalel.ninjaShoebox(scorpion);

	//std::cout << "---DAMAGE---" << std::endl;
	//kalel.takeDamage(50);
	//kalel.takeDamage(3);
	//kalel.takeDamage(235);
	
	//std::cout << "---REPAIR---" << std::endl;
	//kalel.beRepaired(12);
	//kalel.beRepaired(125);

	std::cout << "---END---" << std::endl;

	return (0);
}
