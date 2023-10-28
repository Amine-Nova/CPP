/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:31:27 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/28 20:07:38 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor Has Been Called" << std::endl;
    name = "Eternals";
    Hp = 100;
    Ep = 50;
    Ad = 20;
}
ScavTrap::ScavTrap(std::string Celestials)
{
    std::cout << "ScavTrap Constructor Has Been Called" << std::endl;
    name = Celestials;
    Hp = 100;
    Ep = 50;
    Ad = 20;
}
ScavTrap::ScavTrap(const ScavTrap &a)
{
    *this = a;
}
void ScavTrap::attack(const std::string& enemy)
{
    if (Ep > 0)
    {
        std::cout << "ScavTrap " << name <<  " a Attaqué " << enemy << " Provoquant " << Ad << " Point de Dégâts" << std::endl;
        Ep--;
        std::cout << name << " a Perdu 1 Point d'Énergie" << std::endl;
        std::cout << name << " Énergie Point = " << Ep << std::endl;
    }
    else
    {
        std::cout << "Énergie Expiré" << std::endl;
        std::cout << name << " Énergie Point = " << Ep << std::endl;
        return ;
    }
}
ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
    if (this != &a)
    {
        this->name = a.name;
        this->Hp = a.Hp;
        this->Ep = a.Ep;
        this->Ad = a.Ad;
    }
    return (*this);
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is in Gate Keeper Mode" << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Has Been Called" << std::endl;
}