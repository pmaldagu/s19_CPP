/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:21:52 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 17:19:49 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	ZombieEvent event;
	Zombie*	batman;
	Zombie* robin;

	std::srand (std::time(nullptr));

	batman = event.newZombie("Bruce");
	robin = event.newZombie("Dick");

	event.setZombieType(batman, "Super Hero");
	event.setZombieType(robin, "Acolyte");

	batman->announce();
	robin->announce();

	event.randomChump("Super Vilain");
	event.randomChump("Vilain");
	event.randomChump(NULL);

	delete batman;
	delete robin;

	return (0);

}
