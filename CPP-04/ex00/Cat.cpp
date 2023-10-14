/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:08:54 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/13 20:07:44 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal(){
	std::cout << " -> Cat constructor called!🟢" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy):Animal(){
	std::cout << " -> Cat Copy constructor called!🟢" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << " -> Cat Operator '=' called!🟢" << std::endl;
	if(this != &other){
		this->_type = other.getType();
	}
	return(*this);
}

Cat::~Cat(void){
	std::cout << " -> Default Cat destructor called!🔴" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << " -> 😼 - Meowowowowowowooooo!🔈" << std::endl;
}
