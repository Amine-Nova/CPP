/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:08:41 by abenmous          #+#    #+#             */
/*   Updated: 2024/03/16 23:14:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try{
            err_check(av[1]);
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    else
        std::cerr << "Bad Args" << std::endl;
}