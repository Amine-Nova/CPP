/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:50 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:13:44 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Constractor : \"Hallo!\"" << std::endl;
    type = "Cat";
}
WrongCat::WrongCat(const WrongCat &a)
{
    *this = a;
}
WrongCat &WrongCat::operator=(const WrongCat &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}
void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
std::string WrongCat::getType() const
{
    return(this->type);
}
void WrongCat::setType(std::string const ss)
{
    this->type = ss;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destractor : \"Auf Wiedershen!\"" << std::endl;
}