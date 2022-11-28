/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/19 17:42:32 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed( void );
		Fixed( int const n );
		Fixed( Fixed const & src);
		~Fixed( void );
		
		Fixed & operator=( Fixed const & rhs );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int _n;
		static const int _frac = 8;

};

#endif
