/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:58:57 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/08 19:08:30 by abenmous         ###   ########.fr       */
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
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};