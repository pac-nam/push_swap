/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/02 12:46:50 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int	ft_wich_number(int **pile_a, char *line, int *index)
{
	int	i;

	i = 0;
	while (line[i])
	{
		while (ft_strchr(" \n\t\f\v\r", line[i]))
			++i;
		if (line[i] != '-' && !(ft_isdigit(line[i])))
			return (0);
		(*pile_a[i]) = ft_atoi(&line[i]);
		++(*index);
		++i;
	}
	return (1);
}

static int	ft_init_with_file(int **pile_a, char *file)
{
	int		fd;
	int		verif;
	char	*line;
	int		index;

	index = 1;
	if (!(fd = open(file, O_RDONLY)))
		return (ft_error("open error\n"));
	while ((verif = ft_gnl(fd, &line)) > 0)
	{
		if (!ft_wich_number(pile_a, line, &index))
			return (ft_error("wrong argument\n"));
		ft_strdel(&line);
	}
	if (verif == -1)
		return(ft_error("GNL error\n"));
	ft_strdel(&line);
	if ((close(fd) == -1))
		return (ft_error("close error\n"));
	(*pile_a)[0] = index - 1;
	return (1);
}


int			ft_init_pile_a(int **pile_a, int ac, char **av, int *option)
{
	int	index;

	index = 1;
	if (option[1])
	{
		if (option[1] >= ac)
			return (ft_error("missing file with flag -f\n"));
		return (ft_init_with_file(pile_a, av[option[1]]));
	}
	if (!(*pile_a = (int*)malloc(sizeof(int) * (ac - option[0] + 1))))
		return (0);
	(*pile_a)[0] = ac - option[0];
	while (option[0] < ac)
	{
		if (!ft_isnumber(av[option[0]]))
			return (ft_error("invalid argument\n"));
		(*pile_a[index]) = ft_atoi(av[option[0]]);
		++option[0];
	}
	return (1);
}
