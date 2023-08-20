/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:04:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/08/20 18:00:47 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	int i;
	int j;

	if(argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else{
		i = 0;
		while(argv[i]){
			j = 0;
			while(argv[i][j]){
				if(argv[i][j] >= 97 && argv[i][j] <= 122)
					argv[i][j] = argv[i][j] -32;
				j++;
			}
			i++;
		}
		i = 1;
		while(argv[i]){
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
