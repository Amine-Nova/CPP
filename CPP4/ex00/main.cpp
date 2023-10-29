/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:23:19 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"
#include"WrongDog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

std::cout << "--------------" << std::endl;
const WrongAnimal* Wrongmeta = new WrongAnimal();
const WrongAnimal* Wrongj = new WrongDog();
const WrongAnimal* Wrongi = new WrongCat();
std::cout << Wrongj->getType() << " " << std::endl;
std::cout << Wrongi->getType() << " " << std::endl;
Wrongi->makeSound(); //will output the Animal sound!
Wrongj->makeSound();
Wrongmeta->makeSound();

delete Wrongmeta;
delete Wrongj;
delete Wrongi;
return 0;
}