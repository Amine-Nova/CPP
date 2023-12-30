/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:25:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/30 19:14:06 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
int len_str(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}
bool check_end_err(char *str, char *end)
{
    int i = 0;
    if (isprint(str[0]) && str[1] == '\0')
        return (true);
    if (isalpha(str[0]) && str[1] == '\0')
        return (true);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] && isdigit(str[i]))
        i++;
    if (str[i] != 'f' && str[i] != '\0' && str[i] != '.')
        return (false);
    if (str[i] == '.')
    {
        i++;
        if (!isdigit(str[i]))
            return (false);
    }
    if (end)
    {
        if (end[0] == 'f' && end[1] != '\0')
            return (false);
        if (end[0] != 'f' && end[0] != '\0')
            return (false);
    }
    return (true);
}
void ScalarConverter::convert(std::string input)
{
    std::stringstream str;
    char *ptr = (char *)input.c_str();
    char *end;
    int i = 0;
    
    strtod(ptr, &end);
    if (!check_end_err(ptr, end))
    {
        std::cerr << "error input" << std::endl;
        return;
    }
    str << input;
    str >> i;
    if (input.length() == 1)
    {
        if (!isdigit(input[0]))
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
    else if (input.length() > 1)
    {
        if (i >= 32 && i <= 126)
            std::cout << "char : " << static_cast<char>(i) << std::endl;
        else
            std::cout << "char : " << "Non displayable" << std::endl;
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(7) << strtod(ptr, &end) <<"f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(15) << strtod(ptr, &end) << std::endl;
    }
}
ScalarConverter::~ScalarConverter()
{
}