/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:21:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 17:44:32 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string str);
		~HumanB();

		void attack();
		void setWeapon(Weapon& _weapon);

	private:
		std::string name;
		Weapon* weapon;
		
};

#endif
