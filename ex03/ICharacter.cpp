/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:05:27 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 18:28:14 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

std::string const& ICharacter::getName(void) const
{
    return (this->_name);
}

void ICharacter::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL && m != NULL)
        {
            this->inventory[i] = m;
            return ;
        }
    }
}

void ICharacter::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        delete this->inventory[idx];
}
void ICharacter::use(int idx, ICharacter& target)
{
    this->inventory[idx]->use(target);
}

ICharacter::ICharacter()
{
    std::cout << "Default ICharacter constructor called\n";
}

ICharacter::ICharacter(std::string name)
{
    this->_name = name;
    std::cout << "ICharacter constructor " << this->_name << " called\n";
}

ICharacter::~ICharacter()
{
    for (int i = 0; i < 4; i++)
        delete this->inventory[i];
    std::cout << "Destructor ICharacter called\n";
}

ICharacter::ICharacter(const ICharacter &other)
{
	*this = other;
	std::cout << "Copy Constructor called of ICharacter\n";
}

ICharacter& ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            delete this->inventory[i];
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
        }
        this->_name = other._name;
    }
	return (*this);
}
