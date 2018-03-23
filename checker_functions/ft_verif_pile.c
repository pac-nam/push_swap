/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 12:00:39 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 12:09:34 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int		ft_verif_pile(int *pile, int *opt)
{
	int		to_verif;
	int		i;

	to_verif = 0;
	while (++to_verif < pile[0])
	{
		i = to_verif;
		while (++i <= pile[0])
			if (pile[to_verif] == pile[i])
				return (ft_error(opt[2], "double number"));
		++to_verif;
	}
	return (1);
}
