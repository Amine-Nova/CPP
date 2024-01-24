/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:33:28 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/24 14:08:51 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> List;
    public:
        typedef std::vector<int>::iterator iter;
        Span();
        Span(unsigned int N);
        Span(const Span &o);
        Span &operator=(const Span &obj);
        void addNumber(int n);
        void addList(int *l, unsigned int range);
        void manyNumbers(iter start, iter end);
        int longestSpan();
        int shortestSpan();
        ~Span();
};
