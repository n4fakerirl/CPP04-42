/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 02:10:27 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/31 13:06:21 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain *_catbrain;

    public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    virtual ~Cat();
    virtual void makeSound(void) const;
    virtual void set_ideas(std::string idea);
    virtual void print_ideas(void);
};