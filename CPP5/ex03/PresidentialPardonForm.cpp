/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:57:18 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/23 19:55:40 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"
#include"AForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
    target = "Default";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string spot) : AForm(spot, 25, 5)
{
    target = spot;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &o)
{
    if (this != &o)
    {
        this->target = o.target;
        this->indication = o.indication;
    }
    return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > 5)
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}