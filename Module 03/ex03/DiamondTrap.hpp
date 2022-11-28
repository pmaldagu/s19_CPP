/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 10:53:38 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "./FragTrap.hpp"
# include "./ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name);
		DiamondTrap( DiamondTrap const & src);
		~DiamondTrap( void );
		
		DiamondTrap & operator=( DiamondTrap const & rhs );

		void whoAmI( void );
		void attack( std::string const & target );

	private:
		std::string _name;

};

std::ostream & operator<<( std::ostream & o, DiamondTrap const & rhs );

#endif
