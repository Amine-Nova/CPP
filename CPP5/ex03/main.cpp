/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:19:32 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 17:13:11 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

int main()
{
    Intern Amine;
    AForm* rrf;
    AForm* rrf1;
    AForm* rrf2;
    Bureaucrat BenMoussa;
    
    rrf = Amine.makeForm("presidentialpardon", "Bender");
    rrf1 = Amine.makeForm("robotomyrequest", "Bender");
    rrf2 = Amine.makeForm("shrubberycreation", "Bender");
    if (rrf == NULL)
        return 1;
    try
    {
        rrf->beSigned(BenMoussa);
        rrf->execute(BenMoussa);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
    try
    {
        rrf1->beSigned(BenMoussa);
        rrf1->execute(BenMoussa);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
    try
    {
        rrf2->beSigned(BenMoussa);
        rrf2->execute(BenMoussa);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete rrf;
    delete rrf1;
    delete rrf2;
    
    return 0;
}