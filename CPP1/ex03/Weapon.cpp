/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:15:51 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/14 16:50:24 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string)
{
    type = "Sword";
}
Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType()
{
    return(type);
}
void Weapon::setType(const std::string t)
{
    type = t;
}