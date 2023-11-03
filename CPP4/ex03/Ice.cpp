/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:58:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/02 17:35:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::Ice(const Ice &a)
{
    *this = a;
}
Ice &Ice::operator=(const Ice &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}
std::string Ice::getType() const
{
    return(this->type);
}
void Ice::setType(std::string const ss)
{
    this->type = ss;
}
AMateria* Ice::clone() const
{
    AMateria *I = new Ice();
}
Ice::~Ice()
{
}