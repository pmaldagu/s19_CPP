/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:15 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 13:33:38 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WCAT_HPP
#define WCAT_HPP

# include <iostream>
# include <string>
# include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat const & src);
		~WrongCat( void );
		
		WrongCat & operator=( WrongCat const & rhs );

		void makeSound( void ) const;
};

#endif
