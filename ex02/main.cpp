/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 21:43:04 by diana             #+#    #+#             */
/*   Updated: 2025/11/20 16:04:01 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "----- Creating Animals -----" << std::endl;
    Dog* dog1 = new Dog();
    Cat* cat1 = new Cat();

    std::cout << "\n----- Making sounds -----" << std::endl;
    dog1->makeSound();
    cat1->makeSound();

    std::cout << "\n----- Testing Brain with copy constructor -----" << std::endl;
    dog1->getBrain()->setIdea(0, "I want bones");
    Dog* dog2 = new Dog(*dog1);

    std::cout << "dog1 idea 0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea 0: " << dog2->getBrain()->getIdea(0) << std::endl;

    dog2->getBrain()->setIdea(0, "I want meat");
    std::cout << "After modifying dog2's brain:" << std::endl;
    std::cout << "dog1 idea 0: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea 0: " << dog2->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n----- Testing operator= -----" << std::endl;
    Cat* cat2 = new Cat();
    cat2->getBrain()->setIdea(0, "I want milk");

    Cat* cat3 = new Cat();
    *cat3 = *cat2;

    std::cout << "cat2 idea 0: " << cat2->getBrain()->getIdea(0) << std::endl;
    std::cout << "cat3 idea 0: " << cat3->getBrain()->getIdea(0) << std::endl;

    cat3->getBrain()->setIdea(0, "I want fish");
    std::cout << "After modifying cat3's brain:" << std::endl;
    std::cout << "cat2 idea 0: " << cat2->getBrain()->getIdea(0) << std::endl;
    std::cout << "cat3 idea 0: " << cat3->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n----- Cleaning up -----" << std::endl;
    delete dog1;
    delete dog2;
    delete cat1;
    delete cat2;
    delete cat3;

    return 0;
}
