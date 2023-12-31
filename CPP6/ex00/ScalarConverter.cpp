/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:25:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/31 11:44:49 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

bool check_end_err(std::string str, char *end)
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

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
    if (this != &obj)
        *this = obj;
    return (*this);
}

int count_afterv(std::string ptr, int i)
{
    int j = 0;
    int l = 0;
    while (ptr[j] && ptr[j] != '.')
        j++;
    if (ptr[j] == '.')
    {
        j++;
        while (isdigit(ptr[j]))
        {
            j++;
            l++;
        }
    }
    else
        return (2);
    if (l > 7 && i == 1)
        l = 7;
    if (l > 15 && i == 2)
        l = 15;
    return(l);
}

int inf_nan(std::string input)
{
    if (!strcmp(input.c_str(), "+inf"))
    {
        std::cout << "char : Non displayable" << std::endl;
        std::cout << "int : Max Reached"  << std::endl;
        std::cout << "float : +inf"  <<"f" << std::endl;
        std::cout << "double : +inf" << std::endl;
        return(0);
    }
    else if(!strcmp(input.c_str(), "-inf"))
    {
        std::cout << "char : Non displayable" << std::endl;
        std::cout << "int : Min Reached"  << std::endl;
        std::cout << "float : -inf"  <<"f" << std::endl;
        std::cout << "double : -inf" << std::endl;
        return(0);
    }
    else if(!strcmp(input.c_str(), "nan"))
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible"  << std::endl;
        std::cout << "float : nan"  <<"f" << std::endl;
        std::cout << "double : nan" << std::endl;
        return(0);
    }
    return (1);
}

void ScalarConverter::convert(std::string input)
{
    std::stringstream str;
    char *end;
    int i = 0;
    int fv = count_afterv(input, 1);
    int dv = count_afterv(input, 2);
    if (!inf_nan(input))
        return ;
    std::strtod(input.c_str(), &end);
    if (!check_end_err(input, end))
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
            std::cout << "float : " << std::fixed << std::setprecision(fv) << static_cast<float>(input[0]) <<"f" << std::endl;
            std::cout << "double : " << std::fixed << std::setprecision(dv) << static_cast<double>(input[0]) << std::endl;
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
            std::cout << "char : Non displayable" << std::endl;
        if (static_cast<double>(std::strtod(input.c_str(), NULL)) > std::numeric_limits<int>::max())
            std::cout << "int : Max Reached" << std::endl;
        else if (static_cast<double>(std::strtod(input.c_str(), NULL)) < -std::numeric_limits<int>::min())
            std::cout << "int : Min Reached" << std::endl;
        else
            std::cout << "int : " << i << std::endl;
        std::cout << "float : " << std::fixed << std::setprecision(fv) << static_cast<float>(std::strtod(input.c_str(), NULL)) <<"f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(dv) << static_cast<double>(std::strtod(input.c_str(), NULL)) << std::endl;
    }
}
ScalarConverter::~ScalarConverter()
{
}