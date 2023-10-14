/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:13:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/11 17:17:06 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){

	ClapTrap a("Lucas");
	ClapTrap b("Atena");

	std::cout << "\n\n\n			Init game\n\n" << std::endl;
	a.statusClapTrap();
	b.statusClapTrap();
	a.attack(b.getName());
	a.statusClapTrap();
	b.statusClapTrap();

	while(a.getHitPoint() != 0){
		a.takeDamage(2);
		a.statusClapTrap();
	}
	a.takeDamage(-2);
	a.statusClapTrap();

	a.beRepaired(-6);
	a.statusClapTrap();
	a.beRepaired(10);
	a.statusClapTrap();
	a.setHitPoint(10);
	a.beRepaired(10);
	a.statusClapTrap();
	a.attack(b.getName());
	a.statusClapTrap();

	return 0;
}
