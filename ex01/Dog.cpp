/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:31 by diana             #+#    #+#             */
/*   Updated: 2025/11/18 21:42:13 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
	brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) // llama al constructor de copia de Animal
{
    brain = new Brain(*other.brain);  // deep copy del Brain
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}
