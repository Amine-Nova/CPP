/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:07:14 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 18:29:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
    grade = 1;
}
Bureaucrat::Bureaucrat(const std::string n, int grade) : name(n)
{
    this->grade = grade;
    if (this->grade > 150)
        throw GradeTooLowException();
    if (this->grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        this->grade = obj.grade;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}
std::string Bureaucrat::getName() const
{
    return(this->name);
}

void Bureaucrat::UpGrade()
{
    if (this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}
void Bureaucrat::DownGrade()
{
    if (this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}
int Bureaucrat::getGrade() const
{
    return(this->grade);
}
std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj)
{
    output << obj.getName() << ", Bureaucrat Grade " << obj.getGrade();
    return output;
}
Bureaucrat::~Bureaucrat()
{
}