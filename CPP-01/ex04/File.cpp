/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:23:14 by lucasmar          #+#    #+#             */
/*   Updated: 2023/09/20 14:13:38 by lucasmar         ###   ########.fr       */
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
				throw std::runtime_error("Empty file.");
			}
		}
		file.close();
	} catch(const std::exception& e){
		std::cerr << "Ocorreu uma exceção: " << e.what() << std::endl;
		return (1);
	}
	return(0);
}

void	File::replace(char *filename, std::string s1, std::string s2){

	//(void) s2;

	std::ofstream	*outfile = _touchFile(filename);
	std::ifstream file(filename);

	std::string line;
	std::string swap;
	std::string word;
	size_t	find;


	while(std::getline(file, line)){
		std::cout << line << std::endl;

		find = line.find(s1);
		if(find != std::string::npos){
			std::cout << "ok\n";
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
	(void)s1;
	(void)line;
	//std::string result;

	//outfile << s2 << std::endl;
	return(s2);
}
