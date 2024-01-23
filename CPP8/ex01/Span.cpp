/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:33:00 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/22 10:15:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span()
{
    N = 0;
}
Span::Span(unsigned int V)
{
    N = V;
}
Span::Span(const Span &o)
{
    *this = o;
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        this->N = obj.N;
        this->List = obj.List;
    }
    return (*this);
}
void Span::addNumber(int n)
{
    if (List.size() < this->N)
    {
        List.push_back(n);
        return ;
    }
    throw std::overflow_error("OverFlow Error");
}
int Span::longestSpan()
{
    if (List.size() < 2)
        throw std::logic_error("Logic Error");
    std::vector<int>::iterator a = std::min_element(List.begin(), List.end());
    std::vector<int>::iterator b = std::max_element(List.begin(), List.end());
    return(*b - *a);
}
int Span::shortestSpan()
{
    if (List.size() < 2)
        throw std::logic_error("Logic Error");
    std::sort(List.begin(), List.end());
    int j;
    int i;

    i = List[1] - List[0];
    for (int l = 1; l < List.size() - 1; l++)
    {
        j = List[l + 1] - List[l];
        if (j < i)
            i = j;
    }
    return (i);
}

void Span::manyNumbers(int start, int end)
{
    if (N < 2 || end < start)
        throw std::logic_error("Logic Error");
    for (int i = 0; i < N; i++)
    {
        List.push_back(start);
        std::cout << List[i] << std::endl;
        start++;
        if (start == end)
            return ;
    }
    return ;
}

Span::~Span()
{
}