/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:10:43 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/23 10:12:35 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

AForm::AForm() : name("Default"), s_grade(1), e_grade(5)
{
    indication = false;
}
AForm::AForm(const std::string n, const int s_g, const int e_g) : name(n), s_grade(s_g), e_grade(e_g)
{
    indication = false;
}

AForm::AForm(const AForm &obj) : s_grade(145), e_grade(137)
{
    *this = obj;
}
AForm &AForm::operator=(const AForm &s)
{
    if (this != &s)
        this->indication = s.indication;
    return(*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}
std::string AForm::getname() const
{
    return (name);
}
int AForm::gete_grade() const
{
    return (e_grade);
}

int AForm::gets_grade() const
{
    return (s_grade);
}

bool AForm::getindication() const
{
    return (indication);
}
std::ostream &operator<<(std::ostream &output, AForm &obj)
{
    output << obj.getname() << " indication : " << obj.getindication() <<  " | sign grade : "  << obj.gets_grade() << " | execute grade : " << obj.gete_grade();
    return (output);
}

void  AForm::beSigned(Bureaucrat &cls)
{
    if (cls.getGrade() > s_grade || s_grade > 150)
        throw GradeTooLowException();
    else if (s_grade <= 0)
        throw GradeTooHighException();
    else if (cls.getGrade() <= s_grade)
        indication = true;
}

AForm::~AForm()
{
}