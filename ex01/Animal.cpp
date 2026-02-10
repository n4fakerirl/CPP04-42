/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:57 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/10 15:56:22 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ANIMAL

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    
}

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << "Default Animal constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called\n";
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Copy Constructor called of Animal\n";
}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}
