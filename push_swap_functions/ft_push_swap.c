/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/04/19 16:58:57 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int			ft_push_swap(int *pile_a, int *opt)
{
	char	*str;

	opt[0] = 0;
	if (pile_a[0] == 2)
		str = "sa\n";
/*	else if (pile_a[0] < 50)
		str = ft_quick_sort(pile_a);
	else if (pile_a[0] < 300)
		str = ft_normal_sort(pile_a);
*/	else if (pile_a[0] > 2)
		str = ft_cool_sort(pile_a);
	else
		str = ft_double_sort(pile_a);
	ft_putstr(str);
	ft_strdel(&str);
	return (1);
}
