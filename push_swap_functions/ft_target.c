/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 16:03:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/08 18:20:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_more_close_of(int *tab, int min, int max)
{
	int		tmp;
	int		min_index;
	int		max_index;

	if (!(min_index = ft_index_of_nb(tab, min)))
		return (-1);
	if (!(max_index = ft_index_of_nb(tab, max)))
		return (1);
	tmp = tab[0] - min_index;
	if (tmp < min_index)
		min_index = tmp;
	tmp = tab[0] - max_index;
	if (tmp < max_index)
		max_index = tmp;
	return (max_index - min_index);
}

int			ft_target(int *tab, int ref)
{
	int		max;
	int		min;
	int		index;

	min = -2147483648;
	max = 2147483647;
	index = 1;
	while (index <= tab[0])
	{
		if (tab[index] < ref && tab[index] >= min)
			min = tab[index];
		else if (tab[index] > ref && tab[index] <= max)
			max = tab[index];
		++index;
	}
	if (ft_more_close_of(tab, min, max) > 0)
		return (min);
	else
		return (max);
}
