/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:52:40 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/08 16:35:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Contact.hpp"
#include <string.h>
#include <iomanip>
#include <sstream>

class PhoneBook
{
    public:
        Contact contact[8];
    PhoneBook();
    ~PhoneBook();
};
