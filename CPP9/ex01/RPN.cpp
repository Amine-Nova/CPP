/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:33:35 by abenmous          #+#    #+#             */
/*   Updated: 2024/03/18 01:36:23 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

int count_value(int f, int s, char c)
{
    if (c == '/')
        return (s / f);
    else if (c == '+')
        return (s + f);
    else if (c == '-')
        return (s - f);
    else if (c == '*')
        return (s * f);
    else
        throw std::logic_error("Error");
}
int check_input(char *av)
{
    std::string str = static_cast<std::string>(av);
    if (str.empty())
        throw std::invalid_argument("Error");
    int i = -1;
    while (str[++i])
        if (str[i] != ' ' && str[i] != '\t')
            return 1;
    return 0;
}
void err_check(char *av)
{
    std::stack<int> Stack;
    char *end;
    int f, s;
    std::stringstream value(av);
    std::string str;
    if(!check_input(av))
        throw std::invalid_argument("Error");
    while(value >> str)
    {
        if (str.length() > 1 || (!isdigit(str[0]) && str[0] != '/' && str[0] != '-' && str[0] != '*' && str[0] != '+'))
            throw std::invalid_argument("Error");
        if (isdigit(str[0]))
            Stack.push(strtod(str.c_str(), &end));
        if (str[0] == '/' || str[0] == '-' || str[0] == '*' || str[0] == '+')
        {
            if (Stack.size() < 2)
                throw std::invalid_argument("Error");
            char c = str[0];
            f = Stack.top();
            Stack.pop();
            s = Stack.top();
            Stack.pop();
            Stack.push(count_value(f, s, str[0]));
        }
    }
    if (Stack.size() > 1)
        throw std::invalid_argument("Error");
    else
        std::cout << Stack.top() << std::endl;
}
