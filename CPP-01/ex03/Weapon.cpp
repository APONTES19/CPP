/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:54:29 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/13 16:55:09 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->_type = type;
};

Weapon::~Weapon(void){
	return;
};

const std:string &Weapon::getType() const{
	return(this->_type);
};

void Weapon::setType(std::string type){
	this->_type = type;
};
