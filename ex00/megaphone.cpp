/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:04:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/08/20 16:06:49 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char **megaphone(int argc, char **argv){
	int i;
	int j;

	if(argc < 2){
		std::cout << "\nError 00: Need two or more argments\n" << std::endl;
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
	}
	return (argv);
}
