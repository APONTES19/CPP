/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:26:00 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/21 17:48:06 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
	int _rawBits;
	static const int _fractional_bits;

public:
	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed &operator=(Fixed const &fixed);
	~Fixed(void);
	int getRawBits(void)const;
	void setRawBits(int const rawBits);
};

#endif
