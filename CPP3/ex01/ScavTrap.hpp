/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:31:18 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 19:28:34 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ClapTrap.hpp"


class ScavTrap : public ClapTrap
{ 
    public:
        ScavTrap();
        ScavTrap(std::string Celestials);
        ScavTrap(const ScavTrap &a); // Copy Constractur
        ScavTrap &operator=(const ScavTrap &a); // Copy assignment operator
        void guardGate();
        ~ScavTrap();
};