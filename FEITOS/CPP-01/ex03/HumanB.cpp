/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:09:25 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/18 16:30:55 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
}

HumanB::~HumanB(void){
	return;
}

void HumanB::attack(void){
	std::cout << this->_name
	<< "attacks with their "
	<< this->_weapon->getType()
	<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}
