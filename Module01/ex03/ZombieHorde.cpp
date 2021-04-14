/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:22:31 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 13:40:54 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	horde = new Zombie[N];
	std::string	names[7];

	members = N;
	randomName();
	std::cout << "The horde is coming" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
	std::cout << "The horde is gone" << std::endl;
}

void ZombieHorde::randomName()
{
	std::string names[7];
	int index;
	int i;

	names[0] = "Doc";
	names[1] = "Sneezy";
	names[2] = "Sleepy";
	names[3] = "Grumpy";
	names[4] = "Happy";
	names[5] = "Bashful";
	names[6] = "Dopey";
	i = 0;
	while (i < members)
	{
		index = std::rand() % 7;
		horde[i].setName(names[index]);
		i++;
	}
}

void ZombieHorde::announce()
{
	int i;

	i = 0;
	while (i < members)
	{
		horde[i].announce();
		i++;
	}
}
