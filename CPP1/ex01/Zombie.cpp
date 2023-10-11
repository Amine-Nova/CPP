/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:33:08 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(const std::string str)
{
    name = str;
}

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
}