/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:27:29 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 16:28:34 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat& operator=(const WrongCat &other);
    virtual ~WrongCat();
    virtual void makeSound(void) const;
};