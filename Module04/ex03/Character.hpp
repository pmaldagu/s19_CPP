/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/12 17:13:14 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character( void );
		Character( std::string name );
		Character( Character const & src);
		~Character( void );
		
		Character & operator=( Character const & rhs );
		
		std::string const & getName( void ) const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use ( int idx, ICharacter & target );

	private:
		std::string _name;
		AMateria* _materia[4];

};

#endif
