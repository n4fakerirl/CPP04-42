/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:10 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 11:25:50 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CAT

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Default Cat constructor called\n";
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "Copy Constructor called of Cat\n";
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << this->getType() << " : Meoooooooow!\n";
}
