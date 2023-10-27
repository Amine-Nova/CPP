/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:36:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 17:35:53 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    ClapTrap a("Thor");
    ScavTrap b("Loki");
    FragTrap c("Odin");

    a.attack("Gorr");
    b.attack("Kang");
    c.attack("Hela");
    b.guardGate();
    a.takeDamage(5);
    b.takeDamage(50);
    c.takeDamage(60);
    a.beRepaired(4);
    b.beRepaired(40);
    c.beRepaired(50);
}