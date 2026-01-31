/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:27:55 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 15:30:34 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
    std::string _type;

    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();
    void makeSound(void) const;
    std::string getType(void) const;
};