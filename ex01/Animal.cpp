/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:17 by diana             #+#    #+#             */
/*   Updated: 2025/11/17 20:17:46 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
//En : type(type) estás diciendo: "La cajita interna type va a guardar lo que vino como type del usuario."
Animal::Animal(const std::string& type) : type(type) {}

Animal::Animal() : type("Generic") {}

Animal::~Animal() {}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "The animal make a generic sound" << std::endl;
}