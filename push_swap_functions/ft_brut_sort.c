/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brut_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/09 12:24:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

//	ft_printf("a[0] = %d | a[1] = %d | a[2] = %d | a[3] = %d\n", stock->ref[0], stock->ref[1], stock->ref[2], stock->ref[3]);

static char	*ft_recursive_b_sort(t_ps_struct *stock, char *str, int count)
{
	char	*tmp;

	tmp = str;
	if (!count)
		return (NULL);
}

int		ft_brut_sort(t_ps_struct *stock)
{
	int	count;
	char	*str;

	count = 1;
	if (!(str = (char*)malloc(1)))
		return (0);
	while (!(str = ft_recursive_b_sort(stock, str, count)))
	{
		ft_strdel(str);
		++count;
	}
	ft_strdel(&stock->str);
	stock->str = str;
	return (1);
}
