# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nova <nova@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/31 14:42:32 by nova              #+#    #+#              #
#    Updated: 2026/01/31 16:41:06 by nova             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = materia
SRC = AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp main.cpp
OBJ = AMateria.o Cure.o Ice.o ICharacter.o IMateriaSource.o main.o
OPTIONS = -o $(NAME)

all: $(OBJ)
	@$(CC) $(CFLAGS) $(SRC) $(OPTIONS)

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re