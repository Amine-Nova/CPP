/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:36:49 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 19:28:52 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>


class ClapTrap
{
protected:
    std::string name;
    int Hp;
    int Ep;
    int Ad;
public:
    ClapTrap();
    ClapTrap(std::string Shield);
    ClapTrap(const ClapTrap &a); // Copy Constractur
    ClapTrap &operator=(const ClapTrap &a); // Copy assignment operator
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap(); // Destructor
};