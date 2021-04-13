/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:23:50 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 17:18:59 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *newChump = new Zombie();

	if (!name.empty())
		newChump->setName(name);
	else
		newChump->setName("Nameless");
	return (newChump);
}

void ZombieEvent::setZombieType(Zombie* chump, std::string type)
{
	if (!chump)
		return ;
	chump->setType(type);
}

void ZombieEvent::randomChump(std::string type)
{
	Zombie randomChump;
	std::string names[7];
	int index;

	names[0] = "Doc";
	names[1] = "Sneezy";
	names[2] = "Sleepy";
	names[3] = "Grumpy";
	names[4] = "Happy";
	names[5] = "Bashful";
	names[6] = "Dopey";

	index = std::rand() % 7;
	randomChump.setName(names[index]);
	if (!type.empty())
		randomChump.setType(type);
	//randomChump.announce();
}
