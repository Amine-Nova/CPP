/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:23:55 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/08 15:23:43 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"

class Brain
{
    private:
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &a);
        Brain &operator=(const Brain &a);
        ~Brain();
};
