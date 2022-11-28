/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:06 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/09/07 12:58:56 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Cat.hpp"
#include "./Dog.hpp"

int main()
{

    Dog *dog1 = new Dog();
    Cat *cat1 = new Cat;
    Dog *dog2 = new Dog(*dog1);
    Cat *cat2 = new Cat(*cat1);

    delete dog1;
    delete cat1;
    delete dog2;
    delete cat2;

	int compt;

	compt = 0;
    Animal *animal[6];
    while (compt < 6)
    {
        if (compt % 2)
            animal[compt] = new Cat();
        else
            animal[compt] = new Dog();
        compt++;
    }
    compt = 0;
    while (compt < 6)
    {
        std::cout << "----- Animal : " << compt << " -----\n";
        std::cout << animal[compt]->getType() << std::endl;
        animal[compt]->makeSound();
        compt++;
    }
    compt = 0;
    while (compt < 6)
    {
        delete animal[compt];
        compt++;
    }

    std::cout << "\n***** Given main *****\n\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; //should not create a leak
    delete i;

}
