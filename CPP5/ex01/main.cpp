/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:19:32 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 09:52:42 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    Bureaucrat Amine("amine", 1);
    Form Ahmed("ahmed", 1, 5);
    Bureaucrat Said("said", 5);
    Form Med("med", 12, 5);
    
    Amine.signForm(Ahmed);
    try
    {
        Med.beSigned(Said);
        std::cout << Med << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}