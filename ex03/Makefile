# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nova <nova@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/31 14:42:32 by nova              #+#    #+#              #
#    Updated: 2026/01/31 18:55:22 by nova             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
NAME = materia
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp main.cpp MateriaSource.cpp
OBJ = AMateria.o Character.o Cure.o Ice.o ICharacter.o IMateriaSource.o main.o MateriaSource.o
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