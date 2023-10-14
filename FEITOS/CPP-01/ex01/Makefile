# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 15:13:15 by lucasmar          #+#    #+#              #
#    Updated: 2023/09/20 22:16:04 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# inputs ********************************************************************* #
NAME=zombie

SRC_PATH=./
OBJ_PATH=./obj/



SRC_FILES=main.cpp\
		  Zombie.cpp\
		  zombieHorde.cpp

INCLUDE=Zombie.hpp

SRC=$(addprefix $(SRC_PATH),$(SRC_FILES))
OBJ=$(SRC:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)


# compilation **************************************************************** #
CC=clang++
FLAG=-Wall -Wextra -Werror -std=c++98

# clean ********************************************************************** #
RM=-rm -f
RM_DIR= rm -rf


# rules ********************************************************************** #
all:$(NAME)

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ) $(INCLUDE)
	@$(CC) $(FLAG) $(OBJ) -o $@


# message in terminal ************ #
		@echo "\033[1;32m"
		@echo "	Zombie created ✓"
		@echo "\033[0m"
		@echo "\033[0;33m	Welcome to Zombie by lucasmar 42sp \033[0m"
		@echo "\033[0;39m"
		@echo "	run ./zombie in the terminal !"
		@echo "\033[0m"

clean:
		@$(RM_DIR) $(OBJ_PATH)
		@echo "\033[0;31m       ▥ Zombie objets clean ✓ \033[0m"

fclean: clean
	@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ Zombie clean ✓ \033[0m"

re:	fclean all

.PHONY: all clean re fclean
