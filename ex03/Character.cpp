/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:44:37 by nova              #+#    #+#             */
/*   Updated: 2026/02/01 15:23:33 by ocviller         ###   ########.fr       */
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
    {
        if (this->inventory[idx])
            this->inventory[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->inventory[idx])
            this->inventory[idx]->use(target);
    }
}

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    //std::cout << "Default Character constructor called\n";
}

Character::Character(std::string name)
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    this->_name = name;
    //std::cout << "Character constructor " << this->_name << " called\n";
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    //std::cout << "Destructor Character called\n";
}

Character::Character(const Character &other)
{
	*this = other;
	//std::cout << "Copy Constructor called of Character\n";
}

Character& Character::operator=(const Character &other)
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
            else
                this->inventory[i] = NULL;
        }
        this->_name = other._name;
    }
	return (*this);
}
