/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/09 13:58:41 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main( void ) 
{
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

	return 0;
}
