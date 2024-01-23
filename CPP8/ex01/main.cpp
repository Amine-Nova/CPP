/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:32:42 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/18 17:19:27 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    try
    {
        Span sp(6);
        sp.manyNumbers(0, 6);
        Span a = sp;
        std::cout << "a : " << a.shortestSpan() << std::endl;
        std::cout  << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl; 
        std::cout << "a : " << a.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
