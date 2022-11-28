/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:56:07 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/07 13:48:04 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include "ICharacter.hpp"
class ICharacter;

class AMateria
{		
	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter & target);

	protected:
		std::string _type;

};

#endif
