/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:11:10 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 02:23:57 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Cat constructor called\n";
}

Cat::~Cat()
{
    std::cout << "Destructor Cat " << this->getName() << " called\n";
}

Cat::Cat(const Cat &other)
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