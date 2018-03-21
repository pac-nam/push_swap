/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:42:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 13:51:22 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		ft_rotate(int **pile, char **str, char *to_add)
{
	int		index;
	int		tmp;
	char	*strtmp;

	index = 1;
	tmp = (*pile)[1];
	while (index < (*pile)[0])
	{
		(*pile)[index] = (*pile)[index + 1];
		++index;
	}
	(*pile)[index] = tmp;
	strtmp = *str;
	if (!(*str = ft_strjoin(*str, to_add)))
		exit(1);
	ft_strdel(&strtmp);
	printf("|||%d|%d|%d|%d|%d|%d|%d|%d|%d|||\n"
			, (*pile)[1], (*pile)[2], (*pile)[3], (*pile)[4], (*pile)[5]
			, (*pile)[6], (*pile)[7], (*pile)[8], (*pile)[9]);
	return (1);
}

int		ft_double_rotate(int **pile_a, int **pile_b, char **str)
{
	if (!ft_rotate(pile_a, str, "\0") || !ft_rotate(pile_b, str, "rr\n"))
		exit(1);
	return (1);
}
