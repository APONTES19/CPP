/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:17 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/29 13:29:05 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	return;
}

ClapTrap::~ClapTrap(void){
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap	&other){
	if (this != &other){
		this->_atributos = other.getRawBits();
	}
	return *this;
}
