/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/09 13:17:09 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int		ft_second_main(int **pile_a, int **pile_b, int *options, int *c)
{
	char	*line;
	int		i;
	int		verif;

	i = 0;
	while (ft_gnl(0, &line) > 0)
	{
		if (!(verif = ft_what_to_do(pile_a, pile_b, line)))
			return (ft_error(options[2], "invalid instruction\n"));
		if (options[3])
			ft_print_piles(*pile_a, *pile_b, line);
		ft_strdel(&line);
		if (verif == 2)
			break ;
		++(*c);
	}
	while (++i < (*pile_a)[0])
		if ((*pile_a)[i] > (*pile_a)[i + 1])
			return (ft_failure(options[2], "pile_a is not well sorted\n"));
	if ((*pile_b)[0] != 0)
		return (ft_failure(options[2], "pile_b is not empty\n"));
	return (ft_success(options[2], "OK, pile of "));
}

int				main(int ac, char **av)
{
	int		*pile_a;
	int		*pile_b;
	int		*options;
	int		count;

	if (!ft_options(&options, ac, av))
		return (0);
	if (!ft_init_pile_a(&pile_a, ac, av, options))
		return (0);
	if (!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0] + 1))))
		return (0);
	pile_b[0] = 0;
	if (options[3])
		ft_print_piles(pile_a, pile_b, "start");
	if (ft_second_main(&pile_a, &pile_b, options, &count) && options[2])
		ft_printf("%d int(s) sorted with %d instruction(s)", pile_a[0], count);
	free(pile_a);
	free(pile_b);
	free(options);
	return (0);
}
