/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:56:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/02 17:35:55 by abenmous         ###   ########.fr       */
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
AMateria* Cure::clone() const
{
    AMateria *C = new Cure();
}
Cure::~Cure()
{
}