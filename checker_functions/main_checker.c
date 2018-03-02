/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/02 12:40:23 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int		ft_second_main(int **pile_a, int **pile_b)
{
	char	*line;
	int		i;
	int		verif;

	i = 1;
	while (ft_gnl(0, &line) > 0)
	{
		if (!(verif = ft_what_to_do(pile_a, pile_b, line)))
			return (ft_error("Error\n"));
		ft_strdel(&line);
		if (verif == 2)
			break;
	}
	while (i < (*pile_a)[0])
	{
		if ((*pile_a)[i] > (*pile_a)[i + 1])
			return (ft_success("KO\n"));
		++i;
	}
	if ((*pile_b)[0] != 0)
		return (ft_success("KO\n"));
	return(ft_success("OK\n"));
	return (1);
}

int				main(int ac, char **av)
{
	int		*pile_a;
	int		*pile_b;
	int		*options;

	if (!ft_options(&options, ac, av))
		return (0);
	ft_putstr("i m here\n");
	if (!ft_init_pile_a(&pile_a, ac, av, options))
		return (0);
	if (!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0] + 1))))
		return (0);
	pile_b[0] = 0;
	ft_second_main(&pile_a, &pile_b);
	free(pile_a);
	free(pile_b);
	free(options);
	return (0);
}
