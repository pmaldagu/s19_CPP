/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/20 16:58:35 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>

class FragTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name);
		FragTrap( FragTrap const & src);
		~FragTrap( void );
		
		FragTrap & operator=( FragTrap const & rhs );

		std::string getName( void ) const;
		void rangedAttack( std::string const & target );
		void meleeAttack( std::string const & traget );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		void vaulthunter_dot_exe(std::string const & target);

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

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs );

#endif
