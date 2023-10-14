/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:08:59 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/13 20:07:51 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void):Animal(){
	std::cout << " -> Dog constructor called!🟢" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy):Animal(){
	std::cout << " -> Dog Copy constructor called!🟢" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << " -> Dog Operator '=' called!🟢" << std::endl;
	if(this != &other){
		this->_type = other.getType();
	}
	return(*this);
}

Dog::~Dog(void){
	std::cout << " -> Default Dog destructor called!🔴" << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << " -> 🐶 - Auauauauaauauuuauuu!🔈" << std::endl;
}
