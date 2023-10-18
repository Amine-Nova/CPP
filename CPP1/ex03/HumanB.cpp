/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:15:43 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/18 12:26:03 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << BW->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wepon)
{
    BW = &wepon;
}

HumanB::HumanB(const std::string smiya)
{
    BW = NULL;
    name = smiya;
}
HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}