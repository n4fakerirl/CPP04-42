/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:17 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/31 13:56:08 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
    std::string _type;

    public:
    Animal();
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);
    virtual ~Animal();
    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};
