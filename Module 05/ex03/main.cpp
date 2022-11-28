/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/10 13:28:44 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main( void ) 
{
	std::cout << "\n===========EX00===========\n";
	std::cout << "\nTOO HIGH CONSTRUCTOR\n";
	try
	{
		Bureaucrat phil = Bureaucrat("Phil", -1);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTOO LOW CONSTRUCTOR\n";
	try
	{
		Bureaucrat paul = Bureaucrat("Paul", 160);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nNO CATCH CONSTRUCTOR\n";
	try
	{
		Bureaucrat pierre = Bureaucrat("Pierre", 1);
		Bureaucrat evrard = Bureaucrat("Evrard", 150);
		std::cout << pierre;
		std::cout << evrard;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTOO HIGH INCREMENT\n";
	try
	{
		Bureaucrat pierre = Bureaucrat("Pierre", 1);
		pierre.increment();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTOO LOW DECREMENT\n";
	try
	{
		Bureaucrat evrard = Bureaucrat("Evrard", 150);
		evrard.decrement();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nINCREMENT AND DECREMENT\n";
	try
	{
		Bureaucrat pierre = Bureaucrat("Pierre", 1);
		Bureaucrat evrard = Bureaucrat("Evrard", 150);
		pierre.decrement();
		evrard.increment();
		std::cout << pierre;
		std::cout << evrard;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n===========EX02===========\n";
	ShrubberyCreationForm sc = ShrubberyCreationForm("Tree");
	RobotomyRequestForm rr = RobotomyRequestForm("Picard");
	PresidentialPardonForm pp = PresidentialPardonForm("Obama");
	Bureaucrat pierre = Bureaucrat("Pierre", 31);
	Bureaucrat chirac = Bureaucrat("Chirac", 1);
	std::cout << "\nSIGNFORM N EXECUTE\n";

	std::cout << pierre << std::endl;
	std::cout << chirac << std::endl;
	std::cout << pp << std::endl;
	try
	{
		pp.beSigned(pierre);
	}
	catch(std::exception & e)
	{
		pierre.signForm(pp);
	}
	std::cout << rr << std::endl;
	pierre.signForm(rr);
	pierre.executeForm(rr);
	std::cout << rr << std::endl;

	std::cout << pp << std::endl;
	chirac.signForm(pp);
	chirac.executeForm(pp);
	std::cout << rr << std::endl;

	std::cout << pp << std::endl;
	chirac.signForm(sc);
	chirac.executeForm(sc);
	std::cout << rr << std::endl;

	std::cout << "\n===========EX03===========\n";
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	pierre.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("bruxelles formation", "Bender");
	delete rrf;

	return 0;
}
