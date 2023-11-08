/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:50 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 17:22:03 by abenmous         ###   ########.fr       */
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
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destractor : \"Auf Wiedershen!\"" << std::endl;
}