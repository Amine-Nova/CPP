/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:02 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 12:15:02 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    type = "Dog";
}
Dog::Dog(const Dog &a)
{
    *this = a;
}
Dog &Dog::operator=(const Dog &a)
{
    if (this != &a)
        this->type = a.type;
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
}