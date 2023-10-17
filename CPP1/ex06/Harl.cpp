/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:11:28 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/17 18:26:18 by abenmous         ###   ########.fr       */
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

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;    
}

Harl::Harl()
{
}

Harl::~Harl()
{
}