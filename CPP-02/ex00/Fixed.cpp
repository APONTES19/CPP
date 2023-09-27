/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:25:51 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/26 23:08:18 by lucasmar         ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
	return	(this->_rawBits);
}

void Fixed::setRawBits(int const rawBits){
	std::cout << "setRawbits member function called" << std::endl;
	this->_rawBits = rawBits;
}
