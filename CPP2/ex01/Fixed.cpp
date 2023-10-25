/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:57:52 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/25 18:13:45 by abenmous         ###   ########.fr       */
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
	std::cout << "Float constructor called" << std::endl;
    float i = f;
    i = roundf(i * pow(2, fb));
    fp = i;
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