/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:58:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/03 17:08:18 by abenmous         ###   ########.fr       */
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
    AMateria *I = new Ice(*this);
    return(I);
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
Ice::~Ice()
{
}