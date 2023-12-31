/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:53:01 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/23 23:00:18 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>

class Fixed
{
private:
    int fp;
	static const int fb = 8;
public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    Fixed(const Fixed &a); // Copy Constractur
    Fixed &operator=(const Fixed &a); // Copy assignment operator
    ~Fixed(); // Destructor
	float toFloat(void) const;
	int toInt(void) const;	
    int getRawBits(void) const;
	void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream&, const Fixed&);
