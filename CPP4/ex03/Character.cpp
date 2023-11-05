/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:41:42 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 14:13:54 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character()
{
    name = "Default";
    for(int i=0; i < 4; i++)
    {
        e[i] = NULL;
    }
    ue = NULL;
}
Character::Character(std::string ss)
{
    name = ss;
    for(int i=0; i < 4; i++)
    {
        e[i] = NULL;
    }
    ue = NULL;
}
Character::Character(const Character &a)
{
    *this = a;
}
Character &Character::operator=(const Character &a)
{
    if (this != &a)
    {
        this->name = a.name;
        for (int i=0; i < 4; i++)
        {
            if (a.e[i])
                e[i] = a.e[i]->clone();
        }
    }
    return (*this);
}
std::string const &Character::getName() const
{
    return(this->name);
}
void Character::equip(AMateria *a)
{
    int i = 0;
    delete ue;
    ue = NULL;
    if (!a)
        std::cout << "Nothing to equip" << std::endl;
    else
    {
        while(i < 4)
        {
            if (e[i] == NULL)
            {
                e[i] = a;
                std::cout << "Equiped !" << std::endl;
                return ;
            }
            else   
                i++;
        }
        std::cout << "Not Been Equiped /!\\" << std::endl;
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    else if (e[idx])
    {
        ue = e[idx];
        e[idx] = NULL;
        std::cout << "UnEquiped !" << std::endl;
        return ;
    }
    else
        std::cout << "Cannot be UnEquiped!" << std::endl;

}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if(e[idx])
        e[idx]->use(target);
}
Character::~Character()
{
    for(int i=0; i < 4; i++)
    {
        if (e[i])
            delete e[i];
    }
    if (ue)
        delete ue;
}
