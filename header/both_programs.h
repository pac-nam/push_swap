/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_programs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 11:57:35 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/04 16:55:04 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOTH_PROGRAMS_H
# define BOTH_PROGRAMS_H

# include <fcntl.h>
# include <stdio.h>

# include "./both_programs.h"
# include "../libft/libft.h"

int			ft_isnumber(char *str);
int			ft_init_pile_a(int **pile_a, int ac, char **av, int *option);
int			ft_error(int mode, char *str);
int			ft_success(int mode, char *str);
int			ft_failure(int mode, char *str);

void		ft_print_piles(int *pile_a, int *pile_b, char *str);
void		ft_debug(int *a, int *b, char *str);

#endif