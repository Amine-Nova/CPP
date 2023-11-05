/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:58:57 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/04 22:30:41 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &a);
    Cure &operator=(const Cure &a);
    std::string getType() const;
    void setType(std::string const ss);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};