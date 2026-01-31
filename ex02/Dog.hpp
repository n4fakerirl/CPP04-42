/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:31 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/31 14:25:21 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    Brain *_dogbrain;

    public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    virtual ~Dog();
    virtual void makeSound(void) const;
    void set_ideas(std::string idea);
    void print_ideas(void);
};