/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/05 14:58:11 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	ft_stop:wq

int		main(int ac, char **av)
{
	int		*pile_a;
	int		*pile_b;
	int		*options;
	char	*instructions;

	if (!ft_options(&options, ac, av))
		return (0);
	if (!ft_init_pile_a(&pile_a, ac, av, options))
		return (0);
	if (pile_a[0] == 0)
		return (ft_stop_here(&pile_a, &options));
	if (!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0]) + 1)))
		return (0);
	pile_b[0] = 0;
	if (!(instructions = (char*)malloc(1)))
		return (0);
	instructions[0] = '\0';
	if (!ft_do_the_work(&pile_a, &pile_b, options, &instructions))
		return (0);
	ft_memdel(&pile_a);
	ft_memdel(&pile_b);
	ft_memdel(&options);
	ft_strdel(&instructions)
	return (0);
}
