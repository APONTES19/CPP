#!/bin/bash

comando=0
function next(){
	echo
	echo "                                            Press to Next -------------->"
	read END
	echo
}

make re &
wait
clear
echo
echo
echo
echo "		 ██████╗██████╗ ██████╗  ██████╗ ██████╗ "
echo "		██╔════╝██╔══██╗██╔══██╗██╔═████╗╚════██╗"
echo "		██║     ██████╔╝██████╔╝██║██╔██║ █████╔╝"
echo "		██║     ██╔═══╝ ██╔═══╝ ████╔╝██║ ██╔═══╝ "
echo "		╚██████╗██║     ██║     ╚██████╔╝ ███████╗"
echo "		 ╚═════╝╚═╝     ╚═╝      ╚═════╝   ╚══════╝"
echo
echo

next
((comando++))#1
echo " ☢️	$comando - Rodando o EX00"
echo "<----------------------------------------------------------------------->"
echo
cd ./ex00
bash ./test00.sh

next
((comando++))#2
echo " ☢️	$comando - Rodando o EX01"
echo "<----------------------------------------------------------------------->"
echo
cd ../ex01
bash ./test01.sh

next
((comando++))#3
echo " ☢️	$comando - Rodando o EX02"
echo "<----------------------------------------------------------------------->"
echo
cd ../ex02
bash ./test02.sh

echo
echo "	████████╗██╗  ██╗███████╗    ███████╗███╗   ██╗██████╗ "
echo "	╚══██╔══╝██║  ██║██╔════╝    ██╔════╝████╗  ██║██╔══██╗"
echo "	   ██║   ███████║█████╗      █████╗  ██╔██╗ ██║██║  ██║"
echo "	   ██║   ██╔══██║██╔══╝      ██╔══╝  ██║╚██╗██║██║  ██║"
echo "	   ██║   ██║  ██║███████╗    ███████╗██║ ╚████║██████╔╝"
echo
echo
next
clear