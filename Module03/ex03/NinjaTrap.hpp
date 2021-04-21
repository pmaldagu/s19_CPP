/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/21 16:30:28 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap( void );
		NinjaTrap( std::string name);
		NinjaTrap( NinjaTrap const & src);
		~NinjaTrap( void );
		
		NinjaTrap & operator=( NinjaTrap const & rhs );

		void ninjaShoebox( NinjaTrap const & target );
		void ninjaShoebox( ScavTrap const & target );
		void ninjaShoebox( FragTrap const & target );
		void ninjaShoebox( ClapTrap const & target );
};

std::ostream & operator<<( std::ostream & o, NinjaTrap const & rhs );

#endif
