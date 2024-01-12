/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:57:33 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/11 18:02:37 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void iter(T *a, int l, void (*f)(T*))
{
    int i = 0;

    while (i < l)
        f(&a[i++]);
}
template<typename T>

void func(T *s)
{
    *s = *s + 1;
}
