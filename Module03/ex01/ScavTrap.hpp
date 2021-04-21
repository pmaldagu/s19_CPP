/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:04:10 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 13:31:25 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class ScavTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & src);
		~ScavTrap( void );
		
		ScavTrap & operator=( ScavTrap const & rhs );

		std::string getName( void ) const;
		void rangedAttack( std::string const & target );
		void meleeAttack( std::string const & traget );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		void challengeNewcomer(std::string const & target);

	private:
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

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs );

#endif
