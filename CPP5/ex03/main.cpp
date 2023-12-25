/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:19:32 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/24 12:09:09 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

int main()
{
    Intern Amine;
    AForm* rrf;
    Bureaucrat BenMoussa;
    
    rrf = Amine.makeForm("presidentialpardon", "Bender");
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
}