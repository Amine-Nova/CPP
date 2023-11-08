/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:03:11 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 17:26:17 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"

class Dog : public Animal
{
private:
public:
    Dog();
    Dog(const Dog &a);
    Dog &operator=(const Dog &a);
    void makeSound() const;
    ~Dog();
};
