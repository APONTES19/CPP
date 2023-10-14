/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:09:09 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/13 20:07:29 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	std::cout << " -> WrongAnimal constructor called!🟢" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << " -> WrongAnimal Copy constructor called!🟢" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << " -> WrongAnimal Operator '=' called!🟢" << std::endl;
	if(this != &other){
		this->_type = other.getType();
	}
	return(*this);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << " -> Default WrongAnimal destructor called!🔴" << std::endl;
}

void WrongAnimal::setType(std::string type){
	this->_type = type;
}

std::string WrongAnimal::getType(void) const{
	return(this->_type);
}

void WrongAnimal::makeSound(void) const{
	std::cout << " -> 👻 - Wrong Animal buhbuhbuh!🔈" << std::endl;
}
