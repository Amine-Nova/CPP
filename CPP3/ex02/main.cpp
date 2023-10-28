/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:36:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/28 20:11:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    ClapTrap a("Thor");
    ScavTrap b("Loki");
    FragTrap c("Odin");
    ClapTrap *d = new ScavTrap(b);

    a.attack("Gorr");
    b.attack("Kang");
    c.attack("Hela");
    d->attack("Amine");
    b.guardGate();
    c.highFivesGuys();
    a.takeDamage(5);
    b.takeDamage(50);
    c.takeDamage(60);
    a.beRepaired(4);
    b.beRepaired(40);
    c.beRepaired(50);

    delete d;
}