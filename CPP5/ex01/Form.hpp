/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 09:08:26 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/22 18:32:41 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Bureaucrat.hpp"
#include<iostream>
#include<string>


class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool  indication;
        const int s_grade;
        const int e_grade;
    public:
        Form();
        Form(const std::string name, const int s_grade, const int e_grade);
        Form(const Form &obj);
        Form &operator=(const Form &a);
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
        std::string getname() const;
        bool getindication();
        int gets_grade() const;
        int gete_grade()const;
        void  beSigned(Bureaucrat const &cls);
        ~Form();
};

std::ostream &operator<<(std::ostream &output, Form &obj);