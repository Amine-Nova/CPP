/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:36:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/28 20:05:21 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
    ClapTrap a("Thor");
    ScavTrap b("Loki");
    a.attack("Gorr");
    b.attack("Kang");
    b.guardGate();
    a.takeDamage(5);
    b.takeDamage(50);
    a.beRepaired(4);
    b.beRepaired(40);
}