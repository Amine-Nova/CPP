/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:06:54 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/07 14:38:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main()
{
    t_Data s;

    s.data = 5;
    s.data1 = 8;
    s.data2 = 15.12;
    uintptr_t str = Serializer::serialize(&s);
    Data *data = Serializer::deserialize(str);

    std::cout << "data : " << data->data << std::endl;
    std::cout << "data1 : " << data->data1 << std::endl;
    std::cout << "data2 : " << data->data2 << std::endl;
    
    std::cout << "--------------" << std::endl;

    std::cout << "uintptr_t : " << *(uintptr_t *)str << std::endl;
    str += sizeof(uintptr_t);
    std::cout << "int : " << *(int *)str << std::endl;
    str += sizeof(int);
    std::cout << "float : " << *(float *)str << std::endl;
}