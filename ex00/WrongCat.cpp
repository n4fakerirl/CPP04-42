/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:27:05 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 11:26:19 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "Copy Constructor called of WrongCat\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << this->getType() << " : Meoooooooow!\n";
}
