/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:39:52 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 19:26:13 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource
{
    protected:
    
    public:
    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
