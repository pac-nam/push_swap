/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/28 17:57:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"


#include <stdio.h>
static void		ft_debug(int *a, int *b, char *str)
{
	int		i;

	i = 1;
	printf("%s pile_a[0] = %d pile_b[0] = %d\npile_a\n", str, a[0], b[0]);
	while (i - 1 < a[0])
	{
		ft_putstr(ft_itoa(a[i++]));
		ft_putchar(' ');
	}
	ft_putstr("\npile_b ");
	i = 1;
	while (i - 1 < b[0])
	{
		ft_putstr(ft_itoa(b[i++]));
		ft_putchar(' ');
	}
	ft_putchar('\n');
}

static int		ft_isnumber(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		++i;
	}
	return (1);
}

static int		ft_second_main(int ac, int **pile_a, int **pile_b)
{
	char	*line;
	int		i;

	i = 1;
	while (ft_gnl(0, &line) > 0)
	{
		if (!ft_what_to_do(pile_a, pile_b, line))
			return (ft_error());
ft_debug(*pile_a, *pile_b, line);
		ft_strdel(&line);
	}
	while (i < ac - 1)
	{
		if ((*pile_a)[i] > (*pile_a)[i + 1])
			return (ft_ko());
		++i;
	}
	if (pile_b[0] != 0)
		return (ft_ko());
	write(1, "OK\n", 3);
	return (1);
}

int				main(int ac, char **av)
{
	int		*pile_a;
	int		*pile_b;
	int		i;
	int		j;

	i = 0;
	if (!(pile_a = (int*)malloc(sizeof(int) * (ac))) ||
			!(pile_b = (int*)malloc(sizeof(int) * (ac))))
		return (ft_error());
	while(++i < ac)
	{
		j = 0;
		if (!ft_isnumber(av[i]))
			return (ft_error());
		pile_a[i] = ft_atoi(av[i]);
	}
	pile_a[0] = ac - 1;
	pile_b[0] = 0;
	ft_second_main(ac, &pile_a, &pile_b);
	free(pile_a);
	free(pile_b);
	return (0);
}
