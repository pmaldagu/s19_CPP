/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:12:49 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/10 13:27:02 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) 
{
	std::cout << "Default Constructor called" << std::endl;
}

Intern::Intern( Intern const & src )
{
	(void)src;
	std::cout << "Copy constructor called" << std::endl;
}

Intern::~Intern( void )
{
	std::cout << "Destructor called" << std::endl;
}

Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	std::cout << "Assignation operator called" << std::endl;

	return *this;
}

Form * Intern::makeShrubbery( std::string target )
{
	return new ShrubberyCreationForm(target);
}

Form * Intern::makeRobotomy( std::string target )
{
	return new RobotomyRequestForm(target);
}

Form * Intern::makePresidential( std::string target )
{
	return new PresidentialPardonForm(target);
}

Form * Intern::makeForm( std::string form, std::string target )
{
	int i;

	i = 0;
	std::string name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*make[3])( std::string ) = { &Intern::makeShrubbery, 
		&Intern::makeRobotomy, &Intern::makePresidential};

	while (i < 3)
	{
		if (name[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*make[i])(target);
		}
		i++;
	}
	std::cout << "The intern is in panique, he can't create this kind of form" << std::endl;
	return nullptr;
}
