# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 11:04:14 by lucasmar          #+#    #+#              #
#    Updated: 2023/09/06 15:20:18 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# inputs ********************************************************************* #
NAME=phoneBook

SRC_PATH=./

SRC_FILES=Main.cpp\
		  Contact.cpp\
		  Contact.hpp\
		  PhoneBook.cpp\
		  PhoneBook.hpp\
		  View.hpp\
		  View.cpp


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
		@echo "	PhoneBook created ✓"
		@echo "\033[0m"
		@echo "\033[0;33m	Welcome to phonebook by lucasmar 42sp \033[0m"
		@echo "\033[0;39m"
		@echo "	run ./phonebook in the terminal !"
		@echo "\033[0m"

clean:
		@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ phonebook clean ✓ \033[0m"

re:	clean all

.PHONY: all clean re
