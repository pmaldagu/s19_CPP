/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:15 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 12:55:30 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( Dog const & src);
		~Dog( void );
		
		Dog & operator=( Dog const & rhs );

		void makeSound( void ) const;
};

#endif
