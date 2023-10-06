/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:13:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/05 17:27:51 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void YourNumbers();

int	main(void){

	ClapTrap a("Lucas");
	ClapTrap b("Bruna");

	a.attack(b);
	
	YourNumbers();
	return 0;
}

void YourNumbers(){
	std::cout << std::endl;
}
