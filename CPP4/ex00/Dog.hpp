/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:03:11 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 13:16:46 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"

class Dog : public Animal
{
private:
    std::string type;
public:
    Dog();
    Dog(const Dog &a);
    Dog &operator=(const Dog &a);
    virtual void makeSound() const;
    virtual std::string getType() const;
    virtual void setType(std::string const ss);
    virtual ~Dog();
};
