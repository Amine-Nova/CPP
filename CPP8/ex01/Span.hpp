/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:33:28 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/20 14:49:29 by abenmous         ###   ########.fr       */
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
        Span();
        Span(unsigned int N);
        Span(const Span &o);
        Span &operator=(const Span &obj);
        void addNumber(int n);
        void addList(int *l, unsigned int range);
        void manyNumbers(int start, int begin);
        int longestSpan();
        int shortestSpan();
        ~Span();
};
