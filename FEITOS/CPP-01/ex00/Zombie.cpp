/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:20 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/12 21:11:50 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <string>

Zombie::Zombie(std::string name){
	this->_name = name;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " -> 🗑️ Has been Destroyed!" << std::endl;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
