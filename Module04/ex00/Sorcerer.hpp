/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:01:56 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/23 16:41:10 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer( void );
		Sorcerer( std::string name, std::string title );
		Sorcerer( Sorcerer const & src);
		~Sorcerer( void );
		
		Sorcerer & operator=( Sorcerer const & rhs );

		std::string getName( void ) const;
		std::string getTitle( void ) const;
		void polymorph( Victim const & src );
		
	private:
		std::string _name;
		std::string _title;

};

std::ostream & operator<<( std::ostream & o, Sorcerer const & src);

#endif
