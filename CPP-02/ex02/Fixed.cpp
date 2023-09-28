/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:25:51 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/27 20:49:26 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	return ;
}

Fixed::Fixed(const Fixed &copy) {
    *this = copy;
}

Fixed::Fixed(const int number){
	this->_rawBits = number << _fractional_bits;
}

Fixed::Fixed(const float number){
	this->_rawBits =
		static_cast<int> (roundf(number * (1 << this->_fractional_bits)));
}

Fixed::~Fixed() {
	return ;
}

Fixed	&Fixed::operator=(const Fixed	&other) {
    if (this != &other) {
       this->_rawBits = other.getRawBits();
    }
	 return *this;
}

int	Fixed::getRawBits(void) const{
	return	(this->_rawBits);
}

void	Fixed::setRawBits(int const rawBits){
	this->_rawBits = rawBits;
}

int	Fixed::toInt(void) const{
	return(this->_rawBits >> this->_fractional_bits);
}

float	Fixed::toFloat(void) const{
	return (this->_rawBits / float(1 << this->_fractional_bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed){
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(Fixed const &fixed) const{
	return(this->_rawBits > fixed.getRawBits());
}

bool	Fixed::operator<(Fixed const &fixed) const{
	return(this->_rawBits < fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fixed) const{
	return(this->_rawBits >= fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fixed) const{
	return(this->_rawBits <= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed const &fixed) const{
	return(this->_rawBits == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fixed) const{
	return(this->_rawBits != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &fixed) const{
	return (Fixed(this->toFloat()+ fixed.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &fixed) const{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &fixed) const{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &fixed) const{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	Fixed::operator-(void){
	return (Fixed(-1 * this->toFloat()));
}

Fixed	Fixed::operator+(void){
	return (Fixed(this->toFloat()));
}

Fixed	Fixed::operator++(void){
	++this->_rawBits;
	return (Fixed(this->toFloat()));
}

Fixed	Fixed::operator--(void){
	--this->_rawBits;
	return (Fixed(this->toFloat()));
}

Fixed	Fixed::operator++(int){
	float  tmp;

	tmp = this->toFloat();
	this->_rawBits++;
	return (Fixed(tmp));
}

Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);

	this->_rawBits--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &arg1, Fixed &arg2){
	if(arg1 < arg2)
		return (arg1);
	return(arg2);
}

Fixed	const &Fixed::min(Fixed const &arg1, Fixed const &arg2){
	if(arg1 < arg2)
		return (arg1);
	return(arg2);
}

Fixed	&Fixed::max(Fixed &arg1, Fixed &arg2){
	if(arg1 > arg2)
		return (arg1);
	return(arg2);
}

Fixed	const &Fixed::max(Fixed const &arg1, Fixed const &arg2){
	if(arg1 > arg2)
		return (arg1);
	return(arg2);
}
