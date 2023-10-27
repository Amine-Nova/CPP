/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:18:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/27 19:29:03 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{ 
    public:
        FragTrap();
        FragTrap(std::string Rocket);
        FragTrap(const FragTrap &a); // Copy Constractur
        FragTrap &operator=(const FragTrap &a); // Copy assignment operator
        void highFivesGuys(void);
        ~FragTrap();
};