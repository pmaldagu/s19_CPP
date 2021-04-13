/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:13:41 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 14:32:47 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	public:
		Pony(std::string str);
		~Pony();

		void running();

	private:
		std::string name;
};

#endif
