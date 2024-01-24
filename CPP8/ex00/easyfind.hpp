/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:11:07 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/24 14:07:11 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

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
