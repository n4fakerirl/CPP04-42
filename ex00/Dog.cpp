/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:20 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 11:26:02 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Default Dog constructor called\n";
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Copy Constructor called of Dog\n";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << this->getType() << " : Woaaaaaaf!\n";
}
