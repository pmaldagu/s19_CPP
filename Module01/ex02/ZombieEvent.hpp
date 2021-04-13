/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:25:23 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 17:06:23 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <ctime>
#include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		void setZombieType(Zombie* chump, std::string type);
		Zombie* newZombie(std::string name);
		void randomChump(std::string type);

	private:


};

#endif
