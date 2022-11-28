/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:41:42 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/13 18:23:47 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data test;
	Data *ptr;
	uintptr_t stream_bits;

	test.verif = "Everything is ok\n";
	stream_bits = serialize(&test);
	std::cout << stream_bits << std::endl;

	ptr = deserialize(stream_bits);
	std::cout << ptr->verif << std::endl;

	return (0);
}
