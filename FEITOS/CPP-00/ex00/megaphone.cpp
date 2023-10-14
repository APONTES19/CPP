/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:04:21 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/04 16:23:59 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv){

	if(argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else{
		int	i;
		int	j;
		std::string phrase;

		j = 1;
		while(argv[j]){
			i = 0;
			while(argv[j][i]){
				phrase += std::toupper(argv[j][i]);
				i++;
			}
			j++;
		}

		std::cout << phrase << std::endl;
	}
	return 0;
}
