/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 13:38:43 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		ft_reverse_rotate(int **pile, char **str, char *to_add)
{
	int		index;
	int		tmp;
	char	*strtmp;

	index = (*pile)[0];
	tmp = (*pile)[index];
	while (index > 1)
	{
		(*pile)[index] = (*pile)[index - 1];
		--index;
	}
	(*pile)[1] = tmp;
	strtmp = *str;
	if (!(*str = ft_strjoin(*str, to_add)))
		return (0);
	ft_strdel(&strtmp);
	return (1);
}

int		ft_double_reverse_rotate(int **pile_a, int **pile_b, char **str)
{
	ft_reverse_rotate(pile_a, str, "\0");
	ft_reverse_rotate(pile_b, str, "rrr\n");
	return (1);
}
