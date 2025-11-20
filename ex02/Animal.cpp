/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:17 by diana             #+#    #+#             */
/*   Updated: 2025/11/19 16:06:14 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {}

Animal::Animal(const std::string& type) : type(type) {}

Animal::Animal(const Animal& other) : type(other.type) {}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal() {}

std::string Animal::getType() const
{
    return type;
}
