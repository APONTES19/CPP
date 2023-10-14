/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:09:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/13 20:18:53 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void):WrongAnimal(){
	std::cout << " -> WrongCat constructor called!🟢" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy):WrongAnimal(){
	std::cout << " -> WrongCat Copy constructor called!🟢" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << " -> WrongCat Operator '=' called!🟢" << std::endl;
	if(this != &other){
		this->_type = other.getType();
	}
	return(*this);
}

WrongCat::~WrongCat(void){
	std::cout << " -> Default WrongCat destructor called!🔴" << std::endl;
}

void WrongCat::makeSound(void) const{
	std::cout << " -> 👶 - Wrong Cat Meeeeeeeeeieieie!🔈" << std::endl;
}
