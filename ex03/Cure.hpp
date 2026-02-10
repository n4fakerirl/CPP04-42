/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:25:51 by nova              #+#    #+#             */
/*   Updated: 2026/02/10 16:04:31 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    protected:

    public:
    Cure();
    Cure(const Cure &other);
    Cure& operator=(const Cure &other);
    virtual ~Cure();

    std::string const& getType() const;
    void setType(std::string name);
    virtual Cure* clone() const;
    void use(ICharacter& target);
};
