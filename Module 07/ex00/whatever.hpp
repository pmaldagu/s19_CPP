/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:23:54 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 10:30:29 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHTEVER_HPP
#define WHTEVER_HPP

#include <iostream>

template< typename T >
void swap(T& a, T& b)
{
    T swap;

    swap = a;
    a = b;
    b = swap;
}

template< typename T >
T const & max( T const & a, T const & b)
{
	if (a > b)
		return a;
	else
		return b;
}

template< typename T >
T const & min( T const & a, T const & b)
{
	if (a > b)
		return b;
	else
		return a;
}

#endif
