/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:08:18 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/31 13:05:31 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void Brain::set_ideas(std::string idea)
{
    for (int i = 0; i < 10; i++)
        this->_ideas[i] = idea;
}

void Brain::print_ideas(void)
{
    for (int i = 0; i < 10; i++)
        std::cout << this->_ideas[i] << "\n";
}

std::string *Brain::get_ideas(void)
{
    return (this->_ideas);
}

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
        for (int i = 0; i < 10; i++)
            this->_ideas[i] = other._ideas[i];
    }
	return (*this);
}
