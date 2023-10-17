/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/17 17:07:30 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void Zombie::announce()
{
    std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    name = "Default";
}

Zombie::Zombie(const std::string zz)
{
    name = zz;
}
Zombie::~Zombie()
{
    std::cout << "The Zombie " << name <<  " has been Deleted" << std::endl;
}