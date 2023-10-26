/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:41:47 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/26 12:17:09 by abenmous         ###   ########.fr       */
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
    bool operator>(const Fixed &a);
    bool operator<(const Fixed &a);
    bool operator>=(const Fixed &a);
    bool operator<=(const Fixed &a);
    bool operator==(const Fixed &a);
    bool operator!=(const Fixed &a);
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
    int getRawBits(void) const;
	void setRawBits(int const raw);
    static Fixed min(const Fixed &num1, const Fixed &num2);
    static Fixed max(const Fixed &num1, const Fixed &num2);
    static Fixed min(Fixed &num1, Fixed &num2);
    static Fixed max(Fixed &num1, Fixed &num2);
    ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& a);