/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:02 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/03 23:27:28 by abenmous         ###   ########.fr       */
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
std::string Dog::getType() const
{
    return(this->type);
}
void Dog::setType(std::string const ss)
{
    this->type = ss;
}
void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog Destractor : \"Au Revoir!\"" << std::endl;
    if(Bdog)
        delete Bdog;
}