/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:44:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 14:17:16 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>

# include "../libft/header/libft.h"

int			ft_isnumber(char *str);
int			ft_is_valid_number(char *str, int *option);
int			ft_init_pile_a(int **pile_a, int ac, char **av, int *option);
int			ft_error(int mode, char *str);
int			ft_success(int mode, char *str);
int			ft_failure(int mode, char *str);

void		ft_print_piles(int *pile_a, int *pile_b, char *str);
void		ft_debug(int *a, int *b, char *str);

int			ft_options(int **options, int ac, char **av);
int			ft_verif_pile(int *pile, int *opt);
int			ft_what_to_do(int **pile_a, int **pile_b, char *str);

int			ft_checker_swap(int **pile);
int			ft_double_swap(int **a, int **b);
int			ft_push(int **put_on, int **pick_one);
int			ft_rotate(int **pile);
int			ft_double_rotate(int **a, int **b);
int			ft_reverse_rotate(int **pile);
int			ft_double_reverse_rotate(int **a, int **b);

#endif
