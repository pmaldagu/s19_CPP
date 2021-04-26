/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 17:00:02 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon* _equip;

	public:
		Character( void );
		Character( std::string const & name );
		Character( std::string const & name, int AP, AWeapon*);
		Character( Character const & src);
		~Character( void );
		
		Character & operator=( Character const & rhs );
	
		void equip( AWeapon*);
		void attack( Enemy*);
		void recoverAP( void );	
		std::string const getName() const;
		int getAP( void ) const;
		AWeapon* getWeapon( void ) const;

};

std::ostream & operator<<( std::ostream & o, Character & rhs );

#endif
