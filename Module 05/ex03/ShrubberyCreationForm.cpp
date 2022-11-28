/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:24 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:33:49 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : 
Form("ShrubberyCreationForm", 145, 137) 
{
	std::cout << "Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : 
Form("ShrubberyCreationForm", 145, 137),
_target(target)	
{
	std::cout << "Parametric Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
Form(src),
_target(src._target)
{
	std::cout << "Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_target = src.getTarget();

	return *this;
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::FormNotSignedException();
	std::ofstream o(this->_target + "_shrubbery");

	o << "	     ###" << std::endl;
	o << "      #o###" << std::endl;
	o << "    #####o###" << std::endl;
	o << "   #o#\\#|#/###" << std::endl;
	o << "    ###\\|/#o#" << std::endl;
	o << "     # }|{  #" << std::endl;
	o << "       }|{";

	o.close();
}
