/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/30 16:05:10 by pmaldag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMI_HPP
#define ASSAULTTERMI_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator( void );
		AssaultTerminator( AssaultTerminator const & src);
		~AssaultTerminator( void );
		
		AssaultTerminator & operator=( AssaultTerminator const & rhs );

		ISpaceMarine* clone( void ) const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
		

};

#endif
