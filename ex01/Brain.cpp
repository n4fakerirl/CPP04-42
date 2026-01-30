/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:08:18 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 16:09:25 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called\n";
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called\n";
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Copy Constructor called of Brain\n";
}

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
	return (*this);
}
