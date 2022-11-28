/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:50:58 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/16 16:16:28 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://www.cplusplus.com/reference/vector/vector/begin/
//https://www.geeksforgeeks.org/std-find-in-cpp/

#ifndef EASY_HPP
#define EASY_HPP

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

class NotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found");
		}
};

template < typename T >
typename T::iterator easyfind( T & cont, int to_find)
{
	typename T::iterator it;

	if (cont.empty())
		throw NotFound();
	//it = cont.begin();
	it = std::find(cont.begin(), cont.end(), to_find);
	if (it != cont.end())
		return it;
	else
		throw NotFound();
	//while (it != cont.end())
	//{
	//	if (*it == to_find)
	//		return it;
	//	it++;
	//}
	throw NotFound();
}

#endif
