/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/12 16:55:09 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_second_double_sort(t_ps_struct *stock, int ref)
{
	int		target;
	int		target_index;

	if (!stock->a[0])
		return (1);
	target = ft_target(stock->a, ref);
	target_index = ft_index_of_nb(stock->a, target);
	if (target_index > stock->a[0] / 2 + 1)
		while (stock->a[1] != target)
			ft_reverse_rotate(&stock->a, &stock->str, "rra\n");
	else
		while (stock->a[1] != target)
			ft_rotate(&stock->a, &stock->str, "ra\n");
	ft_push(&stock->b, &stock->a, &stock->str, "pb\n");
	if (stock->b[1] < stock->b[2])
		ft_rotate(&stock->b, &stock->str, "rb\n");
	return (ft_second_double_sort(stock, ref));
}

int			ft_double_sort(t_ps_struct *stock)
{
	int		ref;
	int		ref_index;

	ref = stock->ref[stock->ref[0] / 2 + 1];
	ref_index = ft_index_of_nb(stock->a, ref);
	if (ref_index < stock->a[0] / 2 + 1)
		while (stock->a[1] != ref)
			ft_rotate(&stock->a, &stock->str, "ra\n");
	else
		while (stock->a[1] != ref)
			ft_reverse_rotate(&stock->a, &stock->str, "rra\n");
	ft_push(&stock->b, &stock->a, &stock->str, "pb\n");
	if (!ft_second_double_sort(stock, ref))
		return (0);
	while (stock->b[0])
		ft_push(&stock->a, &stock->b, &stock->str, "pa\n");
	return (1);
}
