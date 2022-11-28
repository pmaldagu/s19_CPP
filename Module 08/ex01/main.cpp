/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:24:09 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/17 13:31:24 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./span.hpp"

int main()
{
	std::vector<int> myints;
	Span a = Span(9);
	Span::iterator it;

	myints.push_back(10);
	myints.push_back(20);
	myints.push_back(70);
	try
	{
		a.shortestSpan();
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	a.addNumber(1);

	try
	{
		a.longestSpan();
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	a.addNumber(2);
	a.addNumber(3);
	try
	{
		a.addNumber(myints.begin(), myints.end());
		it = a.begin();
		while (it != a.end())
		{
			std::cout << "Value: " << *it << std::endl;
			it++;
		}
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		a.addNumber(42);
		a.addNumber(70);
		a.addNumber(13);
		a.addNumber(7);
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		a.addNumber(myints.begin(), myints.end());
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	Span b = Span(a);
	Span c = a;

	it = b.begin();
	std::cout << "=========B========" << std::endl;
	while (it != b.end())
	{
		std::cout << "Value: " << *it << std::endl;
		it++;
	}
	std::cout << "Shortest span = " << b.shortestSpan() << std::endl;
	it = c.begin();
	std::cout << "=========C========" << std::endl;
	while (it != c.end())
	{
		std::cout << "Value: " << *it << std::endl;
		it++;
	}
	std::cout << "Longest span = " << b.longestSpan() << std::endl;

	int i;

	i = 0;
	Span d = Span(10000);
	while ( i < 10000)
	{
		d.addNumber(5);
		i++;
	}
	std::cout << "10000 is ok!" << std::endl;
		
	return 0;
}
