/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/08 18:29:30 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_push_swap_b(t_ps_struct *stock)
{
	stock->opt[3] = 1;
	return (0);
}

static int	ft_second_push_swap(t_ps_struct *stock, int ref)
{
	int		target;
	int		target_index;

	target = ft_target(stock->a, ref);
	target_index = ft_index_of_nb(stock->a, target);
	if (!stock->a[0])
		return (1);
	if (target_index > stock->a[0] / 2)
		while (stock->a[1] != target)
			ft_reverse_rotate(&stock->a, &stock->str, "rra\n");
	else
		while (stock->a[1] != target)
			ft_rotate(&stock->a, &stock->str, "ra\n");
	ft_push(&stock->b, &stock->a, &stock->str, "pb\n");
	if (stock->b[1] < stock->b[2])
		ft_rotate(&stock->b, &stock->str, "rb\n");
	return (ft_second_push_swap(stock, ref));
}

int			ft_push_swap(t_ps_struct *stock)
{
	int		ref;
	int		ref_index;

//	ft_printf("a[0] = %d | a[1] = %d | a[2] = %d | a[3] = %d\n", stock->ref[0], stock->ref[1], stock->ref[2], stock->ref[3]);
	if (stock->opt[3] == 1)
		return (ft_push_swap_b(stock));
	ref = stock->ref[stock->ref[0] / 2 + 1];
	ref_index = ft_index_of_nb(stock->a, ref);
	if (ref_index < stock->a[0] / 2 + 1)
		while (stock->a[1] != ref)
			ft_rotate(&stock->a, &stock->str, "ra\n");
	else
		while (stock->a[1] != ref)
			ft_reverse_rotate(&stock->a, &stock->str, "rra\n");
	ft_push(&stock->b, &stock->a, &stock->str, "pb\n");
	if (!ft_second_push_swap(stock, ref))
		return (0);
	while (stock->b[0])
		ft_push(&stock->a, &stock->b, &stock->str, "pa\n");
	return (1);
}
