/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:27 by diana             #+#    #+#             */
/*   Updated: 2025/11/20 16:28:46 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
    virtual ~Animal(); 

    std::string getType() const;

    virtual void makeSound() const = 0; 
protected:
    Animal();                        
    Animal(const std::string& type);  
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    std::string type;
};

#endif
