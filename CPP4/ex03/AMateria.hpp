/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:46:26 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/02 17:14:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &a);
    AMateria &operator=(const AMateria &ss);
    std::string const &getType() const;
    void setType(std::string const ss);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    ~AMateria();
};