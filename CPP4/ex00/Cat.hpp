/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:00 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:16:41 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"

class Cat : public Animal
{
private:
    std::string type;
public:
    Cat();
    Cat(const Cat &a);
    Cat &operator=(const Cat &a);
    void makeSound() const;
    std::string getType() const;
    void setType(std::string const ss);
    virtual ~Cat();
};