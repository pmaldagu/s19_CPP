/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:23:50 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/17 13:49:33 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://en.cppreference.com/w/cpp/container/stack

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){};
		MutantStack(MutantStack const& copy) : std::stack<T>(copy){};
		virtual ~MutantStack() {};
		MutantStack& operator=(MutantStack const& copy)
		{
			if (this != &copy)
			{
				this->c = copy.c;
			}
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator 	iterator;

		iterator begin()
		{
			return this->c.begin();
		};
		iterator end()
		{
			return this->c.end();
		};

	private:

};

#endif
