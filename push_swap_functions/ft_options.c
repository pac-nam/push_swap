/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/28 17:57:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

/*
**-f prends les informations depuis un fichier
**-v affiche l'etat des piles a chaque coup
**-b brute force
*/

static int	ft_valid_option(char **av, int index, int **options)
{
	if (!ft_strcmp(av[i - 1], "-f"))
		return (1);
	if (!ft_strcmp(av[i], "-f"))
		(*options)[1] = i + 1;
	else if (!ft_strcmp(av[i], "-v"))
		(*options)[2] = 1;
	else if (!ft_strcmp(av[i], "-b"))
		(*options)[3] = 1;
	else
		return (0);
	return (1);
}

int		ft_options(int **options, int ac, char **av)
{
	int	i;

	i = 1
	if (!((*options) = (*int)malloc(sizeof(int) * 4)))
		return (0);
	while (!ft_isnumber(av[i]) && i < ac)
		++i;
	(*options)[0] = i + 1;
	(*options)[1] = 0;
	(*options)[2] = 0;
	(*options)[3] = 0;
	while (i > 0)
	{
		if (!ft_valid_option(av, i, options))
		{
			write(1, "invalid argument\n", 17);
			return (0);
		}
		++i;
	}
	return (1);
}
