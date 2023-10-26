/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:57:52 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/26 12:27:39 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    fp = 0;
}
Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
    int j = i;

    j = roundf(j * pow(2, fb));
    this->fp = j;
}
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
    float i = f;
    i = roundf(i * pow(2, fb));
    this->fp = i;
}
Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}
Fixed &Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		fp = a.getRawBits();
	return *this;
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
int Fixed::getRawBits(void) const
{
	return (this->fp);
}
void Fixed::setRawBits(int const raw)
{
	fp = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& a)
{
    out << a.toFloat();
    return out;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}