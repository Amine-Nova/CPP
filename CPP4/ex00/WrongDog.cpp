/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:54 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:24:26 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "WrongDog Constractor : \"Geia!\"" << std::endl;
    type = "Dog";
}
WrongDog::WrongDog(const WrongDog &a)
{
    *this = a;
}
WrongDog &WrongDog::operator=(const WrongDog &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}
void WrongDog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}
std::string WrongDog::getType() const
{
    return(this->type); 
}
void WrongDog::setType(std::string const ss)
{
    this->type = ss;
}
WrongDog::~WrongDog()
{
    std::cout << "WrongDog Destractor : \"Anito!\"" << std::endl;    
}