/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:06:54 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/13 14:43:01 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *Jason = new Pony("Jason");

    Jason->running();
    delete Jason;
	std::cout << "-> End of the heap fonction" << std::endl;
}

void ponyOnTheStack()
{
    Pony Dick("Dick");

    Dick.running();
	std::cout << "-> End of the stack fonction" << std::endl;
}

int main()
{
	std::cout << "----- Pony on the Heap -----" << std::endl;
    ponyOnTheHeap();
    std::cout << "----- Pony on the Stack ----" << std::endl;
    ponyOnTheStack();
    return (0);
}
