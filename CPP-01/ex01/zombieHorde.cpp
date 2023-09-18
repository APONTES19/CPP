/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:43:36 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/12 21:23:54 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie*	zombieHorde(int N, std::string name){
	Zombie* zombie;

	zombie = new Zombie[N];
	--N;
	while(N >= 0){
		zombie[N].setName(name);
		N--;
	}

	return(zombie);
}
