/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:15:50 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/20 16:23:28 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include <iostream>
#include "File.hpp"

int main(int argv, char **argc)
{
	File file;
	if(argv != 4){
		std::cerr << "Erro: number arguments diferent of 3! try again :*"
			<< std::endl;
		return 1;
	}
	if (file.open(argc[1]) == 0){
		file.replace(argc[1], argc[2], argc[3]);
	}
	else
		return 1;
	return 0;
}

