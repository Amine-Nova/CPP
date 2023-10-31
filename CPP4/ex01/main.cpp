/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/31 17:15:25 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"
#include"WrongDog.hpp"

int main()
{
    int i = 10, j = 0;
    Animal *A[10];

    while(j < i)
    {
        if (j % 2)
            A[j] = new Dog();
        else
            A[j] = new Cat();
        j++;
    }
    j = 0;
    while(j < i)
    {
        delete A[j];
        j++;
    }
    return 0;
}