/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:11:54 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 17:19:28 by abenmous         ###   ########.fr       */
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
    std::string getType() const;
    void setType(std::string const ss);
    virtual ~Animal();
};


