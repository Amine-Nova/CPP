/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:48 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:09:02 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constractor : \"Ciao!\"" << std::endl;
    type = "DefaultAnimal";
}
WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    *this = a;   
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}
void WrongAnimal::makeSound() const
{
    std::cout << "Talk" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return(this->type);
}
void WrongAnimal::setType(std::string const ss)
{
    this->type = ss;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destractor : \"Ciao!\"" << std::endl;
}