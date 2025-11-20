/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:35 by diana             #+#    #+#             */
/*   Updated: 2025/11/20 16:32:18 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();                      
    Dog(const Dog& other);       
    Dog& operator=(const Dog& other); 
    virtual ~Dog();              

    virtual void makeSound() const;

    Brain* getBrain() const;

private:
    Brain* brain;
};

#endif
