/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:13:29 by abenmous          #+#    #+#             */
/*   Updated: 2023/12/28 18:48:30 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <sstream>

class ScalarConverter
{
private:
public:
    static void convert(std::string input);
    ScalarConverter();
    ~ScalarConverter();
};
