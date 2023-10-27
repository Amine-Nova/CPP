/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:36:51 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 13:26:28 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "The Constructor Has Been Called" << std::endl;
    name = "Avengers";
    Hp = 10;
    Ep = 10;
    Ad = 0;
}
ClapTrap::ClapTrap(std::string Shield)
{
    std::cout << "The Constructor Has Been Called" << std::endl;
    name = Shield;
    Hp = 10;
    Ep = 10;
    Ad = 0;
}
ClapTrap::ClapTrap(const ClapTrap &a)
{
    *this = a;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &a)
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
void ClapTrap::attack(const std::string& target)
{
    if (Ep > 0)
    {
        std::cout << "ClapTrap " << name <<  " Attacks " << target << " Causing " << Ad << " Points of Damage!" << std::endl;
        Ep--;
        std::cout << name << " Lost 1 Energy" << std::endl;
        std::cout << name << " Energy Point = " << Ep << std::endl;
    }
    else
    {
        std::cout << "Energy Expired" << std::endl;
        std::cout << name << " Energy Point = " << Ep << std::endl;
        return ;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hp >= (int)amount)
    {
        Hp -= amount;
        std::cout << name << " Has Take " << amount << " Point Damage" << std::endl;
        std::cout << name << " Lost " << amount << " Hit Point" << std::endl;
        std::cout << name << " Hit Point = " << Hp << std::endl;
    }
    else
    {
        std::cout << name << " Health Points Have Teached 0" << std::endl;
        return ;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (Ep > 0)
    {
        std::cout << name << " Have Been Repaired" << std::endl;
        Hp += amount;
        std::cout << name << " Health Point Have Been Boosted By " << amount << " Point" << std::endl;
        std::cout << name << " Health Point = " << Hp << std::endl;
        Ep--;
        std::cout << name << " Lost 1 Energy" << std::endl;
        std::cout << name << " Energy Point = " << Ep << std::endl;
    }
    else
    {
        std::cout << "Energy Expired" << std::endl;
        std::cout << name << " Energy Point = " << Ep << std::endl;
        return ;
    }
}
ClapTrap::~ClapTrap()
{
    std::cout << "The Destructor Has Been Called" << std::endl;
}