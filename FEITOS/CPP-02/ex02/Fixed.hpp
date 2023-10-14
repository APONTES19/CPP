/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:26:00 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/28 14:17:27 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &copy);
		Fixed &operator=(Fixed const &fixed);
		~Fixed(void);
		int	getRawBits(void)const;
		void	setRawBits(int const rawBits);
		float	toFloat(void) const;
		int	toInt(void) const;
		bool operator>(Fixed const &fixed) const;
		bool operator<(Fixed const &fixed) const;
		bool operator>=(Fixed const &fixed) const;
		bool operator<=(Fixed const &fixed) const;
		bool operator==(Fixed const &fixed) const;
		bool operator!=(Fixed const &fixed) const;
		Fixed operator*(Fixed const &fixed) const;
		Fixed operator/(Fixed const &fixed) const;
		Fixed operator-(void);
		Fixed operator-(Fixed const &fixed) const;
		Fixed operator--(void);
		Fixed operator--(int);
		Fixed operator+(void);
		Fixed operator+(Fixed const &fixed) const;
		Fixed operator++(void);
		Fixed operator++(int);
		static Fixed &min(Fixed &arg1, Fixed &arg2);
		static Fixed const &min(Fixed const &arg1, Fixed const &arg2);
		static Fixed &max(Fixed &arg1, Fixed &arg2);
		static Fixed const &max(Fixed const &arg1, Fixed const &arg2);

	private:
		int	_rawBits;
		static const int _fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
