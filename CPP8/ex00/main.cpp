/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:11:11 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/16 11:56:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(3);
        v.push_back(2);
        v.push_back(7);
        v.push_back(9);
        easyfind(v, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}