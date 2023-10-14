#!/bin/bash

if [ $# -eq 0 ]; then
	echo "Erro -> Use: $0 <nome_da_classe> + <nome_atributo>..."
	exit 1
fi

function make_get(){
new_s2=$(echo "$2" | awk '{print toupper(substr($0,1,1)) tolower(substr($0,2));}')
	cat >> "$3" <<EOL

"std::string" $1::get$new_s2(void) const{
	return(this->_$2);
}
EOL
}

function make_set(){
new_s2=$(echo "$2" | awk '{print toupper(substr($0,1,1)) tolower(substr($0,2));}')
cat >> "$3" <<EOL

void $1::set$new_s2("std::string" type){
	this->_$2 = $2;
}
EOL
}

i=2
while ((i <= $#)); do
	arg="${!i}"
	original_arg=$arg;
	class_name="$1.cpp"
	make_get $1 $original_arg $class_name
	make_set $1 $original_arg $class_name
	((i++))
done
