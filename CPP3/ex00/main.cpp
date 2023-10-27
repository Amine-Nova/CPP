/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:36:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 13:24:26 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
    ClapTrap a("Amine");

    a.attack("Kang");
    a.attack("Kang");
    a.takeDamage(5);
    a.beRepaired(4);
}