/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:31:30 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/08 18:50:23 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook c1;
	std::string input, num;
	int i, index, n, j;
	
	i = 0;
	n = 0;
	j = 0;
	while (1)
	{
		index = 0;
		n = 0;
	    if (i >= 0)
	    {
	        if (i == 8)
	            i = 0;
	        if (j >= 8)
	            j = 8;
			if (std::cin.eof())
				break;
	        std::cout << "Enter Your Command : ";
	        std::getline(std::cin, input);
	    }
	    if (input.compare("ADD") == 0)
	    {
	        if (std::cin.eof())
	            break;
	        c1.contact[i].index = i + 1;
	        c1.contact[i].fill_info();
			i++;
	        j++;
	    }
	    else if (input.compare("SEARCH") == 0)
	    {
			if (j > 0)
			{
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "|" << "   index  ";
				std::cout << "|" << "firstname ";
				std::cout << "|" << " lastname ";
				std::cout << "|" << " nickname " << "|" << std::endl;
			}
			if (j > 0)
				std::cout << "---------------------------------------------" << std::endl;
			while (n < j)
			{
				c1.contact[n].print_info();
				n++;
			}
			if (j > 0)
				std::cout << "---------------------------------------------" << std::endl;
			while (index <= 0)
			{
				if (i == 0)
				{
					std::cout << "No Contact Found" << std::endl;
					break;
				}
	        	std::cout << "Enter the index of the contact : ";
	        	std::stringstream str;
	        	std::getline(std::cin, num);
				if (std::cin.eof())
	        	    break;
	        	str << num;
	        	str >> index;
	        	if (index > j || index > 8 || index <= 0)
				{
	            	std::cout << "Contact Not Found" << std::endl;
					index = 0;
				}
				else
	            	c1.contact[index - 1].print_contact_info();
			}
	    }
	    else if (input.compare("EXIT") == 0)
	        return 0;
	    else if (input.compare("EXIT") != 0 && input.compare("ADD") != 0 && input.compare("SEARCH") != 0)
		{
			if (std::cin.eof())
	        	break;
	        std::cout << "Command Not Found" << std::endl;
		}
	}
}