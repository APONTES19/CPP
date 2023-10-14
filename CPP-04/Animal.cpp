/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:18:22 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/14 16:49:45 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void){
	std::cout << " -> Default Animal constructor called!🟢" << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << " -> Copy Animal constructor called!🟢" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << " -> Animal Operator '=' called!🟢" << std::endl;
	if (this != &other){
	}
	return *this;
}

Animal::~Animal(void) {
	std::cout << " -> Default Animal destructor called!🔴" << std::endl;
}
