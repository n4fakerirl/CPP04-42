/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nova <nova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:34:37 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/31 13:06:13 by nova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
    std::string _ideas[10];

    public:
    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain &other);
    ~Brain();
    void set_ideas(std::string idea);
    void print_ideas(void);
    std::string *get_ideas(void);
};
