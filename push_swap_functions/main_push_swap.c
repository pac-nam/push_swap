/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 17:54:15 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_int_tab_is_sort(int *pile)
{
	int		i;

	i = 1;
	while (i < pile[0])
	{
		if (pile[i] > pile[i + 1])
			return (0);
		++i;
	}
	return (1);
}

int			main(int ac, char **av)
{
	int			*pile_a;
	int			*option;

	if (ac < 3 || !ft_options(&option, ac, av) ||
			!ft_init_pile_a(&pile_a, ac, av, option))
		return (0);
	if (!ft_int_tab_is_sort(pile_a))
		ft_push_swap(pile_a, option);
	free(pile_a);
	free(option);
	return (0);
}
