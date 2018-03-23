/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:44:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 17:32:37 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>

# include "../libft/header/libft.h"

int				ft_isnumber(char *str);
int				ft_is_valid_number(char *str, int *option);
int				ft_init_pile_a(int **pile_a, int ac, char **av, int *option);
int				ft_error(int mode, char *str);

int				ft_median(int *pile_a, int *ref);
int				*ft_pile_cpy(int *pile);
int				ft_push_swap(int *pile_a, int *opt);
char			*ft_double_sort(int *pile_a);
int				ft_options(int **options, int ac, char **av);
int				ft_index_of_nb(int *tab, int nb);
int				ft_target(int *tab, int ref);
int				ft_tab_is_sort(int *tab);

int				ft_ps_swap(int **pile, char **instructions, char *str);
int				ft_double_swap(int **pile_a, int **pile_b, char **instructions);
int				ft_push(int **put, int **pick, char **instruc, char *str);
int				ft_rotate(int **pile, char **instructions, char *str);
int				ft_double_rotate(int **pile_a, int **pile_b, char **instruc);
int				ft_reverse_rotate(int **pile, char **instruc, char *str);
int				ft_double_reverse_rotate(int **a, int **b, char **instruct);

#endif
