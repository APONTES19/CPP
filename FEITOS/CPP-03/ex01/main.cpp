/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:13:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/10/11 20:10:08 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){

	ScavTrap a;
	ScavTrap b("Lucas");

	a.statusClapTrap();
	b.statusClapTrap();
	a.attack(b.getName());
	b.attack(a.getName());
	a.statusClapTrap();
	b.statusClapTrap();
	a.guardGate();
	b.guardGate();
	return 0;
}
