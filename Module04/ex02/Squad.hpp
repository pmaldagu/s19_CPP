/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:38:56 by pmaldag           #+#    #+#             */
/*   Updated: 2021/05/07 14:31:39 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad( void );
		Squad( Squad const & src);
		~Squad( void );
		
		Squad & operator=( Squad const & rhs );

		int getCount( void ) const;
		ISpaceMarine *getUnit( int ) const;
		ISpaceMarine **getAllSquad( void ) const;
		int push(ISpaceMarine*);
			
	private:
		ISpaceMarine** _unit;
		int _members;
};

#endif
