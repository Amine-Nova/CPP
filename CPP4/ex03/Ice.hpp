/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:58:54 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/08 19:08:27 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &a);
    Ice &operator=(const Ice &a);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};