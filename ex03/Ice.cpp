/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:26:22 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 15:48:42 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

std::string const &Ice::getType(void) const
{
    return (this->_type);
}

void Ice::setType(std::string name)
{
    this->_type = name;
}

Ice* Ice::clone(void) const
{
    Ice *dest = new Ice;
    dest->_type = this->_type;
    return (dest);
}

Ice::Ice()
{
    this->_type = "ice";
    std::cout << "Default Ice constructor called\n";
}

Ice::~Ice()
{
    if (this->_type[0] != '\0')
        std::cout << "Destructor Ice " << this->getType() << " called\n";
    else
        std::cout << "Destructor Ice called\n";
}

Ice::Ice(const Ice &other)
{
	*this = other;
	std::cout << "Copy Constructor called of Ice\n";
}

Ice& Ice::operator=(const Ice &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}
