/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:44:00 by nova              #+#    #+#             */
/*   Updated: 2026/02/10 16:05:09 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void AMateria::use(ICharacter& target)
{
    (void)target;
}
    
std::string const& AMateria::getType(void) const
{
    return (this->_type);
}

AMateria::AMateria()
{
    //std::cout << "Default AMateria constructor called\n";
}
AMateria::AMateria(std::string const &type)
{
    this->_type = type;
    //std::cout << "AMateria constructor " << this->getType() << " called\n";
}

AMateria::~AMateria()
{
    //if (this->_type[0] != '\0')
        //std::cout << "Destructor AMateria " << this->getType() << " called\n";
    //else
        //std::cout << "Destructor AMateria called\n";
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	//std::cout << "Copy Constructor called of AMateria\n";
}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
    {
        this->_type = other._type;
    }
	return (*this);
}
