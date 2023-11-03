/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:58:54 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/02 18:00:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &a);
    Ice &operator=(const Ice &a);
    std::string getType() const;
    void setType(std::string const ss);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};