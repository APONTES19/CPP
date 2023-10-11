/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:27:26 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/11 20:25:46 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap(){
	std::cout << "-> FragTrap: Default constructor called🟢" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
	std::cout << "-> FragTrap: Constructor with parameter name called🟢"
		<< std::endl;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
}

FragTrap::FragTrap(FragTrap const &Fragtrap):ClapTrap(){
	std::cout << "-> FragTrap: Copy constructor called🟢" << std::endl;
	*this = Fragtrap;
}

FragTrap::~FragTrap(void){
	std::cout << "-> FragTrap: Destructor called🔴" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other){
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
	}
	std::cout << "-> FragTrap: Copy assignment operator🟢" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if(checkClapTrap() == 0){
		std::cout << "	-> FragTrap " << this->_name
			<< " High Five" << std::endl;
	}
}



