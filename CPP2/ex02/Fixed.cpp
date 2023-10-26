/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:41:49 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/26 12:28:13 by abenmous         ###   ########.fr       */
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
	int j = i;

	j = roundf(j * pow(2, fb));
	this->fp = j;
}
Fixed::Fixed(const float f)
{
    float i = f;
    i = roundf(i * pow(2, fb));
    this->fp = i;
}
Fixed &Fixed::operator=(const Fixed &a)
{
	if (this != &a)
		fp = a.getRawBits();
	return *this;
}
bool Fixed::operator>(const Fixed &a)
{
	if (this->fp > a.fp)
		return(1);
	return(0);
}
bool Fixed::operator<(const Fixed &a)
{
	if (this->fp < a.fp)
		return(1);
	return(0);
}
bool Fixed::operator>=(const Fixed &a)
{
	if (this->fp >= a.fp)
		return(1);
	return(0);
}
bool Fixed::operator<=(const Fixed &a)
{
	if (this->fp <= a.fp)
		return(1);
	return(0);
}
bool Fixed::operator==(const Fixed &a)
{
	if (this->fp == a.fp)
		return(1);
	return(0);
}
bool Fixed::operator!=(const Fixed &a)
{
	if (this->fp == a.fp)
		return(1);
	return(0);
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
void Fixed::setRawBits(int const telha)
{
	fp = telha;
}
Fixed Fixed::min(const Fixed &num1, const Fixed &num2)
{
    if (num1.toFloat() > num2.toFloat())
		return(num2);
	return (num1);
}
Fixed Fixed::max(const Fixed &num1, const Fixed &num2)
{
    if (num1.toFloat() < num2.toFloat())
		return(num2);
	return (num1);
}

Fixed Fixed::min(Fixed &num1, Fixed &num2)
{
    if (num1.toFloat() > num2.toFloat())
		return(num2);
	return (num1);
}
Fixed Fixed::max(Fixed &num1, Fixed &num2)
{
    if (num1.toFloat() < num2.toFloat())
		return(num2);
	return (num1);
}
Fixed::~Fixed()
{
}