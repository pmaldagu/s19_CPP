/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 13:16:56 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include <iostream>
# include <string>

class SuperMutant
{
	protected:
		std::string const _type;
		int _hp;

	public:
		SuperMutant( void );
		SuperMutant( int hp, std::string const & type);
		SuperMutant( SuperMutant const & src);
		virtual ~SuperMutant( void );
		
		SuperMutant & operator=( SuperMutant const & rhs );
		
		std::string const getType() const;
		int getHP() const;
		
		virtual void takeDamage( int dmg );

};

#endif
