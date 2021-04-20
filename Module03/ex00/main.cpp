/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/20 16:51:24 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main( void ) 
{
	FragTrap pika("Pikachu");
	FragTrap bulb("Bulbizarre");

	std::cout << "---ATTACKS---" << std::endl;
	pika.rangedAttack("Crapauce");
	bulb.meleeAttack("Reptincel");
	
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

	std::cout << "---DAMAGE---" << std::endl;
	pika.takeDamage(50);
	pika.takeDamage(3);
	bulb.takeDamage(235);
	
	std::cout << "---REPAIR---" << std::endl;
	pika.beRepaired(12);
	bulb.beRepaired(125);

	std::cout << "---END---" << std::endl;

	return (0);
}
