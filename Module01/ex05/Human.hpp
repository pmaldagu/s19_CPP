/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:32:12 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 16:17:36 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();

		Brain& getBrain();
		std::string identify();

	private:
		Brain brain;

};

#endif
