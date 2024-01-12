/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:24:25 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/11 16:33:32 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

template<typename T>
Array<T>::Array()
{
    typo = NULL;
    l = 0;
}

template<typename T>
Array<T>::Array(unsigned int a)
{
    typo = new T[a];
    l = a;
}
template<typename T>
Array<T>::Array(const Array &o)
{
    unsigned int i = 0;
    l = o.l;
    this->typo = new T[l];
    while (i < l)
    {
        typo[i] = o.typo[i];
        i++;
    }
}
template<typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
    unsigned int i = 0;
    if (this != &obj)
    {
        this->l = obj.l;
        delete[] typo;
        typo = new T[obj.l];
        while (i < l)
        {
            typo[i] = obj.typo[i];
            i++;
        }
    }
    return (*this);
}
template<typename T>
T &Array<T>::operator[](unsigned int s)
{
    if (s > this->l)
        throw std::out_of_range("Out of Range");
    return this->typo[s];
}
template<typename T>
Array<T>::~Array()
{
    delete[] typo;
}