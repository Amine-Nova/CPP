/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:47:42 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 17:11:40 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Bureaucrat.hpp"
#include<iostream>
#include<string>


class Bureaucrat;

class AForm
{
    protected:
        const std::string name;
        bool  indication;
        const int s_grade;
        const int e_grade;
    public:
        AForm();
        AForm(const std::string name, const int s_grade, const int e_grade);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &a);
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
        virtual std::string getname() const;
        virtual bool getindication()const ;
        virtual int gets_grade() const;
        virtual int gete_grade()const;
        virtual void  beSigned(Bureaucrat &cls);
        virtual void execute(Bureaucrat const & executor) const=0;
        virtual ~AForm();
};