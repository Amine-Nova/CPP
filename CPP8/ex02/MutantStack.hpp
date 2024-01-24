/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:48:52 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/24 16:37:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

template <class T>
class MutantStack : public std::stack<T, std::vector<T> >
{
    private:
        std::stack<T, std::vector<T> > List;
    public:
        typedef typename std::stack<T, std::vector<T> >::container_type::iterator iter;
        MutantStack(){}
        MutantStack(const MutantStack &obj)
        {
            *this = obj;
        }
        MutantStack &operator=(const MutantStack &o)
        {
            this->c = o.c;
            if (this != &o)
                this->List = o.List;
            return (*this);
        }
        iter begin()
        {
            return (this->c.begin());
        }
        iter end()
        {
            return (this->c.end());
        }
        ~MutantStack(){}
};
