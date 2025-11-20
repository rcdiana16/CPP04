/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:43:04 by diana             #+#    #+#             */
/*   Updated: 2025/11/20 16:40:05 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

int main()
{
    const int N = 4;
    Animal* animals[N];

    std::cout << "----- Creating Animals -----" << std::endl;
    for (int i = 0; i < N; i++)
    {
        if (i < N / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n----- Making Sounds -----" << std::endl;
    for (int i = 0; i < N; i++)
        animals[i]->makeSound();

    std::cout << "\n----- Testing Deep Copy -----" << std::endl;
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "I want bones");

    Dog* dog2 = new Dog(*dog1);
    std::cout << "dog1 idea 0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea 0: " << dog2->getBrain()->getIdea(0) << std::endl;

    dog2->getBrain()->setIdea(0, "I want meat");
    std::cout << "After modifying dog2's brain:" << std::endl;
    std::cout << "dog1 idea 0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea 0: " << dog2->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n----- Cleaning Up -----" << std::endl;
    for (int i = 0; i < N; i++)
        delete animals[i];

    delete dog1;
    delete dog2;

    return 0;
}
