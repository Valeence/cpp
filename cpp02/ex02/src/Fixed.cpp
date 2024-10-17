/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vandre <vandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:01:59 by vandre            #+#    #+#             */
/*   Updated: 2024/09/09 02:01:18 by vandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed() 
{
    Fixed::_value = 0;
}

Fixed::Fixed(int const k)
{
    this->_value = k * (1 << _bits);
}

Fixed::Fixed(float const f)
{ 
    this->_value = roundf(f * (1 << _bits));
    
}

Fixed::Fixed(Fixed const &copy) 
{
   *this = copy;
}

Fixed::~Fixed()
{
}


float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_value) / (1 << _bits);
}

int Fixed::toInt( void ) const
{

        return (this->_value / (1 << _bits));
}


int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw) 
{
    this->_value = raw;
    //std::cout << this->_value << std::endl;
}

Fixed Fixed::max(Fixed &ref1, Fixed &ref2)
{
    return (ref1._value > ref2._value) ? ref1 : ref2;
}

Fixed Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
    return (ref1._value > ref2._value) ? ref1 : ref2;
}

Fixed Fixed::min(int &ref1, int &ref2)
{
    if(ref1 < ref2) 
        return ref1;
    else 
        return ref2;
    
} 
Fixed Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
    if(ref1._value < ref2._value)
        return ref1;
    else
        return ref2;
}

// int Fixed::max(Fixed &ref1, Fixed &ref2)
// {
//     if(ref1._value > ref2._value)
//         return ref1.getRawBits();
//     else
//         return ref2.getRawBits();
// } 

// int Fixed::max(const Fixed &ref1, const Fixed &ref2)
// {
//     if(ref1._value > ref2._value)
//         return ref1.toFloat();
//     else
//         return ref2.toFloat();
// } 


Fixed &Fixed::operator=(const Fixed &other) throw() 
{
    if (this != &other)
        this->_value = other.getRawBits();
    return *this;  
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->_value > other._value;
}
bool Fixed::operator<(const Fixed &other) const
{
    return this->_value < other._value;
}
bool Fixed::operator>=(const Fixed &other) const
{
    return this->_value >= other._value;
}
bool Fixed::operator<=(const Fixed &other) const
{
    return this->_value <= other._value;
}
bool Fixed::operator==(const Fixed &other) const
{
    return this->_value == other._value;
}
bool Fixed::operator!=(const Fixed &other) const
{
    return this->_value != other._value;
}

Fixed &Fixed::operator*(const Fixed &other) const throw()
{
    Fixed *result = new Fixed();
    result->setRawBits((this->_value * other.getRawBits()) / (1 << _bits));
    return *result;
}

Fixed &Fixed::operator++() {
    this->_value += 1;  
    return *this; 
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;  
    this->_value += 1;   
    return temp;         
}
Fixed &Fixed::operator--() {
    this->_value -= 1;  
    return *this;     
}
Fixed Fixed::operator--(int) {
    Fixed temp = *this;  
    this->_value -= 1;  
    return temp;        
}
