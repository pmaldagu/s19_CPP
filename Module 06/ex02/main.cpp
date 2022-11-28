/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:57:25 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:12:57 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "./A.hpp"
#include "./B.hpp"
#include "./C.hpp"

//https://www.ibm.com/docs/en/i/7.2?topic=operator-dynamic-casts-references

Base *generate(void)
{
	int key;
	srand(time(NULL));
	
	key = rand() % 3;
	if (key == 0)
		return new A();
	else if	(key == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast & e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast & e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast & e)
	{
	}
}

int main()
{
	Base* ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);

	return (0);
}	
