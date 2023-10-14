#!/bin/bash

if [ $# -eq 0 ]; then
	echo "Erro -> Use: $0 <nome_da_classe>"
	exit 1
fi

function check_file_class(){
	local i=1
	while ((i <= $#)); do
		arg="${!i}"
		if [ -f "$arg" ]; then
			echo "O arquivo $arg já existe. Não é possível criar a classe."
			exit 1
		fi
		((i++))
	done
}

function make_head(){
	current_date=$(date +"%Y-%m-%d %H:%M:%S")
	echo "/* ************************************************************************** */" > "$1"
	echo "/*                                                                            */" >> "$1"
	echo "/*                                                        :::      ::::::::   */" >> "$1"
	printf "%-56s" "/*   $2.$3" >> $1
	printf ":+:      :+:    :+:   */\n" >> $1
	echo "/*                                                    +:+ +:+         +:+     */" >> "$1"
	echo "/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */" >> "$1"
	echo "/*                                                +#+#+#+#+#+   +#+           */" >> "$1"
	echo "/*   Created: $current_date by lucasmar          #+#    #+#             */" >> "$1"
	echo "/*   Updated: $current_date by lucasmar         ###   ########.fr       */" >> "$1"
	echo "/*                                                                            */" >> "$1"
	echo "/* ************************************************************************** */" >> "$1"
	echo "" >> "$1"
}

function make_class(){
	make_head $1 $2 "cpp"
	cat >> "$1" <<EOL
#include "$2.hpp"

$2::$2(void){
	std::cout << " -> Default $2 constructor called!🟢" << std::endl;
}

$2::$2(const $2 &copy){
	std::cout << " -> Copy $2 constructor called!🟢" << std::endl;
	*this = copy;
}

$2 &$2::operator=(const $2 &other){
	std::cout << " -> $2 Operator '=' called!🟢" << std::endl;
	if (this != &other){
	}
	return *this;
}

$2::~$2(void) {
	std::cout << " -> Default $2 destructor called!🔴" << std::endl;
}
EOL
}

function make_hpp(){
name_define=$(echo "$2_hpp" | awk '{print toupper($0)}')
make_head $1 $2 "hpp"

cat >> "$1" <<EOL
#ifndef $name_define
#define $name_define

#include <iostream>

class $2{
	public:
		$2(void);
		$2(const $2 &copy);
		$2 &operator=(const $2 &other);
		~$2(void);
};

#endif
EOL
}

i=1
while ((i <= $#)); do
	arg="${!i}"
	original_arg="$arg"
	class_name="$arg.cpp"
	hpp_name="$arg.hpp"
	check_file_class $class_name $hpp_name
	make_class $class_name $original_arg
	make_hpp $hpp_name $original_arg
	((i++))
done
