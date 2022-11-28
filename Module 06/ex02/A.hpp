/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:58:59 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:17:44 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "./Base.hpp"

class A : public Base
{
	public:
		A();
		A( A const & rhs);
		virtual ~A();
		
		A & operator=( A const & rhs );
};


#endif
