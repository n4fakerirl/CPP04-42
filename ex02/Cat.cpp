/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:10 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/19 12:04:07 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CAT

void Cat::set_ideas(std::string idea)
{
    this->_catbrain->set_ideas(idea);
}

void Cat::print_ideas(void)
{
    this->_catbrain->print_ideas();
}

Cat::Cat()
{
    this->_type = "Cat";
    this->_catbrain = new Brain();
    std::cout << "Default Cat constructor called\n";
}

Cat::~Cat()
{
    delete this->_catbrain;
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
        if (this->_catbrain)
            delete this->_catbrain;
        this->_type = other._type;
        this->_catbrain = new Brain(*other._catbrain);
    }
	return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << this->getType() << " : Meoooooooow!\n";
}
