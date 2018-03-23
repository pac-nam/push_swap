/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 13:44:17 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

/*
**la case 0 correspond a l'index de l'argument suivant les flags
**-f prends les informations depuis un fichier
**-e affiche les erreurs de facon plus precise
**-b brute force
*/

static int	ft_valid_option(char **av, int index, int **options)
{
	if (!ft_strcmp(av[index - 1], "-f"))
		return (1);
	if (!ft_strcmp(av[index], "-f") && (*options)[1] == 0)
		(*options)[1] = index + 1;
	else if (!ft_strcmp(av[index], "-e") && (*options)[2] == 0)
		(*options)[2] = 1;
	else if (!ft_strcmp(av[index], "-b") && (*options)[2] == 0)
		(*options)[3] = 1;
	else
		return (0);
	return (1);
}

int			ft_options(int **options, int ac, char **av)
{
	int	i;

	i = 1;
	if (!((*options) = (int*)malloc(sizeof(int) * 4)))
		return (0);
	while (!ft_isnumber(av[i]) && i < ac - 1)
		++i;
	(*options)[0] = i;
	(*options)[1] = 0;
	(*options)[2] = 0;
	(*options)[3] = 0;
	if (ft_isnumber(av[i]))
		--i;
	while (i > 0)
	{
		if (!ft_valid_option(av, i, options))
			return (ft_error((*options)[2], "invalid option\n"));
		--i;
	}
	return (1);
}
