/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:22:31 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/20 14:27:43 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;

	i = 0;
	Zombie *Horde = new Zombie[N];

	while(i < N)
	{
		Horde[i].setName(name);
		i++;
	}

	return (Horde);
}
