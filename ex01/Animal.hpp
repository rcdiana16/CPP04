/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:25:27 by diana             #+#    #+#             */
/*   Updated: 2025/11/17 16:46:57 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
	Animal();
	Animal(const std::string& type);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;

	private:
	std::string type;

};

#endif