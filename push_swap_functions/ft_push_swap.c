/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 17:59:25 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int			ft_push_swap(int *pile_a, int *opt)
{
	char	*str;

	opt[0] = 0;
	str = "Error\n";
/*	if (pile_a[0] < 50)
		str = ft_quick_sort(pile_a);
	else if (pile_a[0] < 300)
		str = ft_normal_sort(pile_a);
	else
*/		str = ft_double_sort(pile_a);
	ft_putstr(str);
	ft_strdel(&str);
	return (1);
}
