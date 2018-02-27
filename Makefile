# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 14:30:08 by tbleuse           #+#    #+#              #
#    Updated: 2018/02/27 18:19:19 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

NAME2 = push_swap

LIBFT = libft

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC_NAME = 	main_checker.c					\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\

SRC_NAME2 = main_push_swap.c				\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			a								\
			

SRC = $(addprefix checker_functions/, $(SRC_NAME))
SRC2 = $(addprefix push_swap_functions/, $(SRC_NAME2))

OBJ = $(SRC:.c=.o)
OBJ2 = $(SRC2:.c=.o)

all : $(LIBFT) $(NAME) $(NAME2)

$(LIBFT) :
	@make -C $(LIBFT)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT)/libft.a -c $(NAME)
	@echo "$(NAME) have been compiled"

$(NAME2) : $(OBJ2)
	@$(CC) $(FLAGS) $(OBJ2) $(LIBFT)/libft.a -c $(NAME2)
	@echo "$(NAME2) have been compiled"

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean :
	@make clean -C $(LIBFT)
	@/bin/rm -f $(OBJ) $(OBJ2)
	@echo "$(NAME) objects have been deleted"
	@echo "$(NAME2) objects have been deleted"

fclean :
	@make fclean -C $(LIBFT)
	@/bin/rm -f $(NAME) $(NAME2)
	@echo "$(NAME) have been deleted"
	@echo "$(NAME2) have been deleted"

re : fclean all

.PHONY : all clean fclean re
