/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:15 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 17:05:01 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal( void );
		Animal( std::string name );
		Animal( Animal const & src);
		virtual ~Animal( void );
		
		Animal & operator=( Animal const & rhs );

		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
		
	protected:
		std::string type;
	
};

#endif
