/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:27 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:27:01 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    virtual ~Cat();
    virtual void makeSound(void) const;
};