/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:19:32 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/19 15:13:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    Bureaucrat Amine("amine", 10);
    Form Ahmed("ahmed", 1, 5);
    Bureaucrat Said("said", 5);
    Form Med("med", 3, 5);
    
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