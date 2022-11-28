/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:28:43 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/20 18:58:04 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen Alessio;
	std::string lvls[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int key;

	if (argc != 2)
		return (1);

	key = 0;
	while(key < 4 && argv[1] != lvls[key])
		key++;
	if (argv[1] != lvls[key])
		key++;
	switch (key)
	{
		case 0:
			std::cout << "[ " << lvls[0] << " ]" << std::endl;
			Alessio.complain(lvls[0]);
		case 1:
			std::cout << "[ " << lvls[1] << " ]" << std::endl;
			Alessio.complain(lvls[1]);
		case 2:
			std::cout << "[ " << lvls[2] << " ]" << std::endl;
			Alessio.complain(lvls[2]);
		case 3:
			std::cout << "[ " << lvls[3] << " ]" << std::endl;
			Alessio.complain(lvls[3]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
	return (0);
}
