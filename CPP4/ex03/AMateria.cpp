/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:46:28 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/04 22:36:25 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "Default";
}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
AMateria::AMateria(const AMateria &a)
{
    *this = a;
}
AMateria &AMateria::operator=(const AMateria &ss)
{
    if (this != &ss)
        this->type = ss.type;
	return(*this);
}
std::string const &AMateria::getType() const
{
	return (this->type);
}
void AMateria::setType(std::string const ss)
{
	this->type = ss;
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << "It D'ont be Used" << std::endl;
}
AMateria::~AMateria()
{
}