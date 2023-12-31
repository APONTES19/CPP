/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:16:09 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/20 17:41:35 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>

class File{
	public:
	File(void);
	~File(void);

	int	open(char *filename);
	void	replace(char *filename, std::string s1, std::string s2);

	private:
	std::ofstream *_touchFile(char *filename);
	std::string	_swapWord(std::string s1, std::string s2, std::string line);
	std::string	_swapWhile(std::string s1, std::string s2, std::string line);
};
