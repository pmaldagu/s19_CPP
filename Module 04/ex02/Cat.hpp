/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:00:15 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/06 16:59:36 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include <string>
# include "./Animal.hpp"
# include "./Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( Cat const & src);
		~Cat( void );
		
		Cat & operator=( Cat const & rhs );

		void makeSound( void ) const;
	
	private:
		Brain* brain;
};

#endif
