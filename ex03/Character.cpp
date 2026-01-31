/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:44:37 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 18:46:17 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const& Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        delete this->inventory[idx];
}
void Character::use(int idx, ICharacter& target)
{
    this->inventory[idx]->use(target);
}

Character::Character()
{
    std::cout << "Default Character constructor called\n";
}

Character::Character(std::string name)
{
    this->_name = name;
    std::cout << "Character constructor " << this->_name << " called\n";
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->inventory[i];
    std::cout << "Destructor Character called\n";
}

Character::Character(const Character &other)
{
	*this = other;
	std::cout << "Copy Constructor called of Character\n";
}

Character& Character::operator=(const Character &other)
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
