/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:31 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:15:37 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    virtual ~Dog();
    virtual void makeSound(void) const;
};
