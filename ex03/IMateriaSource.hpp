/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 16:39:52 by nova              #+#    #+#             */
/*   Updated: 2026/02/01 15:28:47 by ocviller         ###   ########.fr       */
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
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
