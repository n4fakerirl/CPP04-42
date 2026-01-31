/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:46:36 by nova              #+#    #+#             */
/*   Updated: 2026/01/31 19:56:02 by nova             ###   ########.fr       */
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
    ~MateriaSource();
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const & type);
};
