/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/21 12:43:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

//	ft_printf("a[0] %d | a[1] %d | a[2] %d | a[3] %d | a[4] %d\n", stock->a[0], stock->a[1], stock->a[2], stock->a[3], stock->a[4]);

static int	ft_int_tab_is_sort(int *a)
{
	int		i;

	i = 0;
	while (++i < a[0])
		if (a[i] > a[i + 1])
			return (0);
	return (1);
}

static int	ft_push_swap_end(int **a, int **opt)
{
	ft_memdel((void**)a);
	ft_memdel((void**)opt);
	return (0);
}

int			main(int ac, char **av)
{
	int				*opt;
	int				*a;

	if (ac < 3)
		return (0);
	if (!ft_options(&opt, ac, av) ||
			!ft_init_pile_a(&a, ac, av, opt))
		return (0);
	if (ft_int_tab_is_sort(a))
		return (ft_push_swap_end(&a, &opt));
	if (!ft_push_swap(a))
		return (0);
	return (ft_push_swap_end(&a, &opt));
}
