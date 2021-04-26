/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:01:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/26 17:14:13 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		std::string _type;
		int _hp;

	public:
		Enemy( void );
		Enemy( std::string const & type);
		Enemy( Enemy const & src);
		virtual ~Enemy( void );
		
		Enemy & operator=( Enemy const & rhs );
		
		std::string const getType() const;
		int getHP() const;
		
		virtual void takeDamage( int );

};

#endif
