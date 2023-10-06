/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:54:17 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/05 17:26:09 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	this->_name = name;
	std::cout << this->_name << " -> ClapTrap successfully created!" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << this->_name << " -> ClapTrap successfully destroyed!" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap	&other){
	if (this != &other){
		this->_attackDamage = other.getAttackDamage();
		this->_energyPoint = other.getEnergyPoint();
		this->_hitPoint = other.getHitPoint();
		this->_name = other.getName();
	}
	return *this;
}

void	ClapTrap::setName(std::string name){
	this->_name = name;
}

std::string	ClapTrap::getName(void)const{
	return(this->_name);
}

void	ClapTrap::setHitPoint(int	hitPoint){
	this->_hitPoint = hitPoint;
}

int		ClapTrap::getHitPoint(void)const{
	return(this->_hitPoint);
}

void	ClapTrap::setEnergyPoint(int	energyPoint){
	this->_energyPoint = energyPoint;
}

int		ClapTrap::getEnergyPoint(void)const{
	return(this->_energyPoint);
}

void	ClapTrap::setAttackDamage(int	attackDamage){
	this->_attackDamage = attackDamage;
}

int		ClapTrap::getAttackDamage(void)const {
	return(this->_attackDamage);
}

void	ClapTrap::attack(const std::string &target){
	std::cout << "attack" << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "takeDamage" << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << "be repaired" << amount << std::endl;
}
