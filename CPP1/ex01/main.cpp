/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:33:05 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/11 21:44:26 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie *z;
    int i = 0, n = 5;

    z = zombieHorde(n, "Amine");
    while(i < n)
    {
        z[i].announce();
        i++;
    }
    delete(z);
}