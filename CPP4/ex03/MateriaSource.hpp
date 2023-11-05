/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:12:01 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/04 22:30:49 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"IMateriaSource.hpp"
#include"AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *Am[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &a);
    MateriaSource &operator=(const MateriaSource &a);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};

