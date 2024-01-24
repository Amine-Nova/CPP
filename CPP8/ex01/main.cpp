/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:32:42 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/24 14:19:06 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    try
    {
        Span sp(6);
        std::vector<int> j;
        j.push_back(18);
        j.push_back(29);
        j.push_back(451);
        j.push_back(684);
        j.push_back(45);
        j.push_back(88);
        j.push_back(123);
        sp.manyNumbers(j.begin(), j.end());
        std::cout  << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
