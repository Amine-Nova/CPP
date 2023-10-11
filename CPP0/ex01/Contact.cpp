/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:50:39 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/08 15:51:48 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::fill_info()
{
	int i;

	i = 0;
	while (!i)
	{
		std::cout << "Enter firstname : ";
		std::getline(std::cin, firstname);
		if (!firstname.empty())
			i = 1;
		if (std::cin.eof())
			return;
	}
	i = 0;
	while (!i)
	{
		std::cout << "Enter lastname : ";
		std::getline(std::cin, lastname);
		if (!lastname.empty())
			i = 1;
		if (std::cin.eof())
			return;
	}
	i = 0;
	while (!i)
	{
		std::cout << "Enter nickname : ";
		std::getline(std::cin, nickname);
		if (!nickname.empty())
			i = 1;
		if (std::cin.eof())
			return;
	}
	i = 0;
	while (!i)
	{
		std::cout << "Enter phonenumber : ";
		std::getline(std::cin, phonenumber);
		if (!phonenumber.empty())
			i = 1;
		if (std::cin.eof())
			return;
	}
	i = 0;
	while (!i)
	{
		std::cout << "Enter darkestsecret : ";
		std::getline(std::cin, darkestsecret);
		if (!darkestsecret.empty())
			i = 1;
		if (std::cin.eof())
			return;
	}
	std::cout << std::endl;
	return;
}

void Contact::print_info()
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << index << "|";
	if (firstname.length() <= 10)
		std::cout << std::setw(10) << firstname.substr(0, 10);
	else if (firstname.length() > 10)
		std::cout << std::setw(10) << firstname.substr(0, 9) + ".";
	std::cout << "|";
	if (lastname.length() <= 10)
		std::cout << std::setw(10) << lastname.substr(0, 10);
	else if (lastname.length() > 10)
		std::cout << std::setw(10) << lastname.substr(0, 9) + ".";
	std::cout << "|";
	if (nickname.length() <= 10)
		std::cout << std::setw(10) << nickname.substr(0, 10);
	else if (nickname.length() > 10)
		std::cout << std::setw(10) << nickname.substr(0, 9) + ".";
	std::cout << "|";
	std::cout << std::endl;
}

void Contact::print_contact_info()
{
	std::cout << "index : " << index << std::endl;
	std::cout << "firstname : " << firstname << std::endl;
	std::cout << "lastname : " << lastname << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phonenumber : " << phonenumber << std::endl;
	std::cout << "darkestsecret : " << darkestsecret << std::endl;
}