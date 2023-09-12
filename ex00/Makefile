# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 11:04:14 by lucasmar          #+#    #+#              #
#    Updated: 2023/09/11 22:03:28 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# inputs ********************************************************************* #
NAME=megaphone

SRC_PATH=./
OBJ_PATH=./obj/

SRC_FILES=megaphone.cpp


SRC=$(addprefix $(SRC_PATH),$(SRC_FILES))
OBJ=$(SRC:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)


# compilation **************************************************************** #
CC=c++
FLAG=-Wall -Wextra -Werror -std=c++98

# clean ********************************************************************** #
RM=-rm -f
RM_DIR= rm -rf

# rules ********************************************************************** #
all:$(NAME)

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(FLAG) $(OBJ) -o $@


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

clean:
		@$(RM_DIR) $(OBJ_PATH)
		@echo "\033[0;31m       ▥ megaphone objets clean ✓ \033[0m"

fclean: clean
	@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ megaphone clean ✓ \033[0m"
re:	fclean all

.PHONY: all clean re fclean
