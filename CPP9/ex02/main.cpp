/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:27:47 by abenmous          #+#    #+#             */
/*   Updated: 2024/03/18 20:42:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int check_error(char *av)
{
    std::string num = static_cast<std::string>(av);
    std::cout << av << std::endl;
    int i = -1;
    while (av[++i])
        if(av[i] && !isdigit(av[i]))
            return(1);
    if (num.empty())
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac <= 1)
        return (0);
    int i = 1;
    std::vector<int> Value;
    while (av[i])
    {
        if (check_error(av[i]))
        {
            std::cerr << "Error" << std::endl;
            return (0);
        }
        i++;
    }
}