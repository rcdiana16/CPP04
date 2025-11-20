/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:54:43 by diana             #+#    #+#             */
/*   Updated: 2025/11/18 21:08:55 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& operator=(const Brain& other);

    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);

	private:
    std::string ideas[100];
};

#endif
