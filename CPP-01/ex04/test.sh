#!/bin/bash

sed="./sed"
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


make
clear
echo
echo
echo
echo "		███████╗██╗  ██╗ ██████╗ ██╗  ██╗"
echo "		██╔════╝╚██╗██╔╝██╔═████╗██║  ██║"
echo "		█████╗   ╚███╔╝ ██║██╔██║███████║"
echo "		██╔══╝   ██╔██╗ ████╔╝██║╚════██║"
echo "		███████╗██╔╝ ██╗╚██████╔╝     ██║"
echo "		╚══════╝╚═╝  ╚═╝ ╚═════╝      ╚═╝"

next
((comando++))#1
echo " ☢️	$comando - Testando Erro Número de Argumentos menor -> ./sed file oi "
echo "<----------------------------------------------------------------------->"
echo
$sed "file" "oi"
retorno="$?"
echo
check 1
echo

next
echo
((comando++))#2
echo " ☢️	$comando - Testando arquivo inexistente -> ./sed file oi joão "
echo "<----------------------------------------------------------------------->"
echo
$sed "file" "oi" "joão"
retorno="$?"
echo
check 1
echo

next
echo
((comando++))#3
echo " ☢️	$comando - Testando arquivo vazio -> ./sed temp.txt oi joão "
echo "<----------------------------------------------------------------------->"
echo
touch temp.txt
$sed "temp.txt" "oi" "joão"
retorno="$?"
echo
check 1
rm temp.txt
echo

next
echo
((comando++))#4
echo " ☢️	$comando - Testando arquivo truncado -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\noi\njoão" > temp.txt
echo "                                           🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
chmod 0 temp.txt
echo "                                          🟡 Verifique acesso modificado!"
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
check 1
rm -rf temp.txt
echo


next
echo
((comando++))#5
echo " ☢️	$comando - Testando normal palavra -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\noi\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#6
echo " ☢️	$comando - Testando normal fim solto -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\nComo pode isso! oi\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#7
echo " ☢️	$comando - Testando normal meio solto -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\nComo oi isso!\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#8
echo " ☢️	$comando - Testando inicio junto -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\noiComo Vai?\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#9
echo " ☢️	$comando - Testando meio junto -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\nVaioiComo Vai?\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#10
echo " ☢️	$comando - Testando normal fim junto -> ./sed temp.txt oi Tchau "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apontes\nComo Vaioi?\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "oi" "Tchau"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#11
echo " ☢️	$comando - Testando letra repitida -> ./sed temp.txt a * "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apaaontes\nComo aai isso!\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "a" "*"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#12
echo " ☢️	$comando - Testando letra 3x repitida -> ./sed temp.txt a aaa "
echo "<----------------------------------------------------------------------->"
echo
echo -e "aa lucas Martins\nAtena Apaaontes\nComo aai isso!\njoãoaaa" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
$sed "temp.txt" "a" "aaa"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo

next
echo
((comando++))#13
echo " ☢️	$comando - Testando vazamentos -> ./sed temp.txt a aaa "
echo "<----------------------------------------------------------------------->"
echo
echo -e "lucas Martins\nAtena Apaaontes\nComo aai isso!\njoão" > temp.txt
echo "                                          🟡 Verifique o Arquivo Criado!"
cat temp.txt
next
valgrind $sed "temp.txt" "a" "aaa"
retorno="$?"
echo
echo "                                        🟡 Verifique o Arquivo Alterado!"
cat temp.txt.replace
next
check 0
rm -rf temp.txt
rm -rf temp.txt.replace
echo



next
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
