/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:12 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/12 21:09:57 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(){
	Zombie* zombie;

	zombie = newZombie("Lucas");
	zombie->announce();
	delete zombie;

	randomChump("Lucasmar");
	return (0);
}
