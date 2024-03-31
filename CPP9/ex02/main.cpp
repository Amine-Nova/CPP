/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:27:47 by abenmous          #+#    #+#             */
/*   Updated: 2024/03/31 20:40:05 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"


// void    deque_function(char **av)
// {
//     std::deque<int> Dvalue;
    
//     int i = 1;
// }
int check_error(char *av)
{
    std::string num = static_cast<std::string>(av);
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
    int n;
    while (av[i])
    {
        std::stringstream num(av[i]);
        if (check_error(av[i]))
        {
            std::cerr << "Error" << std::endl;
            return (0);
        }
        i++;
    }
    vec_function(av);
    // deque_function(av);
}