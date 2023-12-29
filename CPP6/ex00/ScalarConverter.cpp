/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:25:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/29 15:11:39 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

bool is_digit(std::string input)
{
    int i = 0;
    while(input[i])
        if(!isdigit(input[i++]))
            return false;
    return true;
}

void ScalarConverter::convert(std::string input)
{
    std::stringstream str;
    int i = 0;

    str << input;
    str >> i;
    if (input.length() == 1)
    {
        if (isalpha(input[0]))
        {
            std::cout << "char : " << static_cast<char>(input[0]) << std::endl;
            std::cout << "int : " << static_cast<int>(input[0]) << std::endl;
            std::cout << "float : " << static_cast<float>(input[0]) <<"f" << std::endl;
            std::cout << "double : " << static_cast<double>(input[0]) << std::endl;
        }
        else if (i >= 0)
        {
            if (i >= 32 && i <= 126)
                std::cout << "char : " << static_cast<char>(i) << std::endl;
            else
                std::cout << "char : " << "Non displayable" << std::endl;
            std::cout << "int : " << i << std::endl;
            std::cout << "float : " << static_cast<float>(i) <<"f" << std::endl;
            std::cout << "double : " << static_cast<double>(i) << std::endl;
        }
    }
}
ScalarConverter::~ScalarConverter()
{
}