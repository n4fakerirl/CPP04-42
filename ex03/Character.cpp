/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:44:37 by nova              #+#    #+#             */
/*   Updated: 2026/02/19 12:28:13 by ocviller         ###   ########.fr       */
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
            this->inventory[i] = m->clone();
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->inventory[idx])
        {
            this->trash[this->_trash_nbr] = this->inventory[idx];
            this->_trash_nbr++;
            this->inventory[idx] = NULL;
        }
        else
            std::cout << "no materia at this index, can't unequip\n";
    }
}
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->inventory[idx])
            this->inventory[idx]->use(target);
        else
            std::cout << "no materia available at this index\n";
    }
}

void Character::print_trash(void)
{
    for (int i = 0; i < 50; i++)
    {
        if (this->trash[i])
        {
            if (this->trash[i]->getType() == "ice")
                std::cout << "found in trash at [" << i << "] materia type : ice\n";
            else if (this->trash[i]->getType() == "cure")
                std::cout << "found in trash at [" << i << "] materia type : cure\n";
        }
    }
}

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    for (int i = 0; i < 50; i++)
        this->trash[i] = NULL;
    this->_trash_nbr = 0;
    //std::cout << "Default Character constructor called\n";
}

Character::Character(std::string name)
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
    for (int i = 0; i < 50; i++)
        this->trash[i] = NULL;
    this->_name = name;
    this->_trash_nbr = 0;
    //std::cout << "Character constructor " << this->_name << " called\n";
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    for (int i = 0; i < 50; i++)
    {
        if (this->trash[i])
            delete this->trash[i];
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
        for (int i = 0; i < 50; i++)
        {
            if (this->trash[i])
                delete this->trash[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
        for (int i = 0; i < 50; i++)
        {
            if (other.trash[i])
                this->trash[i] = other.trash[i]->clone();
            else
                this->trash[i] = NULL;
        }
        this->_name = other._name;
        this->_trash_nbr = other._trash_nbr;
    }
	return (*this);
}
