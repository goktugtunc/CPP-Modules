/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:50:06 by gotunc            #+#    #+#             */
/*   Updated: 2024/03/23 05:18:11 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->floatnum = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->floatnum = num << this->byte;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->floatnum = roundf(num * (1 << this->byte));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->floatnum = other.floatnum;
	return (*this);
}

std::ostream&	operator<<( std::ostream &o, Fixed const &other)
{
    o << other.toFloat();
    return (o);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->floatnum);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->floatnum = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->floatnum) / (1 << this->byte));
}

int		Fixed::toInt(void) const
{
	return (this->floatnum >> this->byte);
}

bool    Fixed::operator>(const Fixed &rhs) const
{
    return (this->floatnum > rhs.floatnum);
}

bool    Fixed::operator<(const Fixed &rhs) const
{
    return (this->floatnum < rhs.floatnum);
}

bool    Fixed::operator>=(const Fixed &rhs) const
{
    return (this->floatnum >= rhs.floatnum);
}

bool   Fixed::operator<=(const Fixed &rhs) const
{
    return (this->floatnum <= rhs.floatnum);
}

bool  Fixed::operator==(const Fixed &rhs) const
{
    return (this->floatnum == rhs.floatnum);
}

bool    Fixed::operator!=(const Fixed &rhs) const
{
    return (this->floatnum != rhs.floatnum);
}

float   Fixed::operator+(Fixed const &rhs)
{
    return (this->toFloat() + rhs.toFloat());
}

float   Fixed::operator-(Fixed const &rhs)
{
    return (this->toFloat() - rhs.toFloat());
}

float   Fixed::operator*(Fixed const &rhs)
{
    return (this->toFloat() * rhs.toFloat());
}

float   Fixed::operator/(Fixed const &rhs)
{
    return (this->toFloat() / rhs.toFloat());
}

Fixed&   Fixed::operator++(void)
{
    ++this->floatnum;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    tmp.floatnum = this->floatnum++;
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    --this->floatnum;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    tmp.floatnum = this->floatnum--;
    return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if ( a.floatnum < b.floatnum )
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.floatnum < b.floatnum)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.floatnum > b.floatnum)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.floatnum > b.floatnum)
        return (a);
    return (b);
}
