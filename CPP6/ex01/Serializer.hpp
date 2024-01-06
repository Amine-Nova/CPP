/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:07:08 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/05 11:29:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

typedef struct Data
{
    int data;
    double data;
    float data;
    bool
};

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
