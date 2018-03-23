# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 14:30:08 by tbleuse           #+#    #+#              #
#    Updated: 2018/03/23 17:55:11 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

NAME2 = push_swap

LIBFT = libft

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC_NAME =	main_checker.c			\
			ft_verif_pile.c			\
			ft_what_to_do.c			\
			ft_options.c			\
			ft_swap.c				\
			ft_push.c				\
			ft_rotate.c				\
			ft_reverse_rotate.c		\
			ft_init_pile.c			\
			ft_message.c			\
			ft_print_piles.c		\
			ft_is_valid_number.c	\

SRC_NAME2 =	main_push_swap.c		\
			ft_push_swap.c			\
			ft_new_double_sort.c	\
			ft_options.c			\
			ft_pile_cpy.c			\
			ft_index_of_nb.c		\
			ft_target.c				\
			ft_tab_is_sort.c		\
			ft_swap.c				\
			ft_push.c				\
			ft_rotate.c				\
			ft_reverse_rotate.c		\
			ft_is_valid_number.c	\
			ft_init_pile.c			\
			ft_median.c				\
			ft_error.c				\

SRC = $(addprefix checker_functions/, $(SRC_NAME))
SRC2 = $(addprefix push_swap_functions/, $(SRC_NAME2))

OBJ = $(SRC:.c=.o)
OBJ2 = $(SRC2:.c=.o)

all : $(LIBFT) $(NAME) $(NAME2)

$(LIBFT) :
	@make -C $(LIBFT)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT)/libft.a -o $(NAME)
	@echo "$(NAME) have been compiled"

$(NAME2) : $(OBJ2)
	@$(CC) $(FLAGS) $(OBJ2) $(LIBFT)/libft.a -o $(NAME2)
	@echo "$(NAME2) have been compiled"

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean :
	@make clean -C $(LIBFT)
	@/bin/rm -f $(OBJ) $(OBJ2)
	@echo "$(NAME) objects have been deleted"
	@echo "$(NAME2) objects have been deleted"

fclean : clean
	@make fclean -C $(LIBFT)
	@/bin/rm -f $(NAME) $(NAME2)
	@echo "$(NAME) have been deleted"
	@echo "$(NAME2) have been deleted"

re : fclean all

programs : all clean

.PHONY : all clean fclean re libft
