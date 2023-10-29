/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:11:52 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:02:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constractor : \"Hello!\"" << std::endl;
    type = "Default";
}
Animal::Animal(const Animal &a)
{
    *this = a;
}
Animal &Animal::operator=(const Animal &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}

std::string Animal::getType() const
{
    return(this->type);
}
void Animal::setType(std::string const ss)
{
    this->type = ss;
}
void Animal::makeSound() const
{
    std::cout << "Default" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destractor : \"Good Bye\"" << std::endl;
}