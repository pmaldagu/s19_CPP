/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 17:30:26 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>
# include <string>

class PlasmaRifle
{
	public:
		PlasmaRifle( void );
		PlasmaRifle( std::string const & name, int apcost, int damage );
		PlasmaRifle( Fixed const & src);
		~PlasmaRifle( void );
		
		PlasmaRifle & operator=( PlasmaRifle const & rhs );
		
		virtual void attack() const;

};

#endif
