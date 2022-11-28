/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:05:32 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 10:04:19 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

# include <stdlib.h>
# include <ctype.h>
# include <iomanip>
# include <iostream>
# include <string.h>
#include <sstream>

#define TYPE_CHAR 0
#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_DOUBLE 3


class Converter
{
	public:
		Converter();
		Converter(char *input, bool flag);
		Converter( Converter const & rhs);
		virtual ~Converter();
		
		Converter & operator=( Converter const & rhs );
	
		std::string getPointValue( int type );

		void printPseudo( std::string pseudo );
		void printAll( void );

		void wichType(char *argv);
		void typeChar( void );
		void typeInt( void );
		void typeFloat( void );
		void typeDouble( void );
		
	private:
		char *_input;
		bool _flag;
		char _cvalue;
		int _ivalue;
		float _fvalue;
		double _dvalue;
		int _imp[4];

};


#endif
