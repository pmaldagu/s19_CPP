/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:24 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:39:50 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : 
Form("PresidentialPardonForm", 25, 5) 
{
	std::cout << "Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : 
Form("PresidentialPardonForm", 25, 5),
_target(target)	
{
	std::cout << "Parametric Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
Form(src),
_target(src._target)
{
	std::cout << "Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_target = src.getTarget();

	return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::FormNotSignedException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
