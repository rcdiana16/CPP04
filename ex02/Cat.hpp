/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:35:06 by diana             #+#    #+#             */
/*   Updated: 2025/11/18 21:36:20 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat& other);
	~Cat();

	Cat& operator=(const Cat& other);

	void makeSound() const;

	Brain* getBrain() const;

	private:
    Brain* brain;
};

#endif