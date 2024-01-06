/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:19:32 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 09:43:00 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    Bureaucrat Amine("amine", 150);
    try
    {
        Amine.UpGrade();
        std::cout << Amine << std::endl;
        Amine.UpGrade();
        std::cout << Amine << std::endl;
        Amine.UpGrade();
        std::cout << Amine << std::endl;
        Amine.UpGrade();
        std::cout << Amine << std::endl;
        Amine.DownGrade();
        std::cout << Amine << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}