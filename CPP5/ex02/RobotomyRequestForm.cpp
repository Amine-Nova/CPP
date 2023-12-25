/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:59:08 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/22 15:32:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
    target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string spot) : AForm(spot, 72, 45)
{
    target = spot;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    *this = obj;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
    if (this != &a)
    {
        this->target = a.target;
        this->indication = a.indication;
    }
    return(*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    static int i;
    if (executor.getGrade() > 45)
        throw GradeTooLowException();
    if (i % 2 == 0)
        std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
    else
        std::cout << target << " has not been robotomized" << std::endl;
    i++;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}