/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 09:21:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/22 18:25:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form() : name("Default"), s_grade(1), e_grade(5)
{
    indication = false;
}
Form::Form(const std::string n, const int s_g, const int e_g) : name(n), s_grade(s_g), e_grade(e_g)
{
    indication = false;
}
Form::Form(const Form &obj) : s_grade(obj.s_grade), e_grade(obj.e_grade) 
{
    *this = obj;
}

Form &Form::operator=(const Form &s)
{
    if (this != &s)
        this->indication = s.indication;
    return(*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}
std::string Form::getname() const
{
    return (name);
}
int Form::gete_grade() const
{
    return (e_grade);
}

int Form::gets_grade() const
{
    return (s_grade);
}

bool Form::getindication()
{
    return (indication);
}
std::ostream &operator<<(std::ostream &output, Form &obj)
{
    output << obj.getname() << " indication : " << obj.getindication() <<  " | sign grade : "  << obj.gets_grade() << " | execute grade : " << obj.gete_grade();
    return (output);
}

void  Form::beSigned(Bureaucrat const &cls)
{
    if (cls.getGrade() > this->s_grade || this->s_grade > 150)
        throw GradeTooLowException();
    else if (this->s_grade <= 0)
        throw GradeTooHighException();
    else if (cls.getGrade() <= this->s_grade)
        this->indication = true;
}

Form::~Form()
{
}