/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:15:41 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/14 16:52:01 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &AW;
    std::string name;

public:
    void attack();
    HumanA(const std::string smiya, Weapon &wp);
    HumanA();
    ~HumanA();
};
