/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:09:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/07 17:10:34 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char *av[])
{
    int     i;
    size_t  j;

    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 1;
    std::string str;
    while (i < ac)
    {
        str = av[i];
        j = 0;
        while(j < str.length())
        {
            str[j] = std::toupper(str[j]);
            j++;
        }
        std::cout << str;
        i++;
    }
    std::cout << std::endl;
    return (0);
}
