/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:22:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 16:29:05 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <time.h>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void announce();
		void setType(std::string str);
		void setName(std::string str);

	private:
		std::string name;
		std::string type;
};

#endif
