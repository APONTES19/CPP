/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:08:42 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/13 20:08:07 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void):_type(){
	std::cout << " -> Default constructor called!🟢" << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << " -> Copy constructor called!🟢" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << " -> Operator '=' called!🟢" << std::endl;
	if(this != &other){
		this->_type = other.getType();
	}
	return(*this);
}

Animal::~Animal(void){
	std::cout << " -> Default Animal destructor called!🔴" << std::endl;
}

void Animal::setType(std::string type){
	this->_type = type;
}

std::string Animal::getType(void) const{
	return(this->_type);
}

void Animal::makeSound(void) const{
	std::cout << " -> 🦍 - Animal sound!🔈" << std::endl;
}

