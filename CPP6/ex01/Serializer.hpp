/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:07:08 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/07 15:44:51 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

typedef struct Data
{
    uintptr_t  data;
    int  data1;
    float  data2;
} t_Data;

class Serializer
{
    private:
        Serializer();
    public:
        Serializer(const Serializer &obj);
        Serializer &operator=(const Serializer &a);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};
