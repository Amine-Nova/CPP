/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:11:07 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/20 14:49:34 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<vector>
#include<iterator>

template<typename T>
void easyfind(T v, int value)
{
    typename T::iterator i = std::find(v.begin(), v.end(), value);
    std::cout << "i : " << *i << " value : " << value << std::endl;
    if (*i == value)
        std::cout << "Value Found" << std::endl;
    else
        throw std::invalid_argument("Value Not Found");
}
