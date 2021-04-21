/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 17:33:03 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( std::string name, int hit, int maxHit, int en, int maxEn,
				int lvl, int melDmg, int rangDmg, int armorDmg );
		ClapTrap( int hit, int maxHit, int en, int maxEn, int lvl, int melDmg,
				int rangDmg, int armorDmg );
		ClapTrap( ClapTrap const & src);
		~ClapTrap( void );
		
		ClapTrap & operator=( ClapTrap const & rhs );

		std::string getName( void ) const;
		void rangedAttack( std::string const & target );
		void meleeAttack( std::string const & traget );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	protected:
		std::string _name;
		int	_hit;
		int _maxHit;
		int	_en;
		int _maxEn;
		int _lvl;
		int _melDmg;
		int _rangDmg;
		int _armorDmg;

};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs );

#endif
