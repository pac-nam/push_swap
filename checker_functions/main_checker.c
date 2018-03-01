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

static int		ft_isnumber(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-')
		++i;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		++i;
	}
	return (1);
}

static int		ft_second_main(int **pile_a, int **pile_b)
{
	char	*line;
	int		i;

	i = 1;
	while (ft_gnl(0, &line) > 0)
	{
		if (!ft_what_to_do(pile_a, pile_b, line))
			return (ft_return(1, "Error\n"));
		ft_strdel(&line);
	}
	while (i < (*pile_a)[0])
	{
		if ((*pile_a)[i] > (*pile_a)[i + 1])
			return (ft_return(1, "KO\n"));
		++i;
	}
	if ((*pile_b)[0] != 0)
		return (ft_return(1, "KO\n"));
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
		return (ft_return(1, "Error\n"));
	while(++i < ac)
	{
		j = 0;
		if (!ft_isnumber(av[i]))
			return (ft_return(1, "Error\n"));
		pile_a[i] = ft_atoi(av[i]);
	}
	pile_a[0] = ac - 1;
	pile_b[0] = 0;
	ft_second_main(&pile_a, &pile_b);
	free(pile_a);
	free(pile_b);
	return (0);
}
