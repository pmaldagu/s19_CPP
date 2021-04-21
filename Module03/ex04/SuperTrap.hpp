/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 17:53:09 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap( void );
		SuperTrap( std::string name);
		SuperTrap( SuperTrap const & src);
		~SuperTrap( void );
		
		SuperTrap & operator=( SuperTrap const & rhs );

		void rangedAttack( std::string const & target );
		void meleeAttack( std::string const & traget );
};

std::ostream & operator<<( std::ostream & o, SuperTrap const & rhs );

#endif
