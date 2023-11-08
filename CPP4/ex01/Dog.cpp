/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:02 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 17:19:53 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constractor : \"Salut!\"" << std::endl;
    type = "Dog";
    Bdog = new Brain();
}
Dog::Dog(const Dog &a)
{
    *this = a;
}
Dog &Dog::operator=(const Dog &a)
{
    if (this != &a)
    {
        if (Bdog)
            Bdog = NULL;
        this->type = a.type;
    }
    return (*this);
}
void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog Destractor : \"Au Revoir!\"" << std::endl;
    delete Bdog;
}