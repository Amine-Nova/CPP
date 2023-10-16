/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:15:39 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/14 16:48:39 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << AW.getType() << std::endl;
}

HumanA::HumanA(const std::string smiya, Weapon &wp) : AW(wp)
{
    name = smiya;
}

HumanA::~HumanA()
{
}