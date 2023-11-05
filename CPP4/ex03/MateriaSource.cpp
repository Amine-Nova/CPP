/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:12:42 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 14:26:43 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4 ; i++)
        Am[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &a)
{
    *this = a;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &a)
{
    if(this != &a)
    {
        for(int i = 0; i < 4 ; i++)
        {
            if (this->Am[i])
                delete Am[i];
            if (a.Am[i])
                this->Am[i] = a.Am[i]->clone();
        }
    }
    return (*this);

}
void MateriaSource::learnMateria(AMateria* a)
{
    for(int i = 0; i < 4; i++)
    {
        if (Am[i] == NULL)
        {
            Am[i] = a;
            std::cout << "Learned" << std::endl;
            return ;
        }
    }
    std::cout << "Cannot be Learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (Am[i])
        {
            if (Am[i]->getType() == type)
                return (Am[i]->clone());
        }
    }
    return (0);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
        delete Am[i];
}