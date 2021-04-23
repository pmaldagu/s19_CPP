/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:17:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:55:57 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAT_HPP
#define RAT_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Rat : public Victim
{
	public:
		Rat( void );
		Rat( std::string name );
		Rat( Rat const & src);
		~Rat( void );
		
		Rat & operator=( Rat const & rhs );

		void getPolymorphed( void ) const;
		
	private:
	
};

#endif
