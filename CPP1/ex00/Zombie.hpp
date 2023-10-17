/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:25:17 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/17 17:08:56 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class Zombie
{
    public:
        void announce();
        Zombie(const std::string);
        Zombie();
        ~Zombie();
    private:
		std::string name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);


