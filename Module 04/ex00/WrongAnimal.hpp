/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:15 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 13:39:33 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WANIMAL_HPP
#define WANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( std::string name );
		WrongAnimal( WrongAnimal const & src);
		virtual ~WrongAnimal( void );
		
		WrongAnimal & operator=( WrongAnimal const & rhs );

		std::string getType( void ) const;
		void makeSound( void ) const;
		
	protected:
		std::string type;
	
};

#endif
