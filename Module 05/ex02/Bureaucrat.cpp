/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:12:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 18:39:42 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : 
_grade(150)
{
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : 
_name( name )
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Parametric Constructor called" << std::endl;
	this->_grade = grade;
}


Bureaucrat::Bureaucrat( Bureaucrat const & src ) :
_name(src._name),
_grade(src._grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_grade = src.getGrade();

	return *this;
}

std::string const & Bureaucrat::getName( void ) const
{
	return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void Bureaucrat::increment( void )
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrement( void )
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm( Form & form )
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << 
			" because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << this->_name << " cannot executes " << form.getName() << 
			" because " << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;

	return o;
}
