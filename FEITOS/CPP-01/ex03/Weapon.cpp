/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:54:29 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/20 05:40:16 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->_type = type;
};

Weapon::~Weapon(void){
	return;
};

const std::string &Weapon::getType(void){
	return(this->_type);
};

void Weapon::setType(std::string type){
	this->_type = type;
};
