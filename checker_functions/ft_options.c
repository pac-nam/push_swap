/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/02 12:48:31 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

/*
**-f prends les informations depuis un fichier
**-v affiche l'etat des piles a chaque coup
*/


#include <stdio.h>
static int	ft_valid_option(char **av, int index, int **options)
{
	printf("%s\n\n", av[index]);
	if (!ft_strcmp(av[index - 1], "-f"))
		return (1);
	if (!ft_strcmp(av[index], "-f"))
		(*options)[1] = index + 1;
	else if (!ft_strcmp(av[index], "-v"))
		(*options)[2] = 1;
	else
		return (0);
	return (1);
}

int		ft_options(int **options, int ac, char **av)
{
	int	i;

	i = 1;
	if (!((*options) = (int*)malloc(sizeof(int) * 3)))
		return (0);
	while (!ft_isnumber(av[i]) && i < ac)
		++i;
	(*options)[0] = i;
	(*options)[1] = 0;
	(*options)[2] = 0;
	--i;
	while (i > 0)
	{
		if (!ft_valid_option(av, i, options))
			return (ft_error("invalid argument\n"));
		++i;
	}
	return (1);
}
