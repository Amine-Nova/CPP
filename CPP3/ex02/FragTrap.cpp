/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:18:26 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 17:42:37 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor Has Been Called" << std::endl;
    name = "Guardians of the Galaxy";
    Hp = 100;
    Ep = 100;
    Ad = 30;
}
FragTrap::FragTrap(std::string Rocket)
{
    std::cout << "FragTrap Constructor Has Been Called" << std::endl;
    name = Rocket;
    Hp = 100;
    Ep = 100;
    Ad = 30;
}
FragTrap::FragTrap(const FragTrap &a)
{
    *this = a;
}
FragTrap &FragTrap::operator=(const FragTrap &a)
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
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap : \"Up top for a high-five!\"" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Has Been Called" << std::endl;
}