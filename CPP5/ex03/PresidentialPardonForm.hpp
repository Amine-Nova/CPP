/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:56:54 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 17:10:39 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"AForm.hpp"
class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string spot);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &o);
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};
