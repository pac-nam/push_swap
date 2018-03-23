/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:22:40 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 17:04:36 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_replace_upper(int nb, int **tab, int len)
{
	int		memory_index;
	int		memory_nb;
	int		i;

	memory_index = -1;
	memory_nb = -2147483648;
	i = -1;
	while (++i <= len)
		if ((*tab)[i] > memory_nb)
		{
			memory_nb = (*tab)[i];
			memory_index = i;
		}
	if (nb < memory_nb)
		(*tab)[memory_index] = nb;
}

int		ft_median(int *pile_a, int *ref)
{
	int		i;
	int		len;
	int		*tab;

	len = pile_a[0] / 2;
	if (!(tab = (int*)malloc(sizeof(int) * len + 1)))
		return (0);
	i = -1;
	while (++i <= len)
		tab[i] = pile_a[i + 1];
	while (++i <= pile_a[0])
		ft_replace_upper(pile_a[i], &tab, len);
	i = -1;
	*ref = -2147483648;
	while (++i <= len)
	if (tab[i] > *ref)
			*ref = tab[i];
	free(tab);
	return (1);
}
