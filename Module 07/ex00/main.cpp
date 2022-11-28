/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:19:51 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/15 10:41:26 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./whatever.hpp"

int main()
{
	int a = 21;
	int b = 42;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Max: " << ::max<int>(a, b) << std::endl;
	std::cout << "Min: " << ::min<int>(a, b) << std::endl;
	::swap<int>(a, b);
	std::cout << "Swap, b = " << b << std::endl;

	float c = -1.7f;
	float d = 4.2f;

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "Max: " << ::max<float>(c, d) << std::endl;
	std::cout << "Min: " << ::min<float>(c, d) << std::endl;
	::swap<float>(c, d);
	std::cout << "Swap, d = " << d << std::endl;

	std::string e = "salut";
	std::string f = "coucou";

	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "Max: " << ::max<std::string>(e, f) << std::endl;
	std::cout << "Min: " << ::min<std::string>(e, f) << std::endl;
	::swap<std::string>(e, f);
	std::cout << "Swap, f = " << f << std::endl;

	return 0;
}
