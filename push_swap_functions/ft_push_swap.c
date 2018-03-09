/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/09 12:24:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

//	ft_printf("a[0] = %d | a[1] = %d | a[2] = %d | a[3] = %d\n", stock->ref[0], stock->ref[1], stock->ref[2], stock->ref[3]);

static int	ft_push_swap_b(t_ps_struct *stock)
{
	stock->opt[3] = 1;
	return (0);
}

int			ft_push_swap(t_ps_struct *stock)
{
	if (stock->opt[3] == 1)
		return (ft_push_swap_b(stock));
	return (ft_double_sort(stock));
}
