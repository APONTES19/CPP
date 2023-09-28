/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:25:51 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/27 18:17:04 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int number){
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = number << _fractional_bits;
}

Fixed::Fixed(const float number){
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits =
		static_cast<int> (roundf(number * (1 << this->_fractional_bits)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed	&other) {
	std::cout << "Copy assignment operator calles" << std::endl;
    if (this != &other) {
       this->_rawBits = other.getRawBits();
    }
	 return *this;
}

int Fixed::getRawBits(void) const{
	return	(this->_rawBits);
}

void Fixed::setRawBits(int const rawBits){
	std::cout << "setRawbits member function called" << std::endl;
	this->_rawBits = rawBits;
}

int	Fixed::toInt(void) const{
	return(this->_rawBits >> this->_fractional_bits);
}

float	Fixed::toFloat(void) const{
	return (this->_rawBits / float(1 << this->_fractional_bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
