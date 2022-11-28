/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:58:59 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:09:40 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include "./Base.hpp"

class C : public Base
{
	public:
		C();
		C( C const & rhs);
		virtual ~C();
		
		C & operator=( C const & rhs );
};


#endif
