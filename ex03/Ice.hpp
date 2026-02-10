/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:25:58 by nova              #+#    #+#             */
/*   Updated: 2026/02/10 16:04:46 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    protected:

    public:
    Ice();
    Ice(const Ice &other);
    Ice& operator=(const Ice &other);
    virtual ~Ice();

    std::string const & getType() const;
    void setType(std::string name);
    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};
