/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:03:11 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/02 17:00:44 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
private:
    std::string type;
    Brain *Bdog;
public:
    Dog();
    Dog(const Dog &a);
    Dog &operator=(const Dog &a);
    void makeSound() const;
    std::string getType() const;
    void setType(std::string const ss);
    ~Dog();
};
