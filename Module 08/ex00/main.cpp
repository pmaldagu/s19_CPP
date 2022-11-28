/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:06:32 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/16 12:56:48 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;

	std::vector<int>::iterator itv;
	std::list<int>::iterator itl;

	v.push_back(7);
	v.push_back(5);
	v.push_back(16);
	v.push_back(8);
	
	l.push_back(1);
	l.push_back(3);
	l.push_back(9);
	l.push_back(10);

	try
	{
		std::cout << "6 in vector" << std::endl;
		itv = ::easyfind(v, 6);
		std::cout << "Found" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Catch: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "16 in vector" << std::endl;
		itv = ::easyfind(v, 16);
		std::cout << "Found" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Catch: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "6 in list" << std::endl;
		itl = ::easyfind(l, 6);
		std::cout << "Found in " << std::distance(l.begin(), itl) << " position" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Catch: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "10 in list" << std::endl;
		itl = ::easyfind(l, 10);
		std::cout << "Found in " << std::distance(l.begin(), itl) << " position" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Catch: " << e.what() << std::endl;
	}

	return 0;
}
