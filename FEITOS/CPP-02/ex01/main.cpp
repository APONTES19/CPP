/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:13:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/27 16:26:02 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void YourNumbers();

int	main(void){

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	YourNumbers();
	return 0;
}

void YourNumbers(){
	std::cout << std::endl;
	std::cout << "Seu Número Inteiro de Teste:" << std::endl;
	Fixed const intNumber( 1 );
	std::cout << "number is " << intNumber << " as integer" << std::endl;
	std::cout << "number is " << intNumber.toInt() << " as integer" << std::endl;

	std::cout << "Seu Número Float de Teste:" << std::endl;
	Fixed const number( 1.2f );
	std::cout << "number is " << number << std::endl;
	std::cout << "number is " << number.toInt() << " as integer" << std::endl;
}
