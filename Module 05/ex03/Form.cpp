/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:24 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:41:36 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : 
_name("Form"), 
_signed(false), 
_gradeSign(150), 
_gradeExecute(150)
{
	std::cout << "Default Constructor called" << std::endl;
}

Form::Form( std::string name, int gradeSign, int gradeExecute ) : 
_name(name), 
_signed(false), 
_gradeSign(gradeSign), 
_gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parametric Constructor called" << std::endl;
}

Form::Form( Form const & src ) :
_name(src._name), 
_signed(src._signed), 
_gradeSign(src._gradeSign), 
_gradeExecute(src._gradeExecute)
{
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form( void )
{
	std::cout << "Destructor called" << std::endl;
}

Form & Form::operator=(Form const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_signed = src.getSigned();

	return *this;
}

std::string const & Form::getName( void ) const
{
	return this->_name;
}

bool Form::getSigned( void ) const
{
	return this->_signed;
}

int Form::getGradeSign( void ) const
{
	return this->_gradeSign;
}

int Form::getGradeExecute( void ) const
{
	return this->_gradeExecute;
}

void Form::beSigned( Bureaucrat const & bc)
{
	if (bc.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << "Forms: " << src.getName() << " needs grade " << src.getGradeSign() << " to be signed and grade "
		<< src.getGradeExecute() << " to be executed. " << src.getName();
	if (src.getSigned() == true)
		std::cout << " is already signed." << std::endl;
	else
		std::cout << " is note yet signed." << std::endl;

	return o;
}
