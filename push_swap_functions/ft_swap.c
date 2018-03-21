/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:44 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 13:35:18 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int			ft_ps_swap(int **pile, char **str, char *to_add)
{
	int		tmp;
	char	*strtmp;

	if ((*pile)[0] > 1)
	{
		tmp = (*pile)[1];
		(*pile)[1] = (*pile)[2];
		(*pile)[2] = tmp;
	}
	strtmp = *str;
	if (!(*str = ft_strjoin(*str, to_add)))
		return (0);
	ft_strdel(&strtmp);
	return (1);
}

int			ft_double_swap(int **pile_a, int **pile_b, char **str)
{
	if (!ft_ps_swap(pile_a, str, "\0") || !ft_ps_swap(pile_b, str, "ss\n"))
		return (0);
	return (1);
}
