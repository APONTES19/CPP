/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:12 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/12 21:25:22 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie* zombie;
	int N;

	N = 5;
	zombie = zombieHorde(N, "Lucasmar_");
	--N;
	while(N >= 0){
		std::cout << N << "-";
		zombie[N].announce();
		N--;
	}
	delete[] zombie;
	return (0);
}
