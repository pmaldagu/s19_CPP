/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:22:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 13:39:13 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include <time.h>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde();

		void randomName();
		void announce();

	private:
		Zombie* horde;
		int members;
};

#endif
