/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:46:36 by nova              #+#    #+#             */
/*   Updated: 2026/02/23 12:41:33 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
    AMateria *stock[4];
    
    public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource& operator=(const MateriaSource &other);
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const & type);
};
