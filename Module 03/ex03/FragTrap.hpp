/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 10:45:16 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "./ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name);
		FragTrap( int diamond );
		FragTrap( FragTrap const & src);
		~FragTrap( void );
		
		FragTrap & operator=( FragTrap const & rhs );

		void highFivesGuys( void );
		void attack( std::string const & target );

};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs );

#endif
