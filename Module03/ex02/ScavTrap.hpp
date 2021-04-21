/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:04:10 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 14:26:08 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & src);
		~ScavTrap( void );
		
		ScavTrap & operator=( ScavTrap const & rhs );

		void challengeNewcomer(std::string const & target);

};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs );

#endif
