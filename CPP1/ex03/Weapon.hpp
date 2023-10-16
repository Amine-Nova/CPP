/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:15:53 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/13 12:28:29 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;
public:
    const std::string getType();
    void setType(const std::string);
    Weapon(const std::string);
    Weapon();
    ~Weapon();
};
