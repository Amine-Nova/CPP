/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:11:54 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 11:09:33 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &a);
    Animal &operator=(const Animal &a);
    virtual void makeSound() const;
    virtual std::string getType() const;
    virtual void setType(std::string const ss);
    virtual ~Animal();
};


