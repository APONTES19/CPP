/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:27:26 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/11 20:08:32 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap(){
	std::cout << "-> ScavTrap: Default constructor called🟢" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
	std::cout << "-> ScavTrap: Constructor with parameter name called🟢"
		<< std::endl;
	this->_hitPoints = 100;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap):ClapTrap(){
	std::cout << "-> ScavTrap: Copy constructor called🟢" << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap(void){
	std::cout << "-> ScavTrap: Destructor called🔴" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other){
	if (this != &other){
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attackDamage = other._attackDamage;
		this->_energyPoints = other._energyPoints;
	}
	std::cout << "-> ScavTrap: Copy assignment operator🟢" << std::endl;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	if(this->_hitPoints > 0){
		std::cout << "	-> ScavTrap " << this->_name
			<< " is now in Gate keeper mode." << std::endl;
	}
	else{
		std::cout << "ScavTrap " << this->_name
			<< " cannot guard Gate. Because " << this->_name
			<< " is died." << std::endl;
	}
}

void ScavTrap::attack(const std::string &target)
{
	if(checkClapTrap() == 0){
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "	-> ScavTrap " << this->getName()
			<< " attacks " << target << ", causing "
			<< this->getAttackDamage() << " points of damage!" << std::endl;
	}
}


