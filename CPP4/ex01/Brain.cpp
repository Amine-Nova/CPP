/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:24:36 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/31 17:37:05 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constractor : \"Slt!\"" << std::endl;
    int i = 100, j = 0;
    while(j < i)
    {
        ideas[j] = "Default";
        j++;
    }
}

Brain::Brain(const Brain &a)
{
    *this = a;
}
Brain &Brain::operator=(const Brain &a)
{

    if (this != &a)
    {
        int i = 100, j = 0;
        while(j < i)
        {
            this->ideas[j] = a.ideas[j];
            j++;
        }
    }
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destractor : \"By!\"" << std::endl;
}