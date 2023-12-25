/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 19:22:00 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/24 12:07:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"


Intern::Intern()
{
}
Intern::Intern(const Intern &obj)
{
    *this = obj;
}
Intern &Intern::operator=(const Intern &obj)
{
    if(this != &obj)
        *this = obj;
    return (*this);
}
AForm *Intern::makeForm(std::string form, std::string target)
{
    int i;

    i = 0;
    std::cout << "Intern creates " << form << std::endl;
    std::string type[]={"presidentialpardon", "robotomyrequest", "shrubberycreation"};
    while (i <= 2)
    {
        if (!type[i].compare(form))
            break;
        i++;
    }
    switch (i + 1)
    {
        case 1:
            return (new PresidentialPardonForm(target));
        case 2:
            return (new RobotomyRequestForm(target));
        case 3:
            return (new ShrubberyCreationForm(target));
        default:
            std::cout << "Unknown Type" << std::endl;
        return(NULL);
    }
}

Intern::~Intern()
{
    std::cout << "Destractor Called" << std::endl;
}