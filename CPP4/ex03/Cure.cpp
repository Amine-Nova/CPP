/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:56:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/03 17:07:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure()
{
    type = "cure";
}
Cure::Cure(const Cure &a)
{
    *this = a;
}
Cure &Cure::operator=(const Cure &a)
{
    if (this != &a)
        this->type = a.type;
    return (*this);
}
std::string Cure::getType() const
{
    return(this->type);
}
void Cure::setType(std::string const ss)
{
    this->type = ss;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria* Cure::clone() const
{
    AMateria *C = new Cure(*this);
    return(C);
}
Cure::~Cure()
{
}