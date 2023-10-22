/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:35:02 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/22 19:23:24 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>

class Fixed
{
private:
    int fp;
	static const int fb = 8;
public:
    Fixed();
    Fixed(const Fixed &a); // Copy Constractur
    Fixed &operator=(const Fixed &a); // Copy assignment operator
    ~Fixed(); // Destructor
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
