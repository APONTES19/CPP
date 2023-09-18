/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:06:39 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/18 15:58:03 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){
	this->_name = name;
}

HumanA::~HumanA(){
	return;
}

void HumanA::attack(){
	std::cout << this->_name
		<< " attacks with their "
		<< this->_weapon.getType() <<std::endl;
}
