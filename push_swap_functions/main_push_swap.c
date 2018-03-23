/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 17:24:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_int_tab_is_sort(t_ps_struct *stock)
{
	int		i;

	i = 1;
	while (i < stock->a[0])
	{
		if (stock->a[i] > stock->a[i + 1])
			return (0);
		++i;
	}
	free(stock->str);
	if (!(stock->str = (char*)malloc(2)))
		return (0);
	stock->str[0] = '\n';
	stock->str[1] = '\0';
	return (1);
}

static int	ft_push_swap_end(t_ps_struct *stock)
{
	ft_putstr(stock->str);
	free(stock->a);
	free(stock->b);
	free(stock->opt);
	free(stock->str);
	return (0);
}

int			main(int ac, char **av)
{
	t_ps_struct		stock;

	if (ac < 3)
		return (0);
	if (!ft_init_stock(&stock, ac, av))
		return (0);
	if (ft_int_tab_is_sort(&stock))
		return (ft_push_swap_end(&stock));
	if (!ft_push_swap(&stock))
		return (0);
	return (ft_push_swap_end(&stock));
}
