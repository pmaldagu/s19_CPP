/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 16:28:17 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main( void ) 
{
	FragTrap pika("Pikachu");
	FragTrap bulb("Bulbizarre");

	ScavTrap mew("Mew");
	ScavTrap pichu("Pichu");

	NinjaTrap subzero("Bi han");
	NinjaTrap scorpion("Hanzo");

	std::cout << "---ATTACKS---" << std::endl;
	pika.rangedAttack("Carapuce");
	bulb.meleeAttack("Reptincel");

	mew.rangedAttack("Roucool");
	pichu.meleeAttack("Onyx");

	
	std::cout << "---VAULT---" << std::endl;
	pika.vaulthunter_dot_exe("Carapuce");
	pika.vaulthunter_dot_exe("Reptincel");
	pika.vaulthunter_dot_exe("Carapuce");
	pika.vaulthunter_dot_exe("Reptincel");
	pika.vaulthunter_dot_exe("Carapuce");
	bulb.vaulthunter_dot_exe("Reptincel");
	bulb.vaulthunter_dot_exe("Carapuce");
	bulb.vaulthunter_dot_exe("Reptincel");
	bulb.vaulthunter_dot_exe("Carapuce");
	bulb.vaulthunter_dot_exe("Reptincel");

	std::cout << "---CHALLENGE---" << std::endl;
	pichu.challengeNewcomer("Roucool");
	mew.challengeNewcomer("Onyx");

	std::cout << "---DAMAGE---" << std::endl;
	pika.takeDamage(50);
	pika.takeDamage(3);
	bulb.takeDamage(235);

	pichu.takeDamage(50);
	pichu.takeDamage(3);
	mew.takeDamage(235);

	
	std::cout << "---REPAIR---" << std::endl;
	pika.beRepaired(12);
	bulb.beRepaired(125);

	pichu.beRepaired(12);
	mew.beRepaired(125);

	std::cout << "---SHOEBOX----";
	subzero.ninjaShoebox(scorpion);
	subzero.ninjaShoebox(pika);
	subzero.ninjaShoebox(pichu);

	std::cout << "---END---" << std::endl;

	return (0);
}
