/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:15:46 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/17 18:05:35 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *BW;
    std::string name;
public:
    void attack();
    void setWeapon(Weapon &wepon);
    HumanB(std::string name);
    HumanB();
    ~HumanB();
};
