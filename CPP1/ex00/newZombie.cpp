/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:28:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/18 12:06:06 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *Z;

    Z = new Zombie(name);
    return (Z);
}