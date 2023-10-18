/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:40:59 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/18 13:59:41 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void write_file(std::string filename, std::string newv)
{
    std::fstream File;

    File.open(filename, std::ios::out);
    if (File.is_open())
    {
        File << newv;
        File.close();
    }
}

std::string read_file(std::string filename)
{
    std::fstream File;
    std::string line, ret, loop;

    File.open(filename, std::ios::in);
    if (File.is_open())
    {
        while(getline(File, line))
            ret.append(line + "\n");
        ret.pop_back();
        File.close();
    }
    else
    {
		std::cout << "File Error" << std::endl;
        exit (1);
    }
    return(ret);
}

std::string replace_str(std::string file, std::string s1, std::string s2)
{
    std::string temp;
    int i = 0;

    (void)s2;
    i = file.find(s1, 0);
    temp = file.substr(0, i);
    temp += s2;
    temp += file.substr(i + s1.length(), file.length() - i);
    return(temp);
}
