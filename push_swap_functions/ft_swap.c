/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:44 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/07 12:31:35 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int			ft_ps_swap(int **pile, char **instructions, char *str)
{
	int		tmp;
	char	*strtmp;

	if ((*pile)[0] > 1)
	{
		tmp = (*pile)[1];
		(*pile)[1] = (*pile)[2];
		(*pile)[2] = tmp;
	}
	strtmp = *instructions;
	if (!(*instructions = ft_strjoin(*instructions, str)))
		return (0);
	ft_strdel(&strtmp);
	return (1);
}

int			ft_double_swap(int **pile_a, int **pile_b, char **instructions)
{
	ft_ps_swap(pile_a, instructions, "\0");
	ft_ps_swap(pile_b, instructions, "ss\n");
	return (1);
}
