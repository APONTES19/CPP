#!/bin/bash

name="./fragTrap"
comando=0
function next(){
	echo
	echo "                                            Press to Next -------------->"
	read END
	echo
}

function check(){
	local esperado="$1"
	if [ "$retorno" -eq "$esperado" ]; then
		echo "	-> 🟢 Sucesso"
	else
		echo "	-> 🔴 Fail";
	fi
}




make re &
wait
clear
echo
echo
echo
echo "		███████╗██╗  ██╗ ██████╗ ██████╗ "
echo "		██╔════╝╚██╗██╔╝██╔═████╗╚════██╗"
echo "		█████╗   ╚███╔╝ ██║██╔██║ █████╔╝"
echo "		██╔══╝   ██╔██╗ ████╔╝██║██╔═══╝ "
echo "		███████╗██╔╝ ██╗╚██████╔╝███████╗"
echo "		╚══════╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝"
echo
echo

next
((comando++))#1
echo " ☢️	$comando - Testando frag-> ./fragTrap "
echo "<----------------------------------------------------------------------->"
echo
$name
retorno="$?"
echo
check 0
echo
next
make fclean
clear
