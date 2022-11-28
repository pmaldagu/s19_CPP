/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:43:41 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 11:27:28 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <string.h>
# include <iomanip>
# include <iostream>

template< typename T >
void putendl(T & a)
{
	std::cout << a << std::endl;
}

template< typename T >
void iter(T* address, size_t length , void(*f)(T &))
{
	size_t i;

	i = 0;
	while (i < length)
	{
		(*f)(address[i]);
		i++;
	}
}

#endif
