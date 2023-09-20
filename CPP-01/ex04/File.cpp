/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:23:14 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/20 18:39:25 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(){
	return;
}

File::~File(){
	return;
}

int File::open(char *filename){
	try{
		std::ifstream file(filename);
		if(!file){
			throw std::runtime_error("Error open file.");
		}
		else{
			file.seekg(0, std::ios::end);
			std::streampos size = file.tellg();
			if(size == 0){
				throw std::runtime_error("Empty file or without permission!");
			}
		}
		file.close();
	} catch(const std::exception& e){
		std::cerr << "Ocorreu uma exceção:( " << e.what() << std::endl;
		return (1);
	}
	return(0);
}

void	File::replace(char *filename, std::string s1, std::string s2){

	std::ofstream	*outfile = _touchFile(filename);
	std::ifstream file(filename);
	std::string line;
	std::string swap;
	std::string word;
	size_t	find;

	while(std::getline(file, line)){
		find = line.find(s1);
		if(find != std::string::npos){
			swap = _swapWord(s1, s2, line);
			*outfile << swap << std::endl;
		}
		else{
			*outfile << line << std::endl;
		}
	}
	outfile->close();
	delete outfile;
	file.close();
}

std::ofstream	*File::_touchFile(char *filename){
	std::string nameOutfile;
	const char	*extension;

	extension = ".replace";
	nameOutfile = std::string(filename) + extension;
	std::ofstream *outfile = new std::ofstream(nameOutfile.c_str());
	return(outfile);
}

std::string	File::_swapWord(std::string s1, std::string s2, std::string line){
	std::istringstream	fakeLine(line);
	std::string temp;
	std::string s2Temp;
	std::string s1Temp;
	std::string	result;
	size_t	find;
	int	i;

	i = 0;
	result = "";
	while(std::getline(fakeLine, temp, ' ')){
		if ((find = s2.find(s1) != std::string::npos)){
			s2Temp = s2;
			s2 = "/";
			temp = _swapWhile(s1, s2, temp);
			s1Temp = s1;
			s1 = s2;
			s2 = s2Temp;
			temp = _swapWhile(s1, s2, temp);
			s1 = s1Temp;
		}
		else{
			temp = _swapWhile(s1, s2, temp);
		}
		result += temp + " ";
		i++;
	}
	if(i == 1)
		result = temp;
	return(result);
}

std::string	File::_swapWhile(std::string s1, std::string s2, std::string temp){
	std::string temp1;
	std::string temp2;
	size_t find;

	while((find = temp.find(s1)) != std::string::npos){
		if(s1.length() == temp.length()){
			temp = s2;
			break;
		}
		else{
			temp1 = temp.substr(0,find);
			temp2 = temp.substr(find+s1.length());
			temp = temp1 + s2 + temp2;
		}
	}
	return (temp);
}
