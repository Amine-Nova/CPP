/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:41:11 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/04 22:46:18 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *e[4];
    AMateria *ue;
public:
    Character();
    Character(std::string ss);
    Character(const Character &a);
    Character &operator=(const Character &a);
    std::string const &getName() const;
    void equip(AMateria *a);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};

