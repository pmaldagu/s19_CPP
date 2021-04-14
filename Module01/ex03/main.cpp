/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:14:54 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 13:44:18 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde* Horde;
	int N;

	N = 5;
	std::srand (std::time(nullptr));
	std::cout << "---Walking Dead---"  << std::endl;
	Horde = new ZombieHorde(N);
	Horde->announce();
	std::cout << "---The heroes are here---" <<std::endl;
	delete Horde;
	std::cout << "---The End---" << std::endl;
	return (0);
}
