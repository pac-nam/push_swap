# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 14:30:08 by tbleuse           #+#    #+#              #
#    Updated: 2018/04/19 16:59:03 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

NAME2 = push_swap

NAME3 = make_random

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
			ft_double_sort.c		\
			ft_cool_sort.c			\
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

SRC_NAME3 =	main_make_random.c		\
			ft_make_random.c		\

SRC = $(addprefix checker_functions/, $(SRC_NAME))
SRC2 = $(addprefix push_swap_functions/, $(SRC_NAME2))
SRC3 = $(addprefix make_random_functions/, $(SRC_NAME3))

OBJ = $(SRC:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)

all : $(LIBFT) $(NAME) $(NAME2) $(NAME3)

$(LIBFT) :
	@make -C $(LIBFT)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT)/libft.a -o $(NAME)
	@echo "$(NAME) have been compiled"

$(NAME2) : $(OBJ2)
	@$(CC) $(FLAGS) $(OBJ2) $(LIBFT)/libft.a -o $(NAME2)
	@echo "$(NAME2) have been compiled"

$(NAME3) : $(OBJ3)
	@$(CC) $(FLAGS) $(OBJ3) $(LIBFT)/libft.a -o $(NAME3)
	@echo "$(NAME3) have been compiled"

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean :
	@make clean -C $(LIBFT)
	@/bin/rm -f $(OBJ) $(OBJ2) $(OBJ3)
	@echo "$(NAME) objects have been deleted"
	@echo "$(NAME2) objects have been deleted"
	@echo "$(NAME3) objects have been deleted"

fclean : clean
	@make fclean -C $(LIBFT)
	@/bin/rm -f $(NAME) $(NAME2) $(NAME3)
	@echo "$(NAME) have been deleted"
	@echo "$(NAME2) have been deleted"
	@echo "$(NAME3) have been deleted"

test_clean :
	@/bin/rm -f *_random_numbers
	@echo "test files have been cleaned"

re : fclean all

programs : all clean

.PHONY : all clean fclean re libft
