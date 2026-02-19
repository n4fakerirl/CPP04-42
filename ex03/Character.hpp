/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:42:18 by nova              #+#    #+#             */
/*   Updated: 2026/02/19 12:26:51 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
    std::string _name;
    AMateria *inventory[4];
    AMateria *trash[50];
    int       _trash_nbr;

    public:
    Character();
    Character(std::string name);
    Character(const Character &other);
    Character& operator=(const Character &other);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    void print_trash(void);
};
