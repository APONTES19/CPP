/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:30:44 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/20 21:39:22 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	return;
}

Harl::~Harl(){
	return;
}

void Harl::complain(std::string level){
	void (Harl::*pointMember[])() ={
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	const char *member[] ={
		"debug",
		"info",
		"warning",
		"error"
	};
	for (int i = 3; i >= 0; i--){
		if (level == member[i]){
			(this->*pointMember[i])();
		}
	};
}

void Harl::debug(void){
	std::string menssage;

	menssage = "Debug: I love having extra bacon for"
				"my 7XL-double-cheese-triple-pickle-special "
				"ketchup burger. I really do!";
	std::cout << menssage << std::endl;
}

void Harl::info(void){
	std::string menssage;

	menssage = "Info: I cannot believe adding extra bacon costs more money."
				"You didn’t put enough bacon in my burger! "
				"If you did, I wouldn’t be asking for more!";
	std::cout << menssage << std::endl;
}

void Harl::warning(void){
	std::string menssage;

	menssage = "Warning: I think I deserve to have some extra bacon for free."
				"I’ve been coming for years whereas you started working "
				"here since last month.";
	std::cout << menssage << std::endl;
}

void Harl::error(void){
	std::string menssage;

	menssage = "Error: This is unacceptable! I want to speak to the manager now.";
	std::cout << menssage << std::endl;
}
