/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:26:00 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/27 16:36:54 by lucasmar         ###   ########.fr       */
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
		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void)const;
		void	setRawBits(int const rawBits);


	private:
		int	_rawBits;
		static const int _fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
