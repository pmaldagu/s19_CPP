/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/02 14:30:26 by pmaldagu         ###   ########.fr       */
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
		ClapTrap( ClapTrap const & src);
		~ClapTrap( void );
		
		ClapTrap & operator=( ClapTrap const & rhs );

		std::string getName( void ) const;
		void attack( std::string const & target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	private:
		std::string _name;
		int	_hitp;
		int	_enp;
		int _attckdmg;

};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs );

#endif
