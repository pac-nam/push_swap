/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:44:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/03 14:36:17 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>
# include <stdio.h>

# include "../libft/libft.h"

int			ft_options(int **options, int ac, char **av);
int			ft_what_to_do(int **pile_a, int **pile_b, char *str);
int			ft_isnumber(char *str);
int			ft_init_pile_a(int **pile_a, int ac, char **av, int *option);

int			ft_swap(int **pile);
int			ft_double_swap(int **a, int **b);
int			ft_push(int **put_on,int **pick_one);
int			ft_rotate(int **pile);
int			ft_double_rotate(int **a, int **b);
int			ft_reverse_rotate(int **pile);
int			ft_double_reverse_rotate(int **a, int **b);

void			ft_debug(int *a, int *b, char *str);

# endif
