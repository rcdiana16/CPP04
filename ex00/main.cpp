/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:31:02 by diana             #+#    #+#             */
/*   Updated: 2025/11/18 17:50:39 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

/*
int main()
{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    i->makeSound();
	j->makeSound();
	meta->makeSound();

    delete i;
    delete j;

    return 0;
}*/

int main()
{
    std::cout << "----- Correct Animals -----" << std::endl;
    const Animal* a = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();

    std::cout << a->getType() << " says: ";
    a->makeSound();

    std::cout << d->getType() << " says: ";
    d->makeSound();

    std::cout << c->getType() << " says: ";
    c->makeSound();

    delete a;
    delete d;
    delete c;

    std::cout << "\n----- Wrong Animals -----" << std::endl;
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wa->getType() << " says: ";
    wa->makeSound();

    std::cout << wc->getType() << " says: ";
    wc->makeSound();

    delete wa;
    delete wc;

    return 0;
}