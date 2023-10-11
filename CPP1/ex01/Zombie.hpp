/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:33:10 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/11 21:42:21 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Zombie* zombieHorde( int N, std::string name );