/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:17 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/26 15:06:25 by ocviller         ###   ########.fr       */
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
