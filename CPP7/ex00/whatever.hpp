/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:23:39 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/11 17:18:03 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>

void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
template<typename T>

T min(T a, T b)
{
    if (a == b || a > b)
        return b;
    return a;
}
template<typename T>

T max(T a, T b)
{
    if (a == b || a < b)
        return b;
    return a;
}