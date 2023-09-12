# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 11:04:14 by lucasmar          #+#    #+#              #
#    Updated: 2023/08/20 13:54:01 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# inputs ********************************************************************* #
NAME=megaphone

SRC_PATH=./

SRC_FILES=megaphone.cpp\
		  teste00.cpp

SRC=$(addprefix $(SRC_PATH),$(SRC_FILES))

# compilation **************************************************************** #
CC=c++
FLAG=-Wall -Wextra -Werror -std=c++98

# clean ********************************************************************** #
RM=-rm -f

# rules ********************************************************************** #
all:$(NAME)

$(NAME):
	@$(CC) $(FLAG) $(SRC) -o $@


# message in terminal ************ #
		@echo "\033[1;32m"
		@echo "	megaphone created ✓"
		@echo "\033[0m"
		@echo "\033[0;33m	Welcome to megaphone by lucasmar 42sp \033[0m"
		@echo "\033[0;39m"
		@echo "	run ./megaphone + "Your frase" in the terminal !"
		@echo "	ex: ./megaphone test "Your Frase" "
		@echo "	resp.: TEST YOUR FRASE "
		@echo "\033[0m"

#execução
#	@./megaphone

clean:
		@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ megaphone clean ✓ \033[0m"

re:	clean all

.PHONY: all clean re
