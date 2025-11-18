/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:07:23 by diana             #+#    #+#             */
/*   Updated: 2025/11/18 17:47:57 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
    WrongAnimal();
	WrongAnimal(const std::string& type);
    ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;

	protected:
    std::string type;
};

#endif