/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:24:10 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/30 19:09:14 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

int main(int ac, char **av)
{
    ScalarConverter a;
    if (ac == 2)
    {
        ScalarConverter::convert(av[1]);
    }
}