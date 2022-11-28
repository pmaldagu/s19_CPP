/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/12 17:13:33 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src);
		~MateriaSource( void );
		
		MateriaSource & operator=( MateriaSource const & rhs );
		
		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );

	private:
		AMateria* _source[4];

};

#endif
