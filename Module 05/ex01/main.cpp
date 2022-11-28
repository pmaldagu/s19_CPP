/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 15:38:29 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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

	std::cout << "\n===========EX01===========\n";
	std::cout << "\nTOO HIGH CONSTRUCTOR\n";
	try
	{
		Form sc = Form("ShrubberyCreation", -1, 150);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTOO LOW CONSTRUCTOR\n";
	try
	{
		Form sc = Form("ShrubberyCreation", 160, 150);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nSIGNFORM\n";
	Form rr = Form("Robotomy Request", 100, 100);
	Form pp = Form("Presidential Pardon", 1, 1);
	Bureaucrat pierre = Bureaucrat("Pierre", 31);
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
	std::cout << rr << std::endl;

	return 0;
}
