/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:41:13 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/18 15:19:56 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"sed.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int  i = 0;
		std::string a(av[1]), file, s1(av[2]), s2(av[3]), temp;
		file = read_file(a);
		i = file.find(s1, 0);
		if (i < 0)
			std::cout << "s1 Not Found in The File" << std::endl;
		else if (s1.empty() || s2.empty())
			std::cout << "Empty Arg" << std::endl;
		else if (i >= 0 && (s1 != s2))
		{
			temp = replace_str(file, s1, s2);
			i = file.find(s1, i + 1);
			while (i >= 0)
			{
				temp = replace_str(temp, s1, s2);
				i = temp.find(s1, 0);
			}
			write_file(a + "_replace", temp);
		}
		else if (s1 == s2)
			std::cout << "s1 Equal s2" << std::endl;
	}
	else
		return 0;
}