/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:48:57 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/14 13:57:18 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
    std::string *pointer = &brain;
    std::string &reference = brain;

    std::cout << "Pointer : " << *pointer << std::endl;
    std::cout << "Reference : " << reference << std::endl;
    //std::cout << "Reference adress : " << &reference << std::endl;
    //std::cout << "Adress : " << &brain << std::endl;
	return (0);
}
