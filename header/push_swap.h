/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:44:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 17:22:11 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./both_programs.h"

typedef struct	s_ps_struct
{
	int			*a;
	int			*b;
	int			*ref;
	int			*opt;
	char		*str;
}				t_ps_struct;

int				ft_push_swap(t_ps_struct *stock);
int				ft_double_sort(t_ps_struct *stock);
int				ft_init_stock(t_ps_struct *stock, int ac, char **av);
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
