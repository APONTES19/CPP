/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:13:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/28 14:34:00 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void YourNumbers();

int	main(void){

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;


	YourNumbers();
	return 0;
}

void YourNumbers(){

	std::cout << "	\n Your Numbers \n" << std::endl;

	std::cout << "	->Operador \" > \"  \n" << std::endl;
	{
		Fixed a = 10.5f;
		Fixed b = 20.5f;

		std::cout << "		if (a = " << a << " > b = " << b << ")" << std::endl;
		if (a > b){
			std::cout << "		*Sim a maior do que b" << std::endl;
		}else{
			std::cout << "		*Não a menor do que b" << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" < \"  \n" << std::endl;
	{
		Fixed a = 10.5f;
		Fixed b = 20.5f;

		std::cout << "		if (a = " << a << " > b = " << b << ")" << std::endl;
		if (a < b){
			std::cout << "		*Sim a menor do que b" << std::endl;
		}else{
			std::cout << "		*Não a maior do que b" << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" >= \"  \n" << std::endl;
	{
		Fixed a = 10.5f;
		Fixed b = 20.5f;

		std::cout << "		if (a = " << a << " >= b = " << b << ")" << std::endl;
		if (a >= b){
			std::cout << "		*Sim a maior ou igual do que b" << std::endl;
		}else{
			std::cout << "		*Não a menor ou diferente do que b" << std::endl;
		}
		std::cout << std::endl;

	}

	std::cout << "	->Operador \" <= \"  \n" << std::endl;
	{
		Fixed a = 10.5f;
		Fixed b = 20.5f;

		std::cout << "		if (a = " << a << " <= b = " << b << ")" << std::endl;
		if (a <= b){
			std::cout << "		*Sim a menor ou igual do que b" << std::endl;
		}else{
			std::cout << "		*Não a maior ou diferente do que b" << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" == \"  \n" << std::endl;
	{
		Fixed a = 10.598f;
		Fixed b = 10.598f;

		std::cout << "		if (a = " << a << " == b = " << b << ")" << std::endl;
		if (a == b){
			std::cout << "		*Sim a igual a b" << std::endl;
		}else{
			std::cout << "		*Não a diferente de b" << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" != \"  \n" << std::endl;
	{
		Fixed a = 10.598f;
		Fixed b = 10.598f;

		std::cout << "		if (a = " << a << " != b = " << b << ")" << std::endl;
		if (a != b){
			std::cout << "		*Sim a diferente de b" << std::endl;
		}else{
			std::cout << "		*Não a igual a b" << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" * \"  \n" << std::endl;
	{
		Fixed a = 10.5942f;
		Fixed b = 2;

		std::cout << "		a = " << a << " * b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << a * b << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" / \"  \n" << std::endl;
	{
		Fixed a = 30.42f;
		Fixed b = 2;

		std::cout << "		a = " << a << " / b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << a / b << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" - \"  \n" << std::endl;{
		Fixed a = 30.42f;
		Fixed b = 2;

		std::cout << "		a = " << a << " - b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << a - b << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador const\" - \"  \n" << std::endl;{
		Fixed const a = 10.59f;
		Fixed const b = 10.59f;

		std::cout << "		a = " << a << " - b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << a - b << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" -- \"  \n" << std::endl;{
		Fixed a = 30.5f;

		std::cout << "		a = " << a << " --a " << std::endl;
		std::cout << "		*Resultado =>>  " << --a << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" -- \"  \n" << std::endl;{
		Fixed a = 30.5f;

		std::cout << "		a = " << a << " a-- " << std::endl;
		std::cout << "		*Resultado antes =>>  " << a-- << std::endl;
		std::cout << "		*Resultado depois =>>  " << a << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" + \"  \n" << std::endl;{
		Fixed a = 30.42f;
		Fixed b = 2;

		std::cout << "		a = " << a << " + b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << a + b << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador const  \" + \"  \n" << std::endl;
	{
		Fixed const a = 10.59f;
		Fixed const b = 10.59f;

		std::cout << "		a = " << a << " + b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << a + b << std::endl;
		std::cout << std::endl;
	}
	
	std::cout << "	->Operador \" ++ \"  \n" << std::endl;{
		Fixed a = 30.42f;

		std::cout << "		a = " << a << " a++ " << std::endl;
		std::cout << "		*Resultado antes =>>  " << a++ << std::endl;
		std::cout << "		*Resultado depois =>>  " << a << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" ++ \"  \n" << std::endl;{
		Fixed a = 30.42f;

		std::cout << "		a = " << a << " ++a " << std::endl;
		std::cout << "		*Resultado =>>  " << ++a << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" min \"  \n" << std::endl;{
		Fixed a = 30.5f;
		Fixed b = 68.5f;

		std::cout << "		a = " << a << " min(a,b) b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << Fixed::min(a, b) << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador const \" min \"  \n" << std::endl;{
		Fixed const a = 30.5f;
		Fixed const b = 68.5f;

		std::cout << "		a = " << a << " min(a,b) b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << Fixed::min(a, b) << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador \" max \"  \n" << std::endl;{
		Fixed a = 30.5f;
		Fixed b = 68.5f;

		std::cout << "		a = " << a << " max(a,b) b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << Fixed::max(a, b) << std::endl;
		std::cout << std::endl;
	}

	std::cout << "	->Operador const \" max \"  \n" << std::endl;{
		Fixed const a = 30.5f;
		Fixed const b = 68.5f;

		std::cout << "		a = " << a << " max(a,b) b = " << b << std::endl;
		std::cout << "		*Resultado =>>  " << Fixed::max(a, b) << std::endl;
		std::cout << std::endl;
	}

}
