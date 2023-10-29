/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:11:58 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:05:51 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constractor : \"Hola!\"" << std::endl;
    type = "Cat";
}
Cat::Cat(const Cat &a)
{
    *this = a;
}
Cat &Cat::operator=(const Cat &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}
std::string Cat::getType() const
{
    return(this->type);
}
void Cat::setType(std::string const ss)
{
    this->type = ss;
}
void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat Destractor : \"Adios!\"" << std::endl;
}