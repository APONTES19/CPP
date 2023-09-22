/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:25:51 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/21 17:50:29 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int _fractional_bits = 8;

Fixed::Fixed() : _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
    this->rawBits = other.rawBits;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        // Faça a atribuição dos atributos de 'other' para este objeto
        this->rawBits = other.rawBits;
    }
    return *this;
}

Fixed::~Fixed() {
    // Libere recursos alocados dinamicamente, se houver
}

int getRawBits(void) const;
void setRawBits(int const rawBits);
