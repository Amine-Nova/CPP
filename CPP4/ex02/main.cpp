/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/01 16:57:28 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"
#include"WrongDog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    std::cout << "-------------------------------------" << std::endl;
    int a = 10, b = 0;
    Animal *A[10];

    while(b < a)
    {
        if (b % 2)
            A[b] = new Dog();
        else
            A[b] = new Cat();
        b++;
    }
    b = 0;
    while(b < a)
    {
        delete A[b];
        b++;
    }
    return 0;
}