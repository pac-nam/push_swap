/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:44:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/05 14:58:15 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./both_programs.h"
# include "../libft/libft.h"

int		ft_options(int **options, int ac, char **av);

int		ft_swap(int **pile, char **instructions, char *str);
int		ft_double_swap(int **pile_a, int **pile_b, char **instructions);
int		ft_push(int **put_on, int **pick_one, char **instructions, char *str);
int		ft_rotate(int **pile, char **instructions, char *str);
int		ft_double_rotate(int **pile_a, int **pile_b, char **instructions);
int		ft_reverse_rotate(int **pile, char **instructions, char *str);
int		ft_double_reverse_rotate(int **pile_a, int **pile_b, char **instruc);

#endif
