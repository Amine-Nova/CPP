/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:51:37 by abenmous          #+#    #+#             */
/*   Updated: 2024/04/02 19:56:28 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

std::string get_date(std::string str)
{
    int i = 0;
    std::string value;
    while(str[i] && str[i] == ' ')
        i++;
    value = str.substr(i, 10);
    return(value);
}
std::string get_amount(std::string str)
{
    int i = 0;
    std::string value;
    while (str[i] && str[i] != '|')
        i++;
    i++;
    while (str[i] && str[i] == ' ')
        i++;
    if (!str[i])
        return ("");
    value = str.substr(i);
    return (value);
}

float get_value(std::string str, int v)
{
    std::stringstream value;
    float ret;
    std::string ptr = str.substr(v + 1);
    value << ptr;
    value >> ret;
    return(ret);
}
float get_v(std::string str)
{
    std::stringstream value;
    float ret;
    value << str;
    value >> ret;
    return(ret);
}
std::string trim_str(std::string value)
{
    std::string ret;
    int i = 0, j = 0;
    while (value[i] && value[i] == ' ')
        i++;
    while (value[j])
        j++;
    j--;
    while (value[j] && value[j] == ' ')
        j--;
    ret = value.substr(i, j + 1);
    return(ret);
}
int check_digit(std::string n)
{
    int i = 0;
    while(n[i])
    {
        if (!isdigit(n[i]))
            return (0);
        i++;
    }
    return (1);
}
void check_valid_num(std::string Year, std::string Month, std::string Day)
{
    std::stringstream vy, vm, vd;
    float Y, M, D;
    vy << Year;
    vy >> Y;
    vm << Month;
    vm >> M;
    vd << Day;
    vd >> D;
    if (Y < 2009 || Y > 2022)
        throw std::invalid_argument("Error: Invalid Year");
    if (M < 1 || M > 12)
        throw std::invalid_argument("Error: Invalid Month");
    if (D < 1 || D > 31)
        throw std::invalid_argument("Error: Invalid Day");
    if (Y == 2009 && M == 1 && D == 1)
        throw std::invalid_argument("Error: Invalid Date");
}
void check_date(std::string date, std::string str)
{
    std::string Year, Month, Day;
    date = trim_str(date);

    Year = date.substr(0, 4);
    Month = date.substr(5, 2);
    Day = date.substr(8, 2);
    if (date[4] != '-' || date[7] != '-')
        throw std::invalid_argument("Error: bad input => " + str);
    if (!check_digit(Year) || !check_digit(Month) || !check_digit(Day))
        throw std::invalid_argument("Error: bad input => " + str);
    check_valid_num(Year, Month, Day);
}
void check_value(std::string value, std::string str)
{
    int i = 0, j = 0;
    if (value.empty())
            throw std::invalid_argument("Error: bad input => " + str);
    value = trim_str(value);
    if (value[i] == '-')
        i++;
    while (value[i])
    {
        if (!isdigit(value[i]) && value[i] != '.')
                throw std::invalid_argument("Error: bad input => " + str);
        if (value[i] == '.')
        {
            j++;
            if (!isdigit(value[i - 1]) || !isdigit(value[i + 1]))
                throw std::invalid_argument("Error: bad input => " + str);
        }
        i++;
    }
    if (j > 1)
        throw std::invalid_argument("Error: bad input => " + str);
        
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::ifstream File("data.csv"), In(av[1]);
        std::map<std::string, float> data;
        std::map<std::string, float>::iterator iter;
        std::string str, date, value;
        float fv;
        if (File.is_open())
        {
            getline(File, str);
            while (getline(File, str))
            {
                int v = str.find(',');
                data[str.substr(0, v)] =  get_value(str, v);
            }
        }
        else
        {
            std::cerr << "can't open file data.csv\n";
            exit(1);
        }
        if (In.is_open())
        {
            getline(In, str);
            if (str != "date | value")
            {
                std::cerr << "Error: invalid file => " + str << std::endl;
                exit(1);
            }
            while (getline(In, str))
            {
                try
                {
                    ssize_t err = str.find("|");
                    if (err != -1)
                    {
                        date = get_date(str);
                        check_date(date, str);
                        value = get_amount(str);
                        check_value(value, str);
                        iter = data.lower_bound(date);
                        fv = get_v(value);
                        if (fv < 0)
                            throw std::invalid_argument("Error: not a positive number.");
                        if (iter->first == date)
                        {
                            float a = fv * iter->second;
                            if (fv < 0)
                                throw std::invalid_argument("Error: not a positive number.");
                            if (fv > 1000)
                                throw std::invalid_argument("Error: too large a number.");
                            std::cout << iter->first << " => " << value << " = " << a << std::endl;
                        }
                        else
                        {
                            iter--;                       
                            float a = fv * iter->second;
                            if (fv < 0)
                                throw std::invalid_argument("Error: not a positive number.");
                            if (fv > 1000)
                                throw std::invalid_argument("Error: too large a number.");
                            std::cout << iter->first << " => " << value << " = " << a << std::endl;
                        }
                    }
                    else
                       throw std::invalid_argument("Error: bad input => " + str);
                }
                catch(std::exception & e)
                {
                    std::cerr << e.what() << std::endl;
                }
            }
        }
        else
            std::cerr << "File Not Found " << std::endl;
    }
    else
        std::cerr << "No Enough Arguments" << std::endl;
    return (0);
}
