/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/07 12:44:02 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	ft_push_swap_end(t_ps_struct *stock)
{
	ft_putstr(stock->str);
	free(stock->a);
	free(stock->b);
	free(stock->opt);
	free(stock->str);
}

int			main(int ac, char **av)
{
	t_ps_struct		stock;

	if (!ft_init_stock(&stock, ac, av))
		return (0);
	if (!ft_push_swap(&stock))
		return (0);
	ft_push_swap_end(&stock);
	return (0);
}
