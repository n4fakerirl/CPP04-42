/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:29:25 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:29:44 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << this->getType() << " : UHundebnwuqd8ide\n";
}

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "Default WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "Copy Constructor called of WrongAnimal\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}
