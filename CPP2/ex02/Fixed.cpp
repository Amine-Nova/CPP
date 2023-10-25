/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:41:49 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/25 18:48:35 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
    fp = 0;
}
Fixed::Fixed(const Fixed &a)
{
    *this = a;
}
Fixed::Fixed(const int i)
{
    std::string bin, set;
    int j = 0, n = i, d = 0;

    while(n > 0)
    {
        d = n % 2;
        n = n / 2;
        bin.push_back(d + 48);
        j++;
    }
    while(j >= 0)
    {
        set.push_back(bin[j]);
        j--;
    }
    j = 0;
    while(j < 8)
    {
        set.push_back('0');
        j++;
    }
    j = set.length() - 1;
    d = 1;
    fp = 0;
    while (j >= 0)
    {
        if (set[j] == '1')
            fp += d;
        d *= 2;
        j--;
    }
}
Fixed::Fixed(const float f)
{
    float i = f;
    i = roundf(i * pow(2, fb));
    fp = i;
}
Fixed &Fixed::operator=(const Fixed &a)
{
	if (this != &a)
		fp = a.getRawBits();
	return *this;
}
Fixed Fixed::operator+(const Fixed &a)
{
    return(Fixed(this->toFloat() + a.toFloat()));
}
Fixed Fixed::operator-(const Fixed &a)
{
    return(Fixed(this->toFloat() - a.toFloat()));
}
Fixed Fixed::operator*(const Fixed &a)
{
    return(Fixed(this->toFloat() * a.toFloat()));
}
Fixed Fixed::operator/(const Fixed &a)
{
    return(Fixed(this->toFloat() / a.toFloat()));
}
Fixed &Fixed::operator++()
{
    this->fp++;// pre-increment
    return (*this);
}
Fixed &Fixed::operator--()
{
    this->fp--;// pre-decrement
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    fp++;// post-increment
    return (temp);
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    fp--;// post-decrement
    return (temp);
}
float Fixed::toFloat(void) const
{
    return((this->getRawBits() / pow(2, fb)));
}
int Fixed::toInt(void) const
{
    int i = fp;
    i = i >> fb;
    return(i);
}
std::ostream& operator<<(std::ostream& out, const Fixed& a)
{
    out << a.toFloat();
    return out;
}
int Fixed::getRawBits(void) const
{
	return (this->fp);
}
void Fixed::setRawBits(int const raw)
{
	fp = raw;
}
Fixed::~Fixed()
{
}