/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:12:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 10:10:13 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( void ) :
_input(NULL),
_flag(true),
_cvalue(0),
_ivalue(0),
_fvalue(0.),
_dvalue(0.)
{
	memset(this->_imp, 0, 4 * sizeof(int));
}

Converter::Converter( char *input, bool flag) :
_input( input ),
_flag(flag),
_cvalue(0),
_ivalue(0),
_fvalue(0.),
_dvalue(0.)
{
	memset(this->_imp, 0, 4 * sizeof(int));
	wichType(input);
}

Converter::Converter( Converter const & src ) :
_input( src._input ),
_flag(src._flag),
_cvalue( src._cvalue ),
_ivalue( src._ivalue ),
_fvalue( src._fvalue ),
_dvalue( src._dvalue )
{
}

Converter::~Converter( void )
{
}

Converter & Converter::operator=(Converter const & src)
{
	this->_input = src._input;
	this->_flag = src._flag;
	this->_cvalue = src._cvalue;
	this->_ivalue = src._ivalue;
	this->_fvalue = src._fvalue;
	this->_dvalue = src._dvalue;
	this->_imp[0] = src._imp[0];
	this->_imp[1] = src._imp[1];
	this->_imp[2] = src._imp[2];
	this->_imp[3] = src._imp[3];

	return *this;
}

std::string Converter::getPointValue( int type)
{
	std::string ret;
    std::stringstream ss;

	if (type == TYPE_FLOAT)
    	ss << this->_fvalue;
	else
		ss << this->_dvalue;
    ret = ss.str();
	if (ret.find("inf") == std::string::npos && ret.find(".") == std::string::npos)
		ret += ".0";
	return ret;
}

void Converter::printPseudo( std::string pseudo )
{
	if (pseudo == "" && strcmp(this->_input, "+inf") && strcmp(this->_input, "-inf") 
		&& strcmp(this->_input, "nan"))
	{
		pseudo = this->_input;
		pseudo.resize(pseudo.size() - 1);
	}
	else if (pseudo == "")
		pseudo = this->_input;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << pseudo << "f" << std::endl;
	std::cout << "double: " << pseudo << std::endl;
}

void Converter::printAll( void )
{
	std::cout << "char: ";
	if (!isprint(this->_cvalue) && !this->_imp[TYPE_CHAR])
		std::cout << "Non displayable" << std::endl;
	else if (this->_imp[TYPE_CHAR])
		std::cout << "impossible" << std::endl;
	else
		std::cout << '\'' << this->_cvalue << '\'' << std::endl;
	std::cout << "int: ";
	if (this->_imp[TYPE_INT])
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_ivalue << std::endl;
	std::cout << "float: ";
	if (this->_imp[TYPE_FLOAT])
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->getPointValue(TYPE_FLOAT) << "f\n";
	std::cout << "double: ";
	if (this->_imp[TYPE_DOUBLE])
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->getPointValue(TYPE_FLOAT) << std::endl;
}

void Converter::wichType(char *argv)
{
	bool point;
	int i;

	point = false;
	i = 0;
	if (this->_flag)
		return this->printPseudo("nan");	
	if (strlen(argv) == 1 && isprint(argv[0]) && !isdigit(argv[0]))
		return this->typeChar();
	while(argv[i])
	{
		if( argv[i] == '.')
			point = true;
		i++;
	}
	if (point && i > 1 && argv[i - 1] == 'f')
		return this->typeFloat();
	else if (point)
		return this->typeDouble();
	else if (i > 0  && isdigit(argv[i - 1]))
		return this->typeInt();
	else
		this->printPseudo("");
}

void Converter::typeChar(void)
{
	this->_cvalue = this->_input[0];
	this->_ivalue = static_cast<int>(this->_cvalue);
	this->_fvalue = static_cast<float>(this->_cvalue);
	this->_dvalue = static_cast<double>(this->_cvalue);
	this->printAll();
}

void Converter::typeInt(void)
{
	double value;

	value = atof(this->_input);
	if (value > std::numeric_limits<int>::max() ||
			value < std::numeric_limits<int>::min())
	{
		memset(this->_imp, 1, 4 * sizeof(int));
		this->printAll();
		return;
	}
	else if (value > std::numeric_limits<char>::max() ||
			value < std::numeric_limits<char>::min())
		this->_imp[TYPE_CHAR] = 1;
	this->_ivalue = atoi(this->_input);
	if (!this->_imp[TYPE_CHAR])
		this->_cvalue = static_cast<char>(this->_ivalue);
	this->_fvalue = static_cast<float>(this->_ivalue);
	this->_dvalue = static_cast<double>(this->_ivalue);
	this->printAll();
}

void Converter::typeFloat(void)
{
	double value;

	value = atof(this->_input);
	this->_fvalue = value;
	if (value > std::numeric_limits<int>::max() ||
			value < std::numeric_limits<int>::min())
		this->_imp[TYPE_INT] = 1;
	else
		this->_ivalue = static_cast<int>(this->_fvalue);
	if (value > std::numeric_limits<char>::max() ||
			value < std::numeric_limits<char>::min())
		this->_imp[TYPE_CHAR] = 1;
	else
		this->_cvalue = static_cast<char>(this->_fvalue);
	this->_dvalue = static_cast<double>(this->_fvalue);
	this->printAll();
}

void Converter::typeDouble(void)
{
	this->_dvalue = atof(this->_input);
	this->_fvalue = static_cast<float>(this->_dvalue);
	if (this->_dvalue > std::numeric_limits<int>::max() ||
			this->_dvalue < std::numeric_limits<int>::min())
		this->_imp[TYPE_INT] = 1;
	else
		this->_ivalue = static_cast<int>(this->_dvalue);
	if (this->_dvalue > std::numeric_limits<char>::max() ||
			this->_dvalue < std::numeric_limits<char>::min())
		this->_imp[TYPE_CHAR] = 1;
	else
		this->_cvalue = static_cast<char>(this->_dvalue);
	this->printAll();
}


