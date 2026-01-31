/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:20 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/31 13:08:14 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Dog

void Dog::set_ideas(std::string idea)
{
    this->_dogbrain->set_ideas(idea);
}

void Dog::print_ideas(void)
{
    this->_dogbrain->print_ideas();
}

Dog::Dog()
{
    this->_type = "Dog";
    this->_dogbrain = new Brain();
    std::cout << "Default Dog constructor called\n";
}

Dog::~Dog()
{
    delete this->_dogbrain;
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
        this->_dogbrain = new Brain (*other._dogbrain);
    }
	return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << this->getType() << " : Meoooooooow!\n";
}
