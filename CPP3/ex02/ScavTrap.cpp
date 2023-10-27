/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:31:27 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 17:08:42 by abenmous         ###   ########.fr       */
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