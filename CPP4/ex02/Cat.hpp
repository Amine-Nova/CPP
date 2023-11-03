/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:12:00 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/02 17:00:36 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
private:
    std::string type;
    Brain *Bcat;
public:
    Cat();
    Cat(const Cat &a);
    Cat &operator=(const Cat &a);
    void makeSound() const;
    std::string getType() const;
    void setType(std::string const ss);
    ~Cat();
};