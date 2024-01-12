/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:04:18 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/11 15:24:46 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<exception>

template<class T>

class Array
{
    private:
        T *typo;
        unsigned int l;
    public:
        Array();
        Array(unsigned int a);
        Array(const Array &o);
        Array &operator=(const Array &obj);
        T &operator[](unsigned int s);
        ~Array();
};
#include"Array.tpp"