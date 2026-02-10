/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:25:35 by nova              #+#    #+#             */
/*   Updated: 2026/02/10 16:02:49 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure* Cure::clone(void) const
{
    Cure *dest = new Cure;
    dest->_type = this->_type;
    return (dest);
}

void Cure::setType(std::string name)
{
    this->_type = name;
}

std::string const &Cure::getType(void) const
{
    return (this->_type);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "\'s wounds *\n";
}

Cure::Cure()
{
    this->_type = "cure";
    //std::cout << "Default Cure constructor called\n";
}

Cure::~Cure()
{
    //if (this->_type[0] != '\0')
        //std::cout << "Destructor Cure " << this->getType() << " called\n";
    //else
        //std::cout << "Destructor Cure called\n";
}

Cure::Cure(const Cure &other)
{
	*this = other;
	//std::cout << "Copy Constructor called of Cure\n";
}

Cure& Cure::operator=(const Cure &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}