/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:19:32 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 18:28:12 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat Amine("Amine", 2);
    ShrubberyCreationForm christmas("Christmas");
    RobotomyRequestForm robot("Robot");
    PresidentialPardonForm president("President");
    try
    {
        christmas.beSigned(Amine);
        christmas.execute(Amine);
        robot.execute(Amine);
        president.execute(Amine);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}