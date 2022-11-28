/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:58:59 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:09:32 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include "./Base.hpp"

class B : public Base
{
	public:
		B();
		B( B const & rhs);
		virtual ~B();
		
		B & operator=( B const & rhs );
};


#endif
