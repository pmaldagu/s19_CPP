/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:42:47 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/20 13:11:29 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( int const n );
		Fixed( float const f );
		Fixed( Fixed const & src);
		~Fixed( void );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt ( void ) const;

		Fixed & operator=( Fixed const & rhs );
		bool operator<( Fixed const & rhs );
		bool operator>( Fixed const & rhs );
		bool operator<=( Fixed const & rhs );
		bool operator>=( Fixed const & rhs );
		bool operator==( Fixed const & rhs );
		bool operator!=( Fixed const & rhs );

		Fixed & operator+( Fixed const & rhs );
		Fixed & operator-( Fixed const & rhs );
		Fixed & operator*( Fixed const & rhs );
		Fixed & operator/( Fixed const & rhs );

		Fixed & operator++( void );
		Fixed & operator--( void );
		Fixed operator++( int );
		Fixed operator--( int );

		static Fixed & min(Fixed & a, Fixed & b); 
		static Fixed const& min(Fixed const& a, Fixed const& b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const& max(Fixed const& a, Fixed const& b);

	private:
		int _n;
		static const int _frac = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif
