/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:17:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:55:21 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon( void );
		Peon( std::string name );
		Peon( Peon const & src);
		~Peon( void );
		
		Peon & operator=( Peon const & rhs );

		void getPolymorphed( void ) const;
		
	private:
	
};

#endif
