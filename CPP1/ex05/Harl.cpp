/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:11:28 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/16 15:47:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::complain(std::string level)
{
    int i = 0;
    std::string func[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fun_ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (i < 4)
    {
        if (level == func[i])
           (this->*fun_ptr[i])();
        i++;
    }
}

Harl::Harl()
{
}

Harl::~Harl()
{
}