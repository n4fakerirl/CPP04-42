/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:05:27 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 19:18:12 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    //std::cout << "Default ICharacter constructor called\n";
}

ICharacter::ICharacter(std::string name)
{
    this->_name = name;
    //std::cout << "ICharacter constructor " << this->_name << " called\n";
}

ICharacter::~ICharacter()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    //std::cout << "Destructor ICharacter called\n";
}

ICharacter::ICharacter(const ICharacter &other)
{
	*this = other;
	//std::cout << "Copy Constructor called of ICharacter\n";
}

ICharacter& ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
        }
        this->_name = other._name;
    }
	return (*this);
}
