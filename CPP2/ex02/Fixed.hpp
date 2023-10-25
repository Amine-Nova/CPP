/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:41:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/25 18:47:57 by abenmous         ###   ########.fr       */
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
    Fixed(const Fixed &a);
    Fixed &operator=(const Fixed &a);
    Fixed &operator>(const Fixed &a);
    Fixed &operator<(const Fixed &a);
    Fixed &operator>=(const Fixed &a);
    Fixed &operator<=(const Fixed &a);
    Fixed &operator==(const Fixed &a);
    Fixed &operator!=(const Fixed &a);
    Fixed operator+(const Fixed &a);
    Fixed operator-(const Fixed &a);
    Fixed operator*(const Fixed &a);
    Fixed operator/(const Fixed &a);
    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);
    float toFloat(void) const;
    int toInt(void) const;
    ~Fixed();
    int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& a);