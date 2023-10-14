/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:17 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/11 20:13:11 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = "";
	std::cout << this->_name << " -> ClapTrap successfully created!🟢" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name){
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " -> ClapTrap successfully created!🟢" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << this->_name << " -> ClapTrap successfully destroyed!🔴" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << this->_name
		<< copy.getName() <<" -> ClapTrap successfully Copy constructor!🟢"
		<< std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap	&other){
	if (this != &other){
		this->setAttackDamage(other.getAttackDamage());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setHitPoints(other.getHitPoints());
		this->setName(other.getName());
	}
	return (*this);
}

void	ClapTrap::setName(std::string name){
	this->_name = name;
}

std::string	ClapTrap::getName(void)const{
	return(this->_name);
}

void	ClapTrap::setHitPoints(int	hitPoints){
	if(hitPoints >= 0){
		this->_hitPoints = hitPoints;
	}
	else{
		std::cout
		<< " -> Value received is not valid, therefore it will not be changed."
		<< std::endl;
	}
}

int		ClapTrap::getHitPoints(void)const{
	return(this->_hitPoints);
}

void	ClapTrap::setEnergyPoints(int	energyPoints){
	if(energyPoints >= 0){
		this->_energyPoints = energyPoints;
	}
	else{
		std::cout
		<< " -> Value received is not valid, therefore it will not be changed."
		<< std::endl;
	}
}

int		ClapTrap::getEnergyPoints(void)const{
	return(this->_energyPoints);
}

void	ClapTrap::setAttackDamage(int	attackDamage){
	if(attackDamage >= 0){
		this->_attackDamage = attackDamage;
	}
	else{
		std::cout
		<< " -> Value received is not valid, therefore it will not be changed."
		<< std::endl;
	}
}

int		ClapTrap::getAttackDamage(void)const {
	return(this->_attackDamage);
}

void	ClapTrap::attack(const std::string &target){
	if(checkClapTrap() == 0){
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "\n	ClapTrap " << this->getName() << " attacks "
			<< target << ", causing "<< this->getAttackDamage()
			<< " pointss of damage!"	<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	int pointss;

	if ((int)amount < 0){
		std::cout << "	ClapTrap " << getName()
			<< " received an invalid damage amount.☢️" << std::endl;
		return;
	}

	if(checkClapTrap() == 0){
		pointss = this->getHitPoints() - (int)amount;
		if (pointss <= 0)
			this->setHitPoints(0);
		else
			this->setHitPoints(pointss);
		std::cout << "	ClapTrap "  << this->getName()
			<< " took " << amount << " damage." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if((int)amount <= 0){
		std::cout << "	ClapTrap " << getName()
			<< " received an invalid repair amount." << std::endl;
		return;
	}
	if(checkClapTrap() == 0){
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		this->setHitPoints(this->getHitPoints() + amount);
		std::cout << "	ClapTrap " << this->getName()
			<< " repairs " << amount << std::endl;
	}
}

int	ClapTrap::checkClapTrap(void){
	int	result;

	result = 0;
	if(this->getEnergyPoints() <= 0){
		std::cout <<"	" << this->getName()
			<< "-> Don´t have Energy Points" << std::endl;
		result++;
	}
	else if(this->getHitPoints() <= 0){
		std::cout << "	" << this->getName()
			<< "-> Don´t have HitPoints" << std::endl;
		result++;
	}
	return(result);
}

void	ClapTrap::statusClapTrap(){
	std::cout	<< "	Status -> " << this->getName();
	std::cout	<< "  EnergyPoints :" << this->getEnergyPoints();
	std::cout	<< "  HitPoints :" << this->getHitPoints() << std::endl;
}
