/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:56:07 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/05/07 15:23:24 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria
{
	protected:
		std::string _type;
		unsigned int _xp;
		
	public:
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
