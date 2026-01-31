/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:25:51 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 15:48:34 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    protected:
    std::string _type;

    public:
    Cure();
    Cure(const Cure &other);
    Cure& operator=(const Cure &other);
    virtual ~Cure();

    std::string const& getType() const;
    void setType(std::string name);
    virtual Cure* clone() const;
};
