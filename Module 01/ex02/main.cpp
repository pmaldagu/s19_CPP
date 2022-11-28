/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:53:28 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/20 14:37:34 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

	
int main()
{
	std::string str= "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Pointer : " << *stringPTR << std::endl;
    std::cout << "Reference : " << stringREF << std::endl;
    std::cout << "Reference adress : " << &stringREF << std::endl;
    std::cout << "Adress : " << &str << std::endl;
    std::cout << "Pointer address : " << stringPTR << std::endl;
	return (0);
}
