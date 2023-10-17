/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:11:59 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/17 19:40:20 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl A;
        std::string var(av[1]), func[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        int i = 0;
        while (i < 4)
        {
            if (var == func[i])
                break;
            i++;
        }
        switch (i)
        {
        case 0 :
            A.complain("DEBUG");
        case 1 :
            A.complain("INFO");
        case 2 :
            A.complain("WARNING");
        case 3 :
            A.complain("ERROR");
            break;
        default:
            break;
        }
    }
}