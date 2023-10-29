/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 12:51:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
#include"WrongDog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* Wrongmeta = new WrongAnimal();
const WrongAnimal* Wrongj = new WrongDog();
const WrongAnimal* Wrongi = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << "-----------" << std::endl;
std::cout << Wrongj->getType() << " " << std::endl;
std::cout << Wrongi->getType() << " " << std::endl;
Wrongi->makeSound(); //will output the cat sound!
Wrongj->makeSound();
Wrongmeta->makeSound();

return 0;
}