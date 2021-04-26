/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 13:35:58 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	protected:
		std::string _name;
		int _apcost;
		int _damage;

	public:
		AWeapon( void );
		AWeapon( std::string const & name, int apcost, int damage );
		AWeapon( AWeapon const & src);
		virtual ~AWeapon( void );
		
		AWeapon & operator=( AWeapon const & rhs );
		
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

};

#endif
