/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/02 18:06:02 by pmaldagu         ###   ########.fr       */
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
		ClapTrap( std::string name);
		ClapTrap( std::string name, int hitp, int enp, int attckdmg);
		ClapTrap( int hitp, int enp, int attckdmg);
		ClapTrap( ClapTrap const & src);
		~ClapTrap( void );
		
		ClapTrap & operator=( ClapTrap const & rhs );

		std::string getName( void ) const;
		int getAttackDmg( void ) const;
		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	protected:
		std::string _name;
		int	_hitp;
		int	_enp;
		int _attckdmg;

};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs );

#endif
