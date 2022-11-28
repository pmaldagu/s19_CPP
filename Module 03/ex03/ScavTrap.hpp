/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 10:46:38 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "./ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap ( int diamond );
		ScavTrap( ScavTrap const & src);
		~ScavTrap( void );
		
		ScavTrap & operator=( ScavTrap const & rhs );

		void guardGate( void );
		void attack( std::string const & target );

};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs );

#endif
