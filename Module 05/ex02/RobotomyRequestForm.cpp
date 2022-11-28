/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:04:24 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:32:39 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : 
Form("RobotomyRequestForm", 72, 45) 
{
	srand (time(NULL));
	std::cout << "Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : 
Form("RobotomyRequestForm", 72, 45),
_target(target)	
{
	srand (time(NULL));
	std::cout << "Parametric Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
Form(src),
_target(src._target)
{
	srand (time(NULL));
	std::cout << "Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_target = src.getTarget();

	return *this;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::FormNotSignedException();;
	if (rand() % 2)
	{
		std::cout << "* DRILLLLL DRILLLLL (NOISE) *" << std::endl;
		std::cout << this->_target << " has been robotomized." << std::endl;
	}
	else
		std::cout << this->_target << " failed to be robotomized." << std::endl;

}
