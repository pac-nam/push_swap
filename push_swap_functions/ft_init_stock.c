/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stock.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/08 14:15:33 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_stop_here(t_ps_struct *stock)
{
	free(stock->a);
	free(stock->opt);
	return (0);
}

int			ft_init_stock(t_ps_struct *stock, int ac, char **av)
{
	int		i;

	i = -1;
	if (!ft_options(&(stock->opt), ac, av) ||
			!ft_init_pile_a(&(stock->a), ac, av, stock->opt))
		return (0);
	if (stock->a[0] == 0)
		return (ft_stop_here(stock));
	if (!(stock->b = (int*)malloc(sizeof(int) * (stock->a[0] + 1))) ||
			!(stock->ref = (int*)malloc(sizeof(int) * (stock->a[0] + 1))) ||
			!(stock->str = (char*)malloc(1)))
		return (0);
	stock->b[0] = 0;
	while (++i <= stock->a[0])
		stock->ref[i] = stock->a[i];
	stock->ref = ft_sort_int_tab(stock->ref, stock->ref[0] + 1);
	stock->str[0] = '\0';
	return (1);
}
