/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:09:15 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:44:19 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		Victim( void );
		Victim( std::string name );
		Victim( Victim const & src);
		~Victim( void );
		
		Victim & operator=( Victim const & rhs );

		virtual void getPolymorphed( void ) const;
		std::string getName( void ) const;
		
	protected:
		std::string _name;
	
};

std::ostream & operator<<( std::ostream & o, Victim & src );

#endif
